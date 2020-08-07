#ifndef LAB1_C___LIST_H
#define LAB1_C___LIST_H


class List{

public:
    List();

    void addElement(int data);
    void pasteElement();
    void printList();
    void printSize() const;
    void getLast();
    int getFirst();
    void getNext();
    void getPrevious();
    void retrieve();
    void position();
    void deleteElement(int deleteData);
    void makeNull();

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
};


#endif //LAB1_C___LIST_H
