#include <bits/stdc++.h>

using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  struct ListNode* head=NULL;
void insertAtEnd(int d,int flag){
        struct ListNode* temp = new ListNode(0);
         struct ListNode* a = head;
        temp->val=d;
        if(flag==1) temp->next=a->next->next;
        else temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            while(a->next!=NULL){
                a=a->next;
            }
            a->next=temp;
        }
    }
  void print(ListNode* a){
      int c=12;
        while(a!= NULL&& c>=0){
            c--;
            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }
    ListNode* detectCycle(ListNode* A) {
    ListNode* fast=A;
    ListNode* slow=A;
    int flag=0;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            flag=1;
            break;
        }
    }
    if(flag==1){
        slow=A;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    return NULL;

}
int main()
{
   ListNode* temp = head;
    insertAtEnd(1,0);insertAtEnd(2,0);insertAtEnd(3,0);insertAtEnd(4,0);insertAtEnd(5,0);insertAtEnd(6,1);
    print(head);
    temp=detectCycle(head);
    if(temp==NULL) cout<<"NO LOOP";
    else cout<<"Loop found!, starts from "<<temp->val;
    return 0;
}
