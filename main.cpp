#include "List.h"

int main()
{

    List newNode;
    newNode.addElement(12);
    newNode.addElement(23);
    newNode.addElement(54);
    newNode.addElement(54);
    newNode.addElement(228);
    newNode.getFirst();
    newNode.deleteElement(12);
    newNode.getLast();
    newNode.getFirst();
    newNode.printList();
    newNode.printSize();

    return 0;
}