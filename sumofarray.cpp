#include <iostream>
using namespace std;

int getsum(int *arr,  int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remain=getsum(arr+1, size-1);
    int sum= arr[0] +remain;
    return sum;
}

int main() {
    int arr[5]={2,5,6,1,2};
    int size=5;
    int sum= getsum(arr, size);
    cout<<sum<<endl;
    

    return 0;
}
