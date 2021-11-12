//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b > b+c){
        if(a+b > a+c){
            cout << a << " "<< b;
        }else{
            cout << a << " "<< c;
        }
    }else if(b+c > a+c){
            cout << b << " "<< c;
    }else{
            cout << a << " "<< c;
    }

    return 0;
}