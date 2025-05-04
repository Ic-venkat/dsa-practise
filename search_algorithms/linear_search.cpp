#include<iostream>

using namespace std;

void linearSearch(int arr[], int n){

    int temp = -1;
    for(int i=0; i<5; i++){
        if(arr[i] == n){
            cout<<"Match found at "<<i<<endl;
            temp = 0;
        }
    }
    if(temp == -1){
        cout<<"No match found"<<endl;
    }
}


int main(){
    int arr[5] = {1,22,34,5,7};
    cout<<"Please enter an element to search"<<endl;
    int num;
    cin>>num;
    linearSearch(arr, num);
    return 0;
}