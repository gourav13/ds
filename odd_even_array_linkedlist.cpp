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
int a[1000][100000];int b[1000];
void print(Node *head)
{
    while(head!=NULL)
        {//cout<<"head"<<endl<<head<<endl;
         cout<<head->data<<" ";
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
 void deletespecial(Node *head)
 {
     if(head==NULL)
        return;
     while(head->next!=NULL)
     {  //cout<<"hello";
         if((head->data)==(head->next->data))
         { //cout<<"cool";
             Node *temp=head->next;
             head->next=head->next->next;
             delete temp;
         }
         else
            {// cout<<"its";

                head=head->next;
               //if(head->next==NULL||head==NULL)
               // break;
            }

     }
     return;
 }

Node *oddeven(Node *head)
{
    // Corner case
    if (head == NULL)
        return NULL;

    // Initialize first nodes of even and
    // odd lists
    Node *odd = head;
    Node *even = head->next;

    // Remember the first node of even list so
    // that we can connect the even list at the
    // end of odd list.
    Node *evenFirst = even;

    while (1)
    {
        // If there are no more nodes, then connect
        // first node of even list to the last node
        // of odd list
        if (!odd || !even || !(even->next))
        {
            odd->next = evenFirst;
            break;
        }

        // Connecting odd nodes
        odd->next = even->next;
        odd = even->next;

        // If there are NO more even nodes after
        // current odd.
        if (odd->next == NULL)
        {
            even->next = NULL;
            odd->next = evenFirst;
            break;
        }

        // Connecting even nodes
        even->next = odd->next;
        even = odd->next;
    }

    return head;
}
int main()
{
   long long int n, q,x;
  int j=0;
   cin>>q;
  for(int i=0;i<q;i++)
  {
   cin>>n;

   Node *head=takeInput(n);
   reverse1(head);
  // print(head);
   Node *temp=oddeven(head);

   // print(temp);
  b[i]=0;
  j=0;
   while(temp)
           {  
               a[i][j++]=temp->data;
               temp=temp->next;
               b[i]++;
           }
    }
   for(int i=0;i<q;i++)
    {
   for(int k=0;k<b[i];k++)
        cout<<a[i][k]<<" ";
   cout<<endl;}
    return 0;
}
