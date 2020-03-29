#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

struct ListNode* head=NULL;
struct ListNode* a=head;

void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }

 void insertAtEnd(int d){
     struct ListNode* temp= new ListNode(0);
      temp->val=d;
        temp->next=NULL;
    if(head==NULL){
     head=temp;
     a=head;
    }
    else{
        a->next=temp;
        a=a->next;
    }
 }


 int main()
{
    ListNode* temp = head;
    insertAtEnd(1);insertAtEnd(2);insertAtEnd(3);insertAtEnd(4);insertAtEnd(5);insertAtEnd(6);
    print(head);
    return 0;
}


