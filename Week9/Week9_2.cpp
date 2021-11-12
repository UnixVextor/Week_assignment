//จงเขียนโปรแกรมเพื่อตรวจสอบว่าเป็น จตุรัสกล หรือไม่ (Level 5)
#include <iostream>
#include<ctype.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int i = 0;
    int last;
    while(i < num * num){
        cin >> last;
        ++i;
    }
    if(num*num % 2 == 0 && isdigit(last) == true) cout << "Yes";
    else if(num * num % 2 == 1 && isdigit(last) == true) cout << "No";  
    
}