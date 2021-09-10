#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;

int matrix1[x][y];
int matrix2[x][y];

for(int i = 0;i<x;i++){
    for(int  j= 0; j<y;j++){
        cin >> matrix1[i][j];
    }
}

for(int i = 0;i<x;i++){
    for(int  j= 0; j<y;j++){
        cin >> matrix2[i][j];
    }
}

cout  << "outout --------------------" << "\n" ; 
for(int i = 0;i<x;i++){
    
    for(int  j= 0; j<y;j++){
        cout << matrix1[i][j] + matrix2[i][j] << " ";
    }
    cout << "\n";
}
    return 0;
}
