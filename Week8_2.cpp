/*จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ c:\temp\data.txt ดังตัวอย่าง (Level 4)
*/
#include <iostream>
#include<string>
#include <fstream>
#include<direct.h>
using namespace std;
int main(){
    mkdir("c:/temp");
    fstream file;
    file.open("c:\\temp\\data.txt",ios::out);
    string text;
    cout << "Input data string:\n";
    for(text = " ";text != ".";){
        cin >> text;
        file << text << endl;
    }
    file.close();

}
