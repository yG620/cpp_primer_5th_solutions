//
//  ex12_22.cpp
//  Exercise 12.22
//
//  Created by yG620 on 20/9/27
//
//  @Brief    >  What changes would need to be made to StrBlobPtr to
// create a class that can be used with a const StrBlob? Define a class
// named ConstStrBlobPtr that can point to a const StrBlob.
//
//  @KeyPoint > 1.
//

#ifndef CP5_ex12_22_h
#define CP5_ex12_22_h

#include <exception>
#include <initializer_list>
#include <memory>
#include <string> 
#include <stdexcept>

using std::string;
using std::vector;

class StrBlobPtr;
class StrBlob {
    friend class StrBlobPtr;
   public:
    using size_type = vector<string>::size_type;

    StrBlob() : data(std::make_shared<vector<string>>()) {}
    StrBlob(std::initializer_list<string> il): data(std::make_shared<vector<string>>(il)) {}

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

    // StrBlobPtr interface
    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlobPtr begin() const;
    StrBlobPtr end() const;

   private:
    void check(size_type i, const string& msg) const {
        if (i >= data->size()) throw std::out_of_range(msg);
    }

   private:
    std::shared_ptr<vector<string>> data;
};

class StrBlobPtr {
    friend bool eq(const StrBlobPtr &, const StrBlobPtr &);
   public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    StrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}

    std::string &deref() const;
    StrBlobPtr &incr();
    StrBlobPtr &decr();

   private:
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string &) const;
};

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = wptr.lock();
    if(!ret) {
        throw std::runtime_error("Unbound StrBlobPtr");
    }
    if (i>=ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string &StrBlobPtr::deref() const { 
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr() { 
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr &StrBlobPtr::decr() { 
    --curr;
    check(curr, "decrement past begin of StrBlobPtr");
    return *this;
}

// begin and end declaration
inline StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end(){
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}

// const begin and end declaration
inline StrBlobPtr StrBlob::begin() const {
    return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end() const{
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}

// StrBlobPtr's compare operation: external interface
inline bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
    auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
    if (l == r) 
        return (!r || lhs.curr == rhs.curr);
    else 
        return false;
}

inline bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
    return !eq(lhs, rhs);
}

#endif