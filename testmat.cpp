// here i just want the user to enter and view the matrix, without any operation
#include<iostream>
using namespace std;

int main(){
    //now let's create our first array sequence
    int mat_arr[3][3];
    
    
    // now let's create a loop to enter numbers within a 3 by 3 matrix
    for(int i {0};i<3;i++){
        for(int j {0};j<3;j++){
            cout<<"Enter element of dimension ["<<i+1<<"]["<<j+1<<"] :: ";
            cin>>mat_arr[i][j];
        }
        cout<<endl;
    }    

    //now let's create a loop to view the array entered..
    for(int i = 0;i<=2;i++){
        for(int j =0;j<=2;j++){
            cout<<"\t"<<mat_arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;

}