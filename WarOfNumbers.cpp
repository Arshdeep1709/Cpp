#include<iostream>
using namespace std;

int main(){
    cout << "Enter Length" << endl;
    int n;
    cin >> n;
    
    int sumEven = 0;
    int sumOdd = 0;
    
    cout << "Enter Numbers : " << endl;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << "Even numbers : ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout << arr[i] << " ";
        }
    }
    cout <<"\nSum of even numbers : ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sumEven += arr[i];
        }
    }
    cout << sumEven << " ";
    
    cout << "\nOdd numbers : ";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout << arr[i] << " ";
        }
    }
    
        cout <<"\nSum of odd numbers : ";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            sumOdd += arr[i];
        }
    }
    cout << sumOdd << " ";
    
    cout <<"\nDifference : ";
    int diff;
    if(sumOdd > sumEven){
        diff = sumOdd - sumEven;
    }
    else{
        diff = sumEven - sumOdd;
    }
    cout << diff;
    
    return 0;
}