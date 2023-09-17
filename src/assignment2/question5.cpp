// Assignment 2 question 5
#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node *next;
    Node *prev;
};

// a function that allows me to insert a node at the begining, as stacks defination
void push(Node *&head, string value)
{
    Node *newNode = new Node{value, head};
    head = newNode;
}
// function to pop out the first node from list, as stacks defination
void pop(Node *&head, string value)
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
// a function that displays all nodes
void display(const Node *head)
{
    const Node *current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    // pushing nodes to the stack
    push(tail, "Mickyas");
    push(tail, "Teklemariam");
    push(tail, "Tesfaye");
    cout << "All nodes after pushing" << endl;
    // displaying all the node before
    display(tail);
    // poping the last pushed node, as the pronciple lastIn lastOut
    pop(tail, "Tesfaye");
    cout << "The last pushed node is removed after poping" << endl;
    display(tail);
    return 0;
}
