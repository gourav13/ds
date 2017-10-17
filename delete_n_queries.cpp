#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    //Node(int d):data(d),next(NULL){}
};

void addAtFront(Node* &head,int data)
{
    Node *newNode=new Node;
    newNode->data=data;
    newNode->next=head;
    head=newNode;

}
/*void addAtFront(Node* &head,int d){
    ///Insert a element at the front of the LL
    Node *t = new Node(d);
    t->next = head;
    head = t;
}*/
Node  * takeInput(int n)
{   int i=1;
    Node *head=NULL;
   //Node* head=new Node;
    //head->next=NULL;
    //head->data=1;
    int data;
    //cin>>data;
    while(i<=n)
        {  cin>>data;
            addAtFront(head,data);
        i++;
        //cout<<*head;
        }
        return head;
}
void print(Node *head)
{
    while(head!=NULL)
        {//cout<<"head"<<endl<<head<<endl;
         cout<<head->data<<" ";


    //       cout<<"head->next"<<endl;
  //         cout<<head->next;
  //cout<<endl<<"head move forward"<<endl;;
           head=head->next;

    //       cout<<endl;
          // cout<<*head;
        }
        cout<<endl;

}
/*int searchElement(Node * head, int d )
{   if(head==NULL)
   return NULL;
 int a=1;
    while(head!=NULL)
    {
        if(head->data==d)
            return  a;
        else

            {head=head->next;
            a++;
            }
    }
    return NULL;
}
*/
void delete1(Node *&head,int x)
{    Node*temp=head;
    if (x == 0)
    {
        head = temp->next;   // Change head
        delete temp;               // free old head
        return;
    }
    int i=1;
    while(i<x)
    {
        temp=temp->next;
        i++;
    }
    Node *t=temp->next;
    temp->next=temp->next->next;
    delete t;
}

void reverse1(Node* &head){
    Node*current = head;
    Node*prev = NULL;
    Node*next;

    while(current!=NULL){
            ///Save the next node
        next = current->next;
        ///Make current node point to prev
        current->next = prev;

        ///Update prev & current
        prev = current;
        current = next;

    }
    head = prev;
}

int main()
{
   int n, q,x;
   cin>>n;
   cin>>q;
   Node *head=takeInput(n);
   //print(head);
   reverse1(head);
   for(int j=0;j<q;j++)
   {cin>>x;
   delete1(head,(x));
   print(head);}
    return 0;
}
