// here i just want the user to enter and view the matrix, without any operation
#include<iostream>
using namespace std;


int main(){
    //now let's create our first array sequence
    int mat1[3][3];
    int mat2[3][3];
    

    //NOTE First part matrix

    // now let's create a loop to enter numbers within a 3 by 3 matrix
    for(int i {0};i<3;i++){
        for(int j {0};j<3;j++){
            cout<<"Enter element of dimension ["<<i+1<<"]["<<j+1<<"] :: ";
            cin>>mat1[i][j];
        }
        cout<<endl;
    }    

    cout<<"Bellow is the first matrix : \n";
    //now let's create a loop to view the array entered..
    for(int i = 0;i<=2;i++){
        for(int j =0;j<=2;j++){
            cout<<"\t"<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }


    //NOTE The second part matrix
 
    cout<<"Enter the values for the second matrix \n";
    for(int i {0};i<3;i++){
        for(int j {0};j<3;j++){
            cout<<"Enter element of dimension ["<<i+1<<"]["<<j+1<<"] :: ";
            cin>>mat2[i][j];
        }
        cout<<endl;
    } 
    //realskybri0
    cout<<"Bellow is the overview of the second  matrix : \n";
    //now let's create a loop to view the array entered..
    for(int i = 0;i<=2;i++){
        for(int j =0;j<=2;j++){
            cout<<"\t"<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }  

return 0;

}