// Assignment 2 question 3
#include <iostream>
#include <string>
using namespace std;

struct Node
{
    std::string data;
    Node *next;
    Node *prev;
};

void insertNode(Node *&tail, std::string value)
{
    Node *newNode = new Node{value, tail};
    tail = newNode;
}

void deleteNode(Node *&head, std::string value)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == value)
        {
            //update prv
            if (current->prev != nullptr)
            {
                current->prev->next = current->next;
            }
            else
            {
                head = current->next;
                if (head != nullptr)
                {
                    head->prev = nullptr;
                }
            }
            //update nxt
            if (current->next != nullptr)
            {
                current->next->prev = current->prev;
            }
            delete current;
            return; // Node found and deleted
        }
        current = current->next;
    }
}

void displayList(const Node *tail)
{
    const Node *current = tail;

    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    Node *head = nullptr;
    Node *tail = nullptr;
    // adding new nodes, function from question number2
    insertNode(head, "Mickyas");
    insertNode(head, "Meron");
cout<<"List Before Deletion"<<endl;
    displayList(head);
// deleting list
    deleteNode(head,"Mickyas");
cout<<endl<<"List after deletion"<<endl;
    displayList(head);
    return 0;
}
