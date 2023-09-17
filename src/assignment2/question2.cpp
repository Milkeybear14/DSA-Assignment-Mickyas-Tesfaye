// Assignment 2 question 2
#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node *next;
    Node *prev;
};

void insertAtLast(Node *&tail, std::string value)
{
    Node *newNode = new Node{value, tail};
    tail = newNode;
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

int main()
{
    Node *tail = nullptr;

    insertAtLast(tail, "Tesfaye");
    insertAtLast(tail, "Mickyas");
    insertAtLast(tail, "Meron");
    displayList(tail);

    // this is for my PC memory safety

    while (tail != nullptr)
    {
        Node *temp = tail;
        tail = tail->next;
        delete temp;
    }

    std::cout << "List after deletion:"
              << tail << "\n";

    return 0;
}
