#include<bits/stdc++.h>

using namespace std;


class node{
public:
    int data;
    node *next;

    node(int d){
    data=d;
    next=NULL;
    }

};

void build(){


}

void insertAtHead(node*&head,int d){

    if(head==NULL){
        head = new node(d);
        return;
    }

    node *n = new node(d);
    n->next = head;
    head=n;
}

int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

void insertAtTail(node*&head,int data){

    if(head==NULL){
        head=new node(data);
        return;
    }

    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}

void insertAtMiddle(node*&head,int d,int p){

    if(head==NULL or p==0){

        insertAtHead(head,d);
        return;
    }
    else if(p>length(head)){
        insertAtTail(head,d);
    }
    else{
        int jump =1;
        node*temp =head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }

        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }

}

void printLink(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }

}

void deleteHead(node*&head){

    if(head==NULL){
        return;
    }
    else{
        node*temp=head->next;
        delete head;
        head=temp;
    }
}

bool search(node*head,int key){
    if(head==NULL){
        return false;
    }
    else{
        while(head!=NULL){
            if(head->data==key){
                return true;
            }
            head=head->next;
        }
        return false;
    }

}


node*take_input(){

    int d;
    cin>>d;
    node*head=NULL;
    while(d!=-1){
        insertAtHead(head,d);
        return;
    }
    return head;

}

void reverse(node*&head){
    node*C = head;
    node *P =NULL;
    node*N;

    while(C!=NULL){

        //Save the next node

        N=C->next;
        //Make the current node point to prev
        C->next=P;
        //update P and C take them 1 step forward.
        P=C;
        C=N;

    }
}


int main(){

    node*head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,4);
    printLink(head);
    cout<<endl;
    insertAtTail(head,6);
    printLink(head);
    cout<<endl;
    insertAtMiddle(head,9,3);
    printLink(head);

    return 0;
}


/*

    Reverse A LinkList.


*/
