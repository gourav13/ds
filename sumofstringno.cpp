#include<iostream>
using namespace std;
//int sum=0;
void  printsum(char * in,int i,int sum)
     {


        if(in[i]=='\0')
        {
            cout<<sum;
            return;
        }

            int digit=0;
            digit=in[i]-'0';
        sum=digit+sum;

        printsum(in,i+1,sum);

         return;

     }

int main() {
    char input[100];

    cin.getline(input,100);

   printsum(input,0,0);

	return 0;
}
