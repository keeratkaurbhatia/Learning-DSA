#include <bits/stdc++.h> //header file to include the in-built stuff we use
using namespace std; //to avoid using std:: before every in-built stuff

struct Node //making a node, can be class as well
//the only difference between struct and class is that in struct everything is public by default whereas in class everything is private by default
//moreover, class allows for oop features like inheritance, encapsulation, etc.
{
    public: //can be omitted as struct members are public by default
    int data; //data part of the node
    Node* next; //pointer to the next node

    Node(int data1, Node* next1 = NULL) //constructor to initialize the node, next1 is optional and defaults to NULL
    {
        data = data1; //initialize data
        next = next1; //initialize next
    }
};

int main() //main function, where the execution of the program begins
{
    vector<int> arr = {1, 2, 3, 4, 5}; //a node of the first element of this array will be created
    Node head = Node(arr[0]); //creating a node with data as arr[0] and next as NULL. we'll update it later to make this vector to a linked list.
    cout << head.data << endl; //as we made it as object, we use . to access members
    cout << head.next << endl;

    vector<int> arr1 = {6, 2, 3, 4, 5};
    Node* head1 = new Node(arr1[0]); //more standard way, with pointer, using new keyword to allocate memory on heap
    //as we made it as pointer, we use -> to access members
    cout << head1->data << endl;
    cout << head1->next << endl;

    return 0; //indicates that the program ended successfully
}