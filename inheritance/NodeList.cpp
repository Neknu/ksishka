//
// Created by Asus on 16.03.2020.
//

#include "NodeList.h"

#include <iostream>

void NodeList::add_back(int value) {
    if(head == nullptr) {
        head = new Node(value);
        return;
    }

    Node* current = head;
    while(current->next != nullptr)
        current = current->next;
    current->next = new Node(value);
}

bool NodeList::delete_back() {
    if(head == nullptr) {
        return false;
    }

    Node* previous = nullptr;
    Node* current = head;
    while(current->next != nullptr) {
        previous = current;
        current = current->next;
    }
    delete(current);
    if(previous != nullptr)
        previous->next = nullptr;
    else
        head = nullptr;
    return true;
}

bool NodeList::find(int value) {
    Node* current = head;
    while(current != nullptr) {
        if(current->value == value)
            return true;
        current = current->next;
    }
    return false;
}

void NodeList::print() {
    Node* current = head;
    std::cout << "This is NodeList" << std::endl;
    while(current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
}






