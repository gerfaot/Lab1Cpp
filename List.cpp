#include <iostream>
#include "List.h"

List::List()
{
    head = nullptr;
    size = 0;
}

void List::addElement(int data)
{
    if(head == nullptr)
    {
        head = new node(data, nullptr);
    }
    else
    {
        node * temp = head;
        while(temp -> next != nullptr)
        {
            temp = temp -> next;
        }
        temp -> next = new node(data, nullptr);
        size++;
    }
}

void List::printList()
{
    node * toSee = head;

    while(toSee != nullptr)
    {

        std::cout << toSee -> data << std::endl;
        toSee = toSee -> next;
    }
    std::cout << '\n' << std::endl;
}

void List::printSize() const
{
    std::cout <<"From 0 to " << size << std::endl;
}

void List::deleteElement(int deleteData)
{
    node * temp = head;

    if(head -> data == deleteData)
    {
        temp = head;
        std::cout << "data " << deleteData << " deleted" << '\n' << std::endl;
        head = head -> next;
        size = size - 1;
        delete temp;
        return;
    }

    while (temp != nullptr)
    {
        if (temp -> data == deleteData)
        {
            node * killP;
            killP = temp;
            temp = temp -> next;
            delete killP;
            std::cout << "data " << deleteData << " deleted" << '\n' << std::endl;
            size = size - 1;
        }
        else
            temp = temp -> next;

    }
}

void List::getLast()
{
    node * temp = head;
    while (temp != nullptr){
        if(temp -> next == nullptr)
        {
            std::cout << "Last element - " << temp -> data << '\n' << std::endl;
            return;
        }
        else temp = temp -> next;
    }

}

void List::getNext()
{
    std::cout << 
}

void List::getPrevious()
{

}

void List::pasteElement()
{

}

void List::makeNull()
{

}
void List::retrieve()
{

}

void List::position()
{

}
int List::getFirst()
{
    std::cout << "First element - " << head -> data << '\n' << std::endl;
    return head -> data;
}