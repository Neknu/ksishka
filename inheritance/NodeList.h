#ifndef INHERITANCE_NODELIST_H
#define INHERITANCE_NODELIST_H

#include "List.h"

struct Node {
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = nullptr;
    }
};

class NodeList: public List {
private:
    Node* head;
public:
    NodeList() {
        head = nullptr;
    }

    void add_back(int value) override;
    bool delete_back() override;
    bool find(int value) override;
    void print() override;
};

#endif //INHERITANCE_NODELIST_H
