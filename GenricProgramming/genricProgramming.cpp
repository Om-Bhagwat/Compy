#include<iostream>

using namespace std;
template<typename T>
int search(T a[], int n, T key){
    for(int p = 0;p<n;p++){
        if(a[p]==key){
            return p;
        }
    }
    return n;
}

int main(){

    int a[] ={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int key=5;
    cout<<search(a,n,key)<<"\n";
    return 0;
}

