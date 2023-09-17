// Assignment 2 question 1
#include <iostream>
using namespace std;

struct People
{
    string name;
    int age;
    double height;
};

int main()
{

    People user1;
    user1.name = "Mickyas Tesfaye";
    user1.age = 20;
    user1.height = 1.78;

    People user2;
    user2.name = "Meron Tesfaye";
    user2.age = 29;
    user2.height = 1.60;

    People people[3];

    people[0] = {"Teklemariam Tesfaye", 25, 1.62};
    people[1] = {"Elfinesh Shiferaw", 25, 1.62};
    people[2] = {"Tesfaye Tsegaye", 25, 1.62};

    int size = sizeof(people) / sizeof(people[0]);

    cout<<"-------------------------"<<endl
    <<"Using forloop to iterate"<<endl
    <<"-------------------------"<<endl;
    // using for loop
    for (int i = 0; i <= size-1; i++)
    {
        cout << "Name: " << people[i].name << ", Age: " << people[i].age <<", Height: "<<people[i].height<< endl;
    }

    cout<<"-------------------------"<<endl
    <<"Using foreach to iterate"<<endl
    <<"-------------------------"<<endl;

    // using for each

    for (const People &p : people)
    {
        cout << "Name: " << p.name << ", Age: " << p.age <<", Height: "<< p.height << endl;
    }

    return 0;
}
