#include <iostream>

using namespace std;

int  dp(int *a,int n)
{  //base case;
    int ans=0;
    if(n==0||n==1)
        return n;
     else if(a[n]!=-1)
            return a[n];
  else
    { a[n]=dp(a,n-1)+dp(a,n-2);
     return a[n];
    }
}

int main()
{  int a[10];
for(int i=0;i<10;i++)
    a[i]=-1;

    cout << dp(a,5) << endl;
 for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
    return 0;
}
