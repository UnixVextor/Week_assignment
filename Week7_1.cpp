#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int matrix1[x][y];
    int num;

    for(int i = 0; i < (y * x)*2;i++){
        if(i<(y*x)){
            cin >> matrix1[i/x][i%x];
        }else{
            cin >> num;
            matrix1[(i/x)-3][i%3] += num;
        }
    }

cout  << "outout --------------------" << "\n" ; 

    for(int i = 0;i<x;i++){
        for(int  j= 0; j<y;j++){
        cout << matrix1[i][j] << " ";
        }
        cout << "\n";
    }   

    

    return 0;
}