#include <iostream>
#include "ArrayList.h"
#include "NodeList.h"

void print_menu() {
    std::cout << "1 - ArrayList" << std::endl;
    std::cout << "2 - NodeList" << std::endl;
}

int main() {
    int operation;
    print_menu();
    List* list;
    std::cin >> operation;
    switch (operation) {
        case 1:
            list = new ArrayList{};
            break;

        case 2:
            list = new NodeList{};
            break;

        default:
            return 0;

    }

    list->add_back(1);
    list->add_back(2);
    std::cout << "element 2" << "  " << list->find(2) << std::endl;
    list->delete_back();
    list->print();

    delete(list);

    return 0;
}

//List
//-add_back
//-delete_back
//-print
//-find
    //ArrayList
    // -custom realization
    //NodeList
    // -custom realization