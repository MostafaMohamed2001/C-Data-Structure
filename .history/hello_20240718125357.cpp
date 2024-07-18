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
void deleteNode(int val);
void insertNodeBegan(int val);
int main()

{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);

  displayNodes();
  deleteNode(40);
  displayNodes();

  insertNodeBegan(1);
  insertNodeBegan(2);
  
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
    cout << endl;
}

void deleteNode(int val){
    node *current = head;
    node *prev = head;

    if(current -> data == val){
        head = current->next;
        free(current);
        return;
    }
    while(current->data != val){
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free(current);
}

void insertNodeBegan(int val){
    node *new_node = new node;
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}