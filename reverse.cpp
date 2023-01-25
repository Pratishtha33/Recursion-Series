#include<iostream>
using namespace std;

void reverse(string& name, int i, int j ) {

  

    //base case
    if(i>j)
        return ;

    swap(name[i], name[j]);
    i++;
    j--;

    //Recursive call
    reverse(name,i,j);

}

int main() {

    string name = "abcde";
    cout << endl;
    reverse(name, 0 , name.length()-1 );
 
   

    return 0;
}
