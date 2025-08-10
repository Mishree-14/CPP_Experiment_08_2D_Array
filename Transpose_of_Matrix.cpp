//Mishree Kalaria
//24070123052
//Batch:A2

#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1, r2, c2;
    
    
    cout<<"Enter number of rows: ";
    cin>>r1;
    cout<<"Enter number of columns: ";
    cin>>c1;
    
    int a1[r1][c1];
    if (r1==c1){
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                cout<<"Enter element "<<i+1<<j+1<<": ";
                cin>>a1[i][j];
            }
        }
    
        r2=c1;
        c2=r1;
        cout<<"\n"<<"---Original Matrix---"<<"\n";
        for(int i=0;i<r1;i++){
            for(int j=0; j<c1; j++){
                
                cout<<a1[i][j]<<"\t";
            }
            cout<<endl;
        }
        int m[r2][c2];
        
        cout<<endl<<"---Transposed Matrix---\n";
        
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                m[i][j]=a1[j][i];
                cout<<m[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Transpose can't be performed!";
    }
    return 0;
}
