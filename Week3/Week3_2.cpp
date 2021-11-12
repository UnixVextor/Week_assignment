//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int r1=0 , r2=0 ,r3=0;
    cin >> a >> b >> c;
    r1 = a + b - c;
    r2 = b + c - a;
    r3 = a + c - b;

    if(r1 > r2){
        if(r1 > r3){
            cout << a << " " << b;
        }else{
            cout << a << " " << c;
        }
    }else if(r2 > r3){
            cout << b << " " << c;
    }else{
            cout << a << " " << c;
    }

    return 0;
}