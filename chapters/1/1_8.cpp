#include <iostream>

int main(int argc, const char **argv)
{
    // Both programs are legal
    std::cout << "/*";
    std::cout << "*/";

    //Comment Pairs Do Not Nest.
    std::cout << /* "*/" */;
    
    // The output is /* 
    std::cout<< /* "*/ " /* " /*" */;

    return 0;
}