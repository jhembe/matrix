#include<iostream>
using namespace std;


    void printmatrix(int matrix_name,string label)
    {   
        cout<<"Bellow is the "<<label<<" matrix : \n";
        for(int i = 0;i<=2;i++){
            for(int j =0;j<=2;j++){
            cout<<"\t"<<matrix_name[i][j]<<" ";
            }
        cout<<endl;
        }
    }

int main(){
    int num1[3][3];
    printmatrix(num1,"first");
}
