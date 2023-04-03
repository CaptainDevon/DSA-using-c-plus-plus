#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertNode(int data)
    {
        Node* newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void printlist()
    {
        Node* ptr = head;
        if (head == NULL)
        {
            cout << "empty list" << endl;
            return;
        }

        while (ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }

    void deleteNode(int nodeofset)
    {
        Node* ptr = NULL, * ptrp = head;
        int ListLen = 0;
        if (head = NULL)
        {
            cout << "empty list" << endl;
        }
        while (ptr != NULL)
        {
            ptr = ptr->next;
            ListLen++;
        }
        if (ListLen < nodeofset)
        {
            cout << "index out of range" << endl;
            return;
        }

        ptr = head;

        if (nodeofset == 1)
        {
            head = head->next;
            delete ptr;
            return;
        }

        while (nodeofset > 1)
        {
            ptrp = ptr;
            ptr = ptr->next;
        }

        ptrp->next = ptr->next;

        delete ptr;

    }


};
int main()
{
    LinkedList list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(5);

    list.printlist();
    cout << endl;

    list.deleteNode(2);
    cout << "the list after deletion" << endl;
    list.printlist();
    return 0;
}