#include <iostream>
#include "SinglLinkedList.h"
#include "DoubleLinked.h"
#include "Stack.h"
#include "Queue.h"
#include "PriorityQueue.h"
#include "QueueArray.h"
#include "StackArray.h"

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
    list.bubbleSort();
    cout<<list;
}
void Stacklist(){
    Stack <int> A;
    if(A.isEmpty())
        cout<<"is empty"<<endl;
    else
        cout<<"not empty"<<endl;
//    cout<<A.Peek();
//    A.Pop();
    A.Push(1);
    A.Push(2);
    A.Push(3);
    A.Push(12);
    A.Push(52);
    A.Push(2);
    cout<<A;
    if(A.isEmpty())
        cout<<"is empty"<<endl;
    else
        cout<<"not empty"<<endl;
    cout<<"Pop"<<endl;
    A.Pop();
    cout<<A;
    cout<<"Peek"<<endl;
    cout<<A.Peek()<<endl;

}
void Queuelist(){
    Queue <int> B;
    if(B.isEmpty())
        cout<<"Is empty"<<endl;
    B.Enqueue(3);
    B.Enqueue(1);
    B.Enqueue(8);
    cout<<B;
    B.Dequeue();
    cout<<B;
    cout<<B.Peek()<<endl;
}
void PriorList(){
    Priority <int> C;
//    if (C.isEmpty())
//        cout<<"Is empty"<<endl;
    C.insertAtEnd(1);
    C.insertAtEnd(6);
    C.insertAtEnd(2);
    cout<<C;
//    cout<<C.Peek()<<endl;
    C.bubleSort();
    cout<<C;
   // cout<<C.Getsize();
}
void StackArrayy(){
    StackArray<int>A;
    if (A.isEmpty())
        cout<<"Stack is empty"<<endl;
    A.push(2);
    A.push(7);
    A.push(2);
    A.push(5);

    cout<<A;
    cout<<"Pop ";
    A.pop();
    cout<<A;
    cout<<"Last element "<<A.peek()<<endl;
}
void QueueArrayy(){
    QueueArray<int>A;
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    A.enqueue(5);
    A.enqueue(2);
    A.enqueue(7);
    cout<<A;
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    cout<<"Dequeue"<<endl;
    A.dequeue();
    cout<<A;
    cout<<"First element in queue: "<<A.peek()<<endl;

}
int main() {
//    cout<<"SinglList"<<endl;
//    singlylist();
//    cout<<"DoubleList"<<endl;
    //doubleLinkList();
    cout<<"Stack"<<endl;
    Stacklist();
    cout<<"Queue"<<endl;
    Queuelist();
    cout<<"Priority queue"<<endl;
    PriorList();
    cout<<"StackArray"<<endl;
    StackArrayy();
    cout<<"QueueArray"<<endl;
    QueueArrayy();
    return 0;
}
