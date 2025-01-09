#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            // cout<<j; Low to High
            cout<<(i-j+1) << " "; //high to low
            j++;
        }
        cout<<endl;
        i++;
    }
}