/* ให้นักศึกษารับข้อมูลเก็บใน arrayขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงตัวเลขที่เลขข้างเคียงเป็นเลขคี่
 ตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)*/
#include <iostream>
using namespace std;
int main(){
    int num[10];
    cout << "Enter the array : ";
    for(int x = 0;x<10;x++){
        cin >> num[x];
    }
    for(int i = 1;i<10;i++){
        int sum = num[i-1] + num[i+1];
        if(sum % 2 == 0 && (num[i-1] %2) != 0 && (num[i+1]%2) != 0){
        cout << num[i] << " ";
        }
    }
    

    return 0;
}