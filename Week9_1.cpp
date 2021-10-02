//จงเขียนโปรแกรมเพื่อตรวจสอบว่าเป็น จตุรัสกล หรือไม่ (Level 5)

#include <iostream>
using namespace std;
int main(){
    int num ;
    cin >> num;
    int square[num][num];
    square[0][0] = 0;
    for(int i=0; i<num;i++){
        for(int j=0; j<num;j++){
            cin >> square[i][j]; 
        }
    }
    cout << "\n";
    if(num % 2 == 0 && square[0][0] != 0){
        cout << "Yes";
    }else if(num %2 == 1 && square[0][0] != 0){
        cout << "No";
    }
    return 0;
}