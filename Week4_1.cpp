#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int k=n-i; k>=1;k--){
            cout << " ";
        }
        for(int j=1 ;j<=(i*2)-1;j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}