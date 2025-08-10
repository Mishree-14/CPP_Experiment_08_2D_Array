//Mishree Kalaria
//24070123052
//Batch: A2
#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1, r2, c2, k, l, f1=0, f2=0;
    cout<<"Enter matrix-1 rows: ";
    cin>>r1;
    cout<<"Enter matrix-1 columns: ";
    cin>>c1;
    cout<<"Enter matrix-2 rows: ";
    cin>>r2;
    cout<<"Enter matrix-2 columns: ";
    cin>>c2;

    int a1[r1][c1], a2[r2][c2], add[r1][c1], prod[r1][c2];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Enter element-("<<i<<j<<"): ";
            cin>>a1[i][j];
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<"Enter element-("<<i<<j<<"): ";
            cin>>a2[i][j];
        }
    }
    
    cout<<"---Matrix 1---"<<"\n";
    for(int i=0;i<r1;i++){
        for(int j=0; j<c1; j++){
            
            cout<<a1[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"---Matrix 2---"<<"\n";
    for(int i=0;i<r2;i++){
        for(int j=0; j<c2; j++){
            
            cout<<a2[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    if(r1==r2 && c1==c2) {
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                add[i][j] = a1[i][j] + a2[i][j];
            }
        }
        f1=1;
    }
    else {
        cout<<endl<<"Dimensions of Matrices should be equal to perform Addition of Matrices"<<endl;
    }

    if(c1 == r2){
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                prod[i][j]=0;
                for(k=0;k<r2;k++){
                    prod[i][j] += a1[i][k] * a2[k][j];
                }
            }
        }
        f2=1;
    }
    else {
        cout<<endl<<"Column of matrix-1 is not equal to row of matrix-2."<<"\n" << "Therefore Multiplication can't be performed." << endl;
    }
    if(f1==1){
        cout<<endl<<"---ADDTION OF MATRICES---"<<endl;
        for(k=0;k<r1;k++) {
            for(l=0;l<c1;l++) {
                cout<<add[k][l];
                cout<<"  ";
            }
            cout<<endl;
        }
    }
    if(f2==1){
        cout<<endl<<"---MULTIPLICATION OF MATRICES---"<<endl;
        for(k=0;k<r1;k++) {
            for(l=0;l<c2;l++) {
                cout<<prod[k][l];
                cout<<"  ";
            }
            cout<<endl;
        }
    }
    return 0;
}
