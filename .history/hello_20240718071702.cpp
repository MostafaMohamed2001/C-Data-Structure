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

int main()

{
   
}

void insertNode(int val){
    node *new_node, *last;
    new_node = new node;
    if(head == NULL){
        head = new_node;
        new_node->next = NULL;
    }else{
        last = head;
        while(last != NULL){
            last = last->next;

        }
        last->next = 
    }
}