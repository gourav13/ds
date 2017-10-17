#include <iostream>

using namespace std;

void min_coin(int *coin,int vl)
{int dp[8][50];
    for(int i=0;i<=8;i++)
    { cout<<"hello3";
        for(int j=0;j<=vl;j++)
        {
        cout<<"hello4";
            if(i==0||j==0)
                dp[i][j]=0;
            else if(coin[i-1]<=j)
             dp[i][j]=min(1+dp[i][j-coin[i-1]],dp[i-1][j]);

            else
                dp[i][j]=dp[i-1][j];
        }
    }

    for(int i=0;i<=8;i++)
    {
        for(int j=0;j<=vl;j++)
         {
           cout<<dp[i][j]<<" ";
         }
         cout<<endl;
    }
    return;
}

int main()
{

   int a[8]={1,2,5,10,20,50,100,500};
   int vl=9;
   cout<<"hello";
   min_coin(a,vl);
   cout<<"hello1";
   int n=8;


    return 0;
}
