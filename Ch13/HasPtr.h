#ifndef CP5_ex13_05_h
#define CP5_ex13_05_h

#include <string>
using std::string;


class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) : ps(new std::string(s)), i(0)
    {
    }
    HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    ~HasPtr() { delete ps; }

    HasPtr& operator=(const HasPtr& rhs){
        string* str = new string(*rhs.ps);
        delete ps;//delete the original space;

        ps = str;
        i = rhs.i;
        return *this;
    }
private:
    std::string* ps;
    int i;
};

#endif