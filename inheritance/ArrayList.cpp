#include "ArrayList.h"
#include <iostream>

void ArrayList::add_back(int value) {
    arr[length] = value;
    length++;
}

bool ArrayList::delete_back() {
    if(length <= 0)
        return false;
    length--;
    arr[length] = 0;
    return true;
}

bool ArrayList::find(int value) {
    for(int i = 0; i < length; i++) {
        if(arr[i] == value)
            return true;
    }
    return false;
}

void ArrayList::print() {
    std::cout << "This is ArrayList" << std::endl;
    for(int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
}
