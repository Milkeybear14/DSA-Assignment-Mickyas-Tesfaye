// Assignment 2 question 4
#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node *next;
    Node *prev;
};

void displayBackward(const Node *tail)
{
    const Node *current = tail;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->prev;
    }

    cout << endl;
}

void insert(Node *&head, string value)
{
    Node *newNode = new Node{value, head};
    head = newNode;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    // inserting new nodes
    insert(head, "Mickyas");
    insert(head, "Teklemariam");
    insert(head, "Meron");
    // displaying the nodes backwards
    tail = head; // Set the tail to the head for backward traversal
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    std::cout << "##############################" << endl
              << "List backward                       " << endl
              << "##############################" << endl;
    displayBackward(tail);

    // for cleaning memory purpose

    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
