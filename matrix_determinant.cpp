#include<iostream>
using namespace std;

int main(){
    // now let's start with initializing our array
    int arr[3][3];
    // now that we've initialize a 3 by 3 array, now lets prompt the user to enter values within the array

    // using for loop for that
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the [ "<<i+1<<" ][ "<<j+1<<" ] element ::: ";
            cin>>arr[i][j]; // now this is responsible in the input of dynamic addresses within the loop
        }
        cout<<endl;
    }
    cout<<"\n";
    cout<<"***********************************************************";
    cout<<"\n";

    // now lets print the matrix entered;
    cout<<"\tBellow is the entered array\n";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<"\n";
    }


    // now let's try the logic of determinant
    /*
    now let's figire out the formula of the thing
    arr[0][0](((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]))-(arr[0][1](())))
    */
   // now for the determinant we'll use the following formula..
   int determinant = ((arr[0][0]*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2])))-(arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2])))+(arr[0][2]*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]))));
   cout<<"The determinant of the matrix entered is ::: "<<determinant<<endl;
   return 0;
}