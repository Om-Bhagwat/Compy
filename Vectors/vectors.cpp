#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> b(5,10); //Vector named b having 5 integers each with value 10.
    vector<int> c(b.begin(),b.end());  //Copy all elements from b to .
    vector<int> d{1,2313,23423};

    //Iteration over the vector.

    for(int i = 0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;


    return 0;

    //using iterators

    for(auto it=c.begin();it!=c.end();it++){
        cout<<(*it)<<" ";
    }

    cout<<endl;


    //For each loop

    for(int x :c){
        cout<<x<<" ";
    }

    cout<<endl;
}




//Theory..

/*

    /To avoid Doubling we use reserve method.
    v.reserve(1000);

    Vector=>Dynamic array||Automatically Shrink and Grow.
    v.max_size()//Maximum no of elemtns a vector can hold in  worst case.
    v.capacity() //Size of underlying array.


    .push_back(//O(1))
    .pop_back()(O(1))//removes the last element
    .insert(v.begin()+3,100)  //Inserts in the middle.O(n)
    .erase(v.begin()+3);    //Erase come elements from middle
    .erase(v.begin()+2,v.begin()+5);//Erases a range.
    .front()//Gives the frontmost element.
    .back()//Gives the last element.


    vector<pair<int,int>>
    v.push_back(make_pair(x,y))

*/
