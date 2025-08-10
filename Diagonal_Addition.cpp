//mishree Kalaria
//24070123052
//Batch: A2

#include<iostream>
using namespace std;

int main() {
    int r, c, i, j;
    
    cout<<"Enter row for matrix: ";
    cin>>r;
    cout<<"Enter row for matrix: ";
    cin>>c;
    
    int a1[r][c], add=0, sum=0;
    
    
    if(r==c){
        cout<<"---Diagonal Additon---";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cout<<"Enter element ("<<i<<j<<"): ";
                cin>>a1[i][j];
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i==j){
                    add+=a1[i][j];
                }
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i+j==(r-1)){
                    sum+=a1[i][j];
                }
            }
        }
        cout<<endl<<"Sum of diagnol-1: "<<add<<endl;
        cout<<"Sum of diagnol-2: "<<sum<<endl;
    }
    else{
        cout<<"Diagnol addition can't be performed for given dimensions"<<endl;
    }
    return 0;
}    
