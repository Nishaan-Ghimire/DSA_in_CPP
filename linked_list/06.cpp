#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

Node* head = NULL; // global variable to store the head of the list

void insertAtBeginning(int data)
{
    // Create a new node
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data)
{
    // Create a new node
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    // Check if the list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Find the end of the list
    Node* current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Insert the new node at the end of the list
    current->next = newNode;
}
void insertatpos(int data,int pos)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    int i=1;
  

    // Check if the list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Find the end of the list
    Node* current = head;
    while(i<pos-1){
        current=current->next;
        i++;
    }

    // Insert the new node at the end of the list
    newNode->next=current->next;
    current->next = newNode;

    
}
void displayList()
{
    // Check if the list is empty
    if (head == NULL)
    {
        std::cout << "The list is empty." << std::endl;
        return;
    }

    // Traverse the list and print the data of each node
    Node* current = head;
    while (current != NULL)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    insertAtBeginning(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtBeginning(28);
    insertatpos(2,45);

    displayList(); // Output: 10 20 30

    return 0;
}


