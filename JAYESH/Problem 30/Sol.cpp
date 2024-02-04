#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3};
    int result = 0;
    for(int i = 0; i<3; i++){
        result = result*10 + arr[i];
    }
    result = result + 1;
    cout << "The new number is: "<<result<<endl;
    for(int i = 2; i>=0; i--){
        arr[i] = result%10;
        result = result/10;
    }
    return 0;
}