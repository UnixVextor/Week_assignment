#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int matrix1[x][y];
    int num,count = 0;
    cout << y*x;
    for(int i = 0; i < (x * y)*2;i++){
        if(i<(y*x)){
            cin >> matrix1[i/y][i%y];
        }else {
            cin >> num;
            matrix1[i/y-x][i%y] += num;
        }
        
        cout << "B" << i << endl;
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