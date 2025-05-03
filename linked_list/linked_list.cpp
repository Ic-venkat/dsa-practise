#include<iostream>

using namespace std;


class Node{
    public:
        int key;
        int data;
        Node* next;
    
        Node(int k, int d){
            key = key;
            data = data;
            next = NULL;
        }
};

class singlyLinkedList(){
    public:
        Node* head;
    singlyLinkedList(){
        head = NULL;
    }

    singlyLinkedList(Node* h){
        head = h;
    }

    Node* nodeExists(int k){
        Node* temp = NULL;
        Node* ptr = head;
        while(ptr!=NULL){
            if(ptr->key == k){
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(Node* n){


        Node* ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}


int main(){
    return 0;
}