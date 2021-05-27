#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Stack{

    private:
        vector<T> v;
    public:
        void push(T data){
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

        T top(){
            return v[v.size()-1];
        }
};


int main(){

    Stack<int> s;
    Stack<char> e;
    Stack<bool> t;


    return 0;
}


/*
    Stack!! Data Structure.
    ->Last in first Out (LIFO).
    ->Add Elements from the Top and Remove elements from the top.
    ->RealLife Examples. (stack of Books,Pile of plates.)
    ->Viewing the topmost element.


    Implementation.

    Stack Standard Template Library(STL).
    stack<int> s;
    s.push(3);O(1)
    s.push(2);
    s.pop();O(1)
    s.pop();
    s.empty();


    Reverse Stack(Actual Stack).

    1)Using another Stack(1 stack).
    2)Using Recursion.

    Balanced Parenthesis.

    Stock Span Problem.

*/
