// intlist.cpp
// Implements class IntList
// YOUR NAME(S), AND DATE

#include "intlist.h"

#include <iostream>
using std::cout;


// return sum of values in list
int IntList::sum() const {
    return 0; // REPLACE THIS NON-SOLUTION
}

// returns true if value is in the list; false if not
bool IntList::contains(int value) const {
    return false; // REPLACE THIS NON-SOLUTION
}

// returns maximum value in list, or 0 if empty list
int IntList::max() const {
    return 0; // REPLACE THIS NON-SOLUTION
}

// returns average (arithmetic mean) of all values, or
// 0 if list is empty
double IntList::average() const {
    return 0.0; // REPLACE THIS NON-SOLUTION
}

// inserts value as new node at beginning of list
void IntList::insertFirst(int value) {
    // IMPLEMENT
}

<<<<<<< HEAD:lec-07/lab03-variation/intlist.cpp

// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

// constructor sets up empty list
IntList::IntList() : head(0),tail(0) { }

=======


// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

>>>>>>> 3eb9b612b680bcb65af56e71b1547927a329417d:lec-07/lab03/intlist.cpp

// append value at end of list
void IntList::append(int value) {
    if (head == 0) { // empty list
        head = new Node;
        head->info = value;
        head->next = 0;
    }
    else {
        Node *n = head;
        while (n->next) // not last node yet
            n = n->next;
        n->next = new Node;
        n->next->info = value;
        n->next->next = 0;
    }
}

// print values enclose in [], separated by spaces
void IntList::print() const {
    Node *n = head;
    cout << '[';
    while (n) {
        cout << n->info;
        if (n->next)
            cout << " ";
        n = n->next;
    }
    cout << ']';
}

// return count of values
int IntList::count() const {
    int result = 0;
    Node *n = head;
    while (n) {
        ++result;
        n = n->next;
    }
    return result;
}