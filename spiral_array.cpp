#include<iostream>
using namespace std;
# define r 3
# define c 4
int si=0;
int ei=r-1;
int ej=c-1;
int sj=0;
void print(int a[10][10],int si=0,int ei=r,int sj=0,int ej=c )
{ int i,j;
    //base case
if(si>ei||sj>ej)
    return;
    //rec case
    while(si<=ei&&sj<=ej)
    {
        for( j=0;j<ej;j++)
        {
            cout<<a[si][j];
        } j--;si++;
        for( i=si;i<ei;i++)
        {
            cout<<a[i][ei];
        }i--;ej--;
        for( j=ej;j>=0;j--)
            {cout<<a[ei][j];
            }ei--;j++;
        for( i=ei;i>0;i--)
        {
            cout<<a[i][sj];
        }sj++;
    }

   print(a,si,ei,sj,ej );
    return;
}

int main()
{
    int a[10][10]={{1,2,3,5},{2,6,4,7},{6,8,9,2}};
    int n,m;
  //  cin>>n;
    //cin>>m;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    print(a);
  return 0;
}
