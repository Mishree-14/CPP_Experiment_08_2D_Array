//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

int main() {
    int M[3][3];

    
    cout<< "Enter 9 numbers for 3:3 matrix): ";
    
    
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>M[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
    

    return 0;
}
