#include "List.h"

int main()
{
    List newNode;

    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(45);
    newNode.addElement(54);
    newNode.addElement(228);



    newNode.getFirst();
    newNode.deleteElement(45);
    newNode.getLast();

    newNode.getNext(newNode.getFirst());

    newNode.position(54);
    newNode.position(58);
    newNode.printList();
    newNode.printSize();

    return 0;
}