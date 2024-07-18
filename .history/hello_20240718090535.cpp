#include <iostream>
#include <string>
using namespace std;


struct node
{
    int data; 
    node *next;
};

node *head;

void insertNode(int val);
void displayNodes();
void deleteNode();
int main()

{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);

  displayNodes();

}

void insertNode(int val){
    node *new_node, *last;
    new_node = new node;
    new_node->data = val;
    new_node->next = nullptr;
    if(head == NULL){
        head = new_node;
        new_node->next = NULL;
    }else{
        last = head;
        while(last->next != NULL){
            last = last->next;

        }
        last->next = new_node;
        new_node->next = NULL;
    }
}

void displayNodes(){
      node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    } 
}

void deleteNode(){
    node *current = head
}