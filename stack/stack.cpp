#include<iostream>
#include<string>


using namespace std;

class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack(){
            top = -1;
            for(int i=0;i<5;i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }

        }

        bool isFull(){
            if(top==4){
                return true;
            }
            else{
                return false;
            }
            }
        
        void push(int val){
            if(isFull()){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                arr[top] = val;
            }
            }

        int pop(){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            else{
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            } 
        }

        int peek(int pos){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            else{
                return arr[pos];
            }
        }

        int count(){
            return (top+1);
        }

        int change(int pos, int val){
            arr[pos] = val;
            cout<<"Value Changed at Position "<<pos<<" is : "<<arr[pos]<<endl;
            return arr[pos];
        }

        void display(){
            cout<<"All Values in the Stack are :"<<endl;
            for(int i=4;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
};


int main(){
    Stack s1;
    int option, position, value;

    do{
        cout<<"What Operation do you want to perform? Select Option Number. Enter 0 to Exit."<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. Peek"<<endl;
        cout<<"6. Count"<<endl;
        cout<<"7. change"<<endl;
        cout<<"8. display"<<endl;
        cout<<"9. Clear Screen"<<endl;

        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"Enter an item to push in the stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                int popVal;
                popVal = s1.pop();
                cout<<"Popped Values is :"<<popVal<<endl;
                break;
            case 3:
                if(s1.isEmpty()){
                    cout<<"Stack is Empty"<<endl;
                }else{
                    cout<<"Stack is not Empty"<<endl;
                }
                break;
            case 4:
                if(s1.isFull()){
                    cout<<"Stack is Full"<<endl;
                }else{
                    cout<<"Stack is not Full"<<endl;
                }
                break;
            case 5:
                cout<<"Enter Position of item you want to peek"<<endl;
                cin>>position;
                cout<<"Peek Function Called - Value at position "<<position<<" is "<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"Count Function Called - Number of Items in the Stack are : "<<s1.count()<<endl;
                break;
            case 7:
                cout<<"Change Function Called - "<<endl;
                cout<<"Enter Position of item you want to change : "<<endl;
                cin>>position;
                cout<<"Enter Value you want to change : "<<endl;
                cin>>value;
                s1.change(position, value);
                break;
            case 8:
                cout<<"Display Function Called - "<<endl;
                s1.display();
                break;
            case 9:
                system("clear");
                break;
        }
    }while(option!=0);

    return 0;
}


