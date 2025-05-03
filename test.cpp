#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int countOfOnes(int n){
    int count =0;
    if(n == 0){
        return 0;
    }
    if(n%2 == 1){
        count = count + 1;
    }
    return count + countOfOnes(n/2);
}

int countSetBits(int n) {
    long long count = 0;
    for(int i=1; i<=n;i++){
        count = count + countOfOnes(n);
        cout<<i<< " " << countOfOnes(n)<<endl;
    }

    return count%MOD;
}


int main(){
    cout<<countSetBits(5);
    return 0;
}