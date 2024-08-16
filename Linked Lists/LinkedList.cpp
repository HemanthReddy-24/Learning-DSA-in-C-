#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void print(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void InsertAtBegining(Node*& head,int d){
    Node* newNode = new Node();
    newNode->data=d;
    newNode->next = head;
    head = newNode;
}

void InsertAtEnd(Node*& head,int d){
    Node* newNode = new Node();
    newNode->data=d;
    newNode->next=nullptr;

    if(head == nullptr){
        head=newNode;
        return;
    }

    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }

    temp->next=newNode;
}

int main(){
    Node *head;
    head=(struct Node*) malloc(sizeof(struct Node));

    InsertAtBegining(head,5);
    print(head);
    InsertAtBegining(head,6);
    print(head);
    InsertAtBegining(head,8);
    print(head);

    InsertAtEnd(head,10);
    print(head);
    InsertAtEnd(head,25);
    print(head);
    InsertAtEnd(head,48);
    print(head);


    return 0;
}
