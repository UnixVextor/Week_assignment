/*จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย 
* เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)*/
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout << "Enter number : ";
    cin >> n;
    int x = n,z=1;
    for(int i = 1; i<=n*2-1;i++){
        if(i<=n){
            for(int j = 1;j<=i;j++){
                cout << " ";
            }
            for(int k = i*2-1; k<=n*2-1;k++){
            cout<<"*";
        }
        }else if(i>n){
            for(int l=1;l<=x-1;l++){
                cout <<" ";
            }

            for(int m =1;m<=z+2;m++){
                cout <<"*";
            }
            z+=2;
            x--;
        }
        
        cout <<"\n";

    }
    return 0;
}