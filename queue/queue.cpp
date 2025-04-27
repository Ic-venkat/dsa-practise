#include<iostream>

using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        Queue(){
            front = -1;
            rear = -1;
            for(int i =0;i<5;i++){
                arr[i]=0;
            }
        }

        bool isEmpty(){
            if(front ==-1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(rear == sizeof(arr)-1){
                return true;
            }
            else{
                return false;
            }
        }

        void enQueue(int val){
            if(isFull()){
                cout<<"Queue is full"<<endl;
                return;
            }
            else if(isEmpty()){
                rear = 0 ;
                front = 0 ;
                arr[rear] = val;
            }
            else{
                rear++;
                arr[rear] = val;
            }
        }

        int deQueue(){
            int x;
            if(isEmpty()){
                cout<<"queue is empty"<<endl;
                return 0;
            }
            else if(front == rear){
                x = arr[front];
                arr[front] = 0;
                front = -1;
                rear = -1;
                return x;
            }
            else{
                x = arr[front];
                arr[front] = 0;
                front++;
                return x;
            }
        }

        int count(){
            return rear-front+1;
        }

        void display(){
            for(int i=0;i<5;i++){
                cout<<arr[i]<<"  ";
            }
        }
};

int main(){
    Queue q1;
    int option, value;

    do{
        cout<<"\nWhat Operation do you want to perform? Select Option Number. Enter 0 to Exit."<<endl;
        cout<<"1. enQueue()"<<endl;
        cout<<"2. deQueue()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. display"<<endl;
        cout<<"7. Clear Screen"<<endl;

        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"Enter the value to enter into queue"<<endl;
                cin>>value;
                q1.enQueue(value);
                break;
            case 2:
                cout<<"Dequeue Operation is called"<<q1.deQueue()<<endl;
                break;
            case 3:
                if(q1.isEmpty()){
                    cout<<"Queue is empty"<<endl;
                }
                else{
                    cout<<"Queue is not empty"<<endl;
                }
                break;
            case 4:
                if(q1.isFull()){
                    cout<<"Queue is full"<<endl;
                }
                else{
                    cout<<"Queue is not full"<<endl;
                }
                break;
            case 5:
                cout<<"count operation is called\n Count of items in queue is:"<<q1.count()<<endl;
                break;
            case 6:
                cout<<"Display function called" << endl;
                q1.display();
                break;
            case 7:
                system("clear");
                break;
            default:
                cout<<"Enter proper option number"<<endl;
            
        }
    }while(option!=0);

    return 0;
}



