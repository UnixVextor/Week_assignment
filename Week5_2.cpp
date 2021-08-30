#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int x = n*2,z=n+2,y=2;
    for(int i=1;i<=n*2-1;i++){
        if(i<=n){
            for(int j=1;j<=x;j++){
                if(x-(x-j) <= i){
                    cout<<" ";
                }else {cout << "*";}  
            }
            x--;
        }else{
            for(int j=1;j<=z;j++){
                if(z-(z-j)<=i-y){
                    cout<<" ";
                }else cout << "*";
            }
            y+=2;
            z++;
        }
        cout<<"\n";
    }

    return 0;
}