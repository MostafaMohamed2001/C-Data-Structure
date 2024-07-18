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
v
int main()

{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);

  

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