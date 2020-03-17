#ifndef INHERITANCE_LIST_H
#define INHERITANCE_LIST_H

#include <sstream>
//abstract class (Interface)
class List {
public:
    virtual void add_back(int value)=0;
    virtual bool delete_back()=0;
    virtual bool find(int value)=0;
    virtual void print(std::stringstream& out)=0;

    virtual ~List() = default;
};

#endif //INHERITANCE_LIST_H
