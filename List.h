#ifndef LAB1_C___LIST_H
#define LAB1_C___LIST_H


class List{
private:

    struct node
    {
        node * next;
        int data;

        explicit node(int dt, node * nxt)
        {
            data = dt;
            next = nxt;
        }
    };
    node * head;
    int size;
    node * getPosledniy(node * head);

public:
    List();

    void addElement(int data);
    void pasteElement();
    void printList();
    void printSize() const;

    node * getLast();
    node * getFirst(); //return head
    void getNext(); //address
    void getPrevious();
    void retrieve();
    void position(int element);
    void deleteElement(int deleteData);
    void makeNull();


};


#endif //LAB1_C___LIST_H
