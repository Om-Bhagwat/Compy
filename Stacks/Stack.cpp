#include<bits/stdc++.h>

using namespace std;

class Stack{

    private:
        vector<int> v;
    public:
        void push(int data){
            v.push(data);
        }

        bool empty(){
            return v.size()==0;
        }

        void pop(){
            if(!empty()){
                v.pop_back();
            }
        }

        int top(){
            return v[v.size()-1];
        }
};


int main(){



    return 0;
}


/*
    Stack!! Data Structure.
    ->Last in first Out (LIFO).
    ->Add Elements from the Top and Remove elements from the top.
    ->RealLife Examples. (stack of Books,Pile of plates.)
    ->Viewing the topmost element.


    Implementation.

*/
