#include <iostream>
#include "SinglLinkedList.h"
#include "DoubleLinked.h"

void singlylist() {
    SinglLinkedList <int >list;
    if(list.isEmpty())
        cout<<"List is empty"<<endl;
    cout<<"Adding to the beginning"<<endl;
    list.InsertAtBeginning(5);
    list.InsertAtBeginning(2);

    cout<<list;
    cout<<"Adding to the end"<<endl;
    list.insertAtEnd(6);
    list.insertAtEnd(5);
    list.insertAtEnd(4);

    cout << list;
    cout << "Removing from end: " << endl;
    list.removeFromEnd();
    cout << list << endl;

    cout << "Removing from beginning: " << endl;
    list.removeFromBeginning();
    cout << list << endl;

    cout << "Inserting at index 1 value 52" << endl;
    list.insertAtIndex(1, 52);
    cout << list << endl;

    cout << "Removing at index 2 " << endl;
    list.removeAtIndex(2);
    cout << list << endl;

    cout << "Item at position 1: " << list[1] << endl;
    cout << "Does value 5 exist? " << list.search(5) << endl;
    cout << "Size of list: " << list.getSize() << endl;

}

void doubleLinkList() {
    DoubleLinkedList <int >list;
    cout << "Inserting 3 items at end " << endl;
    list.insertAtEnd(7);
    list.insertAtEnd(8);
    list.insertAtEnd(9);
    cout << list << endl;

    cout << "Inserting 4 items at beginning " << endl;
    list.insertAtBeginning(0);
    list.insertAtBeginning(-7);
    list.insertAtBeginning(-8);
    list.insertAtBeginning(-9);
    cout << list << endl;

    cout << "Removing from end: " << endl;
    list.removeFromEnd();
    cout << list << endl;

    cout << "Removing from beginning: " << endl;
    list.removeFromBeginning();
    cout << list << endl;

    cout << "Inserting at index 2 value 56" << endl;
    list.insertAtIndex(2, 56);
    cout << list << endl;

    cout << "Removing at index 1 " << endl;
    list.removeAtIndex(1);
    cout << list << endl;

    cout << "Item at position 4: " << list[4] << endl;
    cout << "Does value 56 exist? " << list.search(56) << endl;
    cout << "Size of list: " << list.getSize() << endl;
}
int main() {
    cout<<"SinglList"<<endl;
    singlylist();
    cout<<"DoubleList"<<endl;
    doubleLinkList();
    return 0;
}
