#ifndef INHERITANCE_ARRAYLIST_H
#define INHERITANCE_ARRAYLIST_H

#include "List.h"

int const MAX_SIZE = 1000;

class ArrayList: public List {
private:
    int arr[MAX_SIZE];
    int length;
public:
    ArrayList() {
        for(int i = 0; i < MAX_SIZE; i++)
            arr[i] = 0;
        length = 0;
    }

    void add_back(int value) override;
    bool delete_back() override;
    bool find(int value) override;
    void print() override;
};

#endif //INHERITANCE_ARRAYLIST_H
