// tree implementation
#include<iostream>
#include<queue>
using namespace std;

queue<int> myQueue;

void printQueue(queue<int> queue){
    while (queue.empty())
    {
        cout<<"Values: "<<queue.back();
        queue.pop();
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    myQueue.push(5);
    myQueue.push(7);

    printQueue(myQueue);

    return 0;
}
