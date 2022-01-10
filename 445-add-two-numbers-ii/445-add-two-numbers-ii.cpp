class Solution {
public:
ListNode *createnode(int val)
{
ListNode *t=new ListNode(val);
t->next=NULL;
return t;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int> s1;
    stack<int> s2;
    auto *t1=l1;
    auto *t2=l2;
    while(t1!=NULL)
    {
        s1.push(t1->val);
        t1=t1->next;
    }
    while(t2!=NULL)
    {
        s2.push(t2->val);
        t2=t2->next;
    }
    int value=0;
    int carry=0;
 ListNode *res=NULL;
    ListNode *pointer=NULL;
    
 while(!s1.empty()||!s2.empty())
 {
    value=carry+(!s1.empty()?s1.top():0)+(!s2.empty()?s2.top():0);
      if(!s1.empty())
          s1.pop();
if(!s2.empty())
{
s2.pop();
}
carry=value>9?1:0;
value=value%10;
auto *temp=createnode(value);
if(res==NULL)
{
res=temp;
pointer=temp;
}
else
{
temp->next=pointer;
pointer=temp;

     }
 }
    if(carry==1)
    {
        auto *t=createnode(1);
        t->next=pointer;
        pointer=t;
        t=pointer;
    }


return pointer;
}
};