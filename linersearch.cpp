#include<iostream>
using namespace std;
bool linearsearch(int *arr, int size, int k){
    if(size==0){ //base case
        return false;
    }

 if(arr[0]==k) //base case
       return true;
  else{ 
    bool remainingPart= linearsearch(arr+1, size-1, k); //recurence relation
    return remainingPart;

}

}

int main(){
    int arr[5]= {2,4,5,8,9};
    int size=5;
    int key=8;
    bool ans= linearsearch(arr, size, key);
    if(ans){
        cout<<"key found"<<endl;
        else 
        cout<<"not found";
    }
    return;
    
}
