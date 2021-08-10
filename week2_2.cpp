#include<iostream>
using namespace std;
float BMI(float h,float w){
    h = h/100;
    return w/(h*h);
}

int main(){
    
    float w,h,bmi;
    cout << "Enter your height: ";
    cin >> h;
    cout << "Enter your weight: ";
    cin >> w;
    bmi = BMI(h,w);
    if(bmi >= 30.0){
        cout << "Result : Obesity";
    }else if(bmi >= 25.0 && bmi <= 29.9){
        cout << "Result : Overweight";
    }else if(bmi >= 18.5 && bmi <= 24.9){
        cout << "Result : Normal weight";
    }else if(bmi < 18.5 && bmi >= 0){
        cout << "Result : Underweight";
    }else{
        cout << "Error";
    }

    return 0;
}