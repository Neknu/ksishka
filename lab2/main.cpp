#include <iostream>
#include <sstream>

const int MAX_SIZE = 1000;

using namespace std;

int length(char s1[]) {
    int i = 0;
    while(s1[i] != '\0') {
        i++;
    }
    return i;
}

void swap(char s1[], char s2[]) {

    char stemp[std::max(length(s1), length(s2)) + 1];

    int i = -1;
    do {
        i++;
        stemp[i] = s1[i];
    }
    while(s1[i] != '\0');

    i = -1;
    do {
        i++;
        s1[i] = s2[i];
    }
    while(s2[i] != '\0');

    i = -1;
    do {
        i++;
        s2[i] = stemp[i];
    }
    while(stemp[i] != '\0');
}

char* getline() {
    char s[1000];

    std::cin.getline (s,MAX_SIZE);
    char* ret = s;
    return ret;
}

void push_back(char s[], char to_add) {
    s[length(s)] = to_add;
    s[length(s)] = '\0';
}

void  pop_back(char s[]) {
    if (length(s) == 0)
        return;
    s[length(s) - 1] = '\0';
}

char* copy(char s[], int len, int pos) {
    char* ret = static_cast<char *>(malloc(MAX_SIZE));
    int slength = length(s);
    int counter = 0;
    while(pos < slength && counter < len) {
        ret[counter] = s[pos];
        pos++;
        counter++;
    }
    ret[counter] = '\0';
    return ret;
}

void resize(char s[], int size) {
    if (size < length(s)) {
        s[size] = '\0';
        return;
    } else {
        while (length(s) < size) {
            push_back(s, 'g');
        }
    }
}

int main() {
    char cs1[MAX_SIZE] = "Lorem";
    char cs2[MAX_SIZE] = "Ipsum text";
    std::cout << "first: " << cs1 << "-- second: "<< cs2 << std::endl;

    cout << "swap elements" << endl;
    swap(cs1,cs2);
    std::cout << "first:" << cs1 << "-- second: " << cs2 << std::endl;

    cout << "push back element:" << endl;
    push_back(cs1, 'a');
    cout << cs1 << endl;

    cout << "pop back element:" << endl;
    pop_back(cs1);
    cout << cs1 << endl;

    cout << "print next line (getline):" << endl;
    cout << getline() << endl;

    cout << "copy part of first word:" << endl;
    cout << copy(cs1, 4, 3) << endl;

    cout << "resize first word:" << endl;
    resize(cs1,20);
    cout << cs1 << endl;

    return 0;
}