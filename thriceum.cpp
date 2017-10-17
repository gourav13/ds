#include<iostream>
using namespace std;

int main()
{    int n=10;
int am[32];
    int a[1000]={8,6,8,6,7,5,8,6,5,5};
    //cin>>n;
    for(int j=0;j<32;j++)
    {
        am[j]=0;
    }
  int ans=0;
    for(int i=0;i<n;i++)
    {
       // cin>>a[i];
        for(int j=0;j<32;j++)
        {
            if(1&a[i]>>j){
                am[j]++;
                cout<<am[j]<<"  " ;}
        }
    }
  //  for(int i=0;i<n;i++)

        for(int j=0;j<32;j++)
        {
          //  cout<<am[j]<<" ";
        }

        for(int j=31;j>=0;j--)
        {
            if(am[j]%3==1){
            ans=ans|1;
            ans=ans<<1;}
            else
                {   ans=ans|0;
                    ans=ans<<1;}
        }




   /* int ans1=ans;
    int ans2=ans;
    int pos=0;
    for(int i=0;;)
    {
        if(1&ans)
            break;
        else
            {pos++;
            ans=ans>>1;}
    }
    //cout<<pos;
    for(int i=0;i<n;i++)
    {
        if(1&a[i]>>pos)
            {ans1^=a[i];
      //      cout<<"a"<<i<<" "<<a[i]<<endl;
      }

    }
    ans2^=ans1;
    cout<<ans1<<" "<<ans2;

*/
//cout<<ans;
    return 0;
}
