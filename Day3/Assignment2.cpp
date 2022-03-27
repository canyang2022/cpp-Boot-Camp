// Write a function that insert linked list node at any position. The function takes the data of the node and the
// node position as inputs.
// For example if we have a linked list contains the followingdata nodes: 11 3 10 50 23 5 60
// If you asked the function to insert a new node has data equals to15 at position 3 the linked list should be: 11
// 3 10 15 50 23 5 60
// Can Yang

#include <istream>

    public:
    int value;
    Node* next_ptr;
};

void InsertNumber(int, int*);


int main()
{
    // FIrst to create the linked list
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* forth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();

    head->value=11;
    head->next_ptr = second;

    second->value=3;
    second->next_ptr = third;

    third->value=10;
    third->next_ptr = forth;

    forth->value=50;
    forth->next_ptr = NULL;

    InsertNumber(66, third->next_ptr);

}
void InsertNumber(int new_value, int* location)
{
    Node* newNode = NULL;
    newNode = new Node();

    third->next_ptr = newNode;

    newNode->next_ptr = forth;
    forth->

}