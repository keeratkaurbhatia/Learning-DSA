#include <bits/stdc++.h> //header file to include the in-built stuff we use
using namespace std; //to avoid using std:: before every in-built stuff

struct Node //making a node, can be class as well
//the only difference between struct and class is that in struct everything is public by default whereas in
//class everything is private by default
//moreover, class allows for oop features like inheritance, encapsulation, etc.
{
    int data; //data part of the node
    Node* next; //pointer to the next node
    Node(int data1, Node* next1 = NULL) //constructor to initialize the node, next1 is optional and defaults to NULL
    {
        data = data1; //initialize data
        next = next1; //initialize next
    }
};

Node* arrayToLinkedList(const vector<int>& arr) //function to convert array to linked list
{ 
    if (arr.empty()) return NULL; //return NULL for empty array

    Node* head = new Node(arr[0]); //create the head node
    Node* current = head; //pointer to track the current node

    for (int i = 1; i < arr.size(); i++) //loop through the array 
    {
        current->next = new Node(arr[i]); //create a new node and link it
        current = current->next; //move to the new node
    }

    return head; //return the head of the linked list
}

int search(Node* head, int val) //function to search for an element in the linked list
{
    Node* temp = head; //temporary pointer to traverse the linked list
    while(temp!=NULL && temp->data!=val) //traverse until the end of the list or until the element is found
    {
        temp = temp->next; //move to the next node
    }
    if (temp==NULL) return -1; //if the element is not found, return -1
    return 1; //if the element is found, return 1
}

int main() //main function, where the execution of the program begins
{
    vector<int> arr = {22,12,34,23}; //input array
    Node* head = arrayToLinkedList(arr); //convert array to linked list
    cout<<search(head, 34); //search for the element 34 in the linked list
    return 0; //indicates that the program ended successfully
}

//OUTPUT: 1 (as 34 is present in the linked list)
//TIME COMPLEXITY: O(n) where n is the number of nodes in the linked list
//SPACE COMPLEXITY: O(1) as we are using only a constant amount of extra space