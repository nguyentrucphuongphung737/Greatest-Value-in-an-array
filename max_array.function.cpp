#include <iostream>
#include <iostream>
#include <stdio.h>
using namespace std;

//function input a dimensional array
void input_array(int a[], int n){
        for (int i=0;i<n;i++){
        cout<<"Input a"<<i<<"]: ";
        cin>>a[i];
    }
}

//function Find greatest value in array
int max_array(int a[], int n, int max){
    max=a[0];
    for(int i=1; i<n ;i++){
        if (max<a[i]) {
            max = a[i];
        }
    }
    return max;
}

int main(){
    int a[1000], n, max;
    cout <<"Input n: \n";
    cin >> n;
    input_array(a,n);
    max = max_array(a,n,max);
    cout<<"The greatest value in array a is: " <<max;
    return 0;
}
