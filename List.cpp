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
    node * prev;
    if(head -> data == deleteData)
    {
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
            killP = temp;                                                                                  //
            prev -> next = temp -> next;                                                                  //
            delete killP;                                                                                //break
            std::cout << "data " << deleteData << " deleted" << '\n' << std::endl;                      //continue
            size = size - 1;
        }
        else
        {
            prev = temp;
            temp = temp -> next;
        }
    }
}

List::node * List::getLast()
{
    node * temp = head;
    while (temp != nullptr){
        if(temp -> next == nullptr)
        {
            std::cout << "Last element - " << temp -> data << '\n' << std::endl;
            break;
        }
        else temp = temp -> next;
    }
}

void List::getNext()
{

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

void List::position(int element)
{
    int count = 0;
    node * temp = head;
    while(temp != nullptr)
    {

        if(temp -> data == element) {

            std::cout << "Position of element - " << count << '\n' << std::endl;
            temp = temp ->next;
        }
        else
        {
            count = count + 1;
            temp = temp -> next;
            std::cout << "No such element" << '\n'<< std::endl;
        }

    }

}
List::node * List::getFirst()
{
    std::cout << "First element - " << head -> data << '\n' << std::endl;
    return head;
}
   List::node * List::getPosledniy(node * head)
{

}