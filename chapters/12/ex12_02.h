//
//  ex12_02.cpp
//  Exercise 12.02
//
//  Created by yG620 on 20/9/20
//
//  @Brief    >  Write your own version of the StrBlob class including the
//  const versions of front and back.
//
//  @KeyPoint > 1. In header files, using std::string; using std::vector;
//  @KeyPoint > 2. note: const versions of front and back. No need for `this`
//  pointer.
//  @KeyPoint > 3.
//

#include <exception>
#include <initializer_list>
#include <memory>
#include <string>
#include <vector>

using std::string;
using std::vector;

class StrBlob {
   public:
    using size_type = vector<string>::size_type;

    StrBlob() : data(std::make_shared<vector<string>>()) {}
    StrBlob(std::initializer_list<string> il)
        : data(std::make_shared<vector<string>>(il)) {}

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string& t) { data->push_back(t); }
    void pop_back() {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    std::string& front() {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    // const version of front
    const std::string& front() const {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string& back() {
        check(0, "back on empty StrBlob");
        return data->back();
    }

    // const version of back
    const std::string& back() const {
        check(0, "back on empty StrBlob");
        return data->back();
    }

   private:
    void check(size_type i, const string& msg) const {
        if (i >= data->size()) throw std::out_of_range(msg);
    }

   private:
    std::shared_ptr<vector<string>> data;
};