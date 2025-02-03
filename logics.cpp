/* wap to print the number of digits in a number

enter the number= 3244586543
10

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number= ";
cin>>n;

int count=0;
while(n>0){
    count++;
    n=n/10;
}
cout<<count<<endl;

return 0;
}
*/













/* find the sum of digits in a given number


enter the number: 786546
36


#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"enter the number: ";
cin>>num;
int sum = 0;
while(num>0){
    int last= num % 10;
   sum= sum + last;
   num=num/10;

}
cout<<sum<<endl;
return 0;
}
*/







/* REVERSE A NUMBER

enter the number: 18276
67281 


#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter the number: ";
cin>>num;
int reverse = 0;
while(num>0){
    int last= num % 10;
   reverse= reverse * 10 + last;
   num=num/10;

}
cout<<reverse<<endl;
return 0;
}
*/












/* find the sum of the series
s= 1-2+3-4.....n

enter the number= 5
3

#include<iostream>
using namespace std;
int main()
{
    int  num,i, sum;
    cout<<"enter the number= ";
    cin>>num;
    sum=0;
    for(i=1;i<=num;i++)
     {if(i%2==0)
     sum=sum-i;
else
sum=sum+i;
     }
     cout<<sum<<endl;
     return 0;
}
*/











/*WAP TO PRINT FACTORIAL

enter the number= 5
120

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number= ";
    cin>>n;
    int factorial=1;
    for (i=1;i<=n;i++)
    factorial=factorial*i;
    cout<<factorial;
}
*/












/* WAP TO PRINT A RAISE TO POWER B

 enter the number to be subscript= 2
enter the number to be supersscript= 4
16 


#include<iostream>
using namespace std;
int main()
{    int i,a,b;
    cout<<"enter the number to be subscript= ";
    cin>>a;
    cout<<"enter the number to be supersscript= ";
    cin>>b;
    int result=1;
    for(i=1;i<=b;i++)
    result*=a;
    cout<<result<<endl;
}
*/


/*MOST IMPORTANT QUESTION 
CONVERSION OF binary to decimal

enter the number to be covert=111
the converted number is= 7

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number to be covert= ";
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int last =n%10;
        ans=ans + (last*power);
        power=power*2;
        n=n/10;
    }
    cout<<"the converted number is= "<<ans;
}*/

/*MOST IMPORTANT QUESTION 
CONVERSION OF DECIMAL from BINARY

enter  decimal number= 13
the binary number is= 1101

#include<iostream>
using namespace std;
int main()
{int n;
cout<<"enter  decimal number= ";
cin>>n;
 
int ans = 0;
int power = 1;
while(n>0){
    int parity_digit = n%2;
    ans=ans + (parity_digit*power);
    power*=10;
    n/=2;
    }
    cout<<"the binary number is= "<<ans;
    return 0;
}
*/

/* USE OF FUNCTIONS */
#include<iostream>
#include<cmath>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main()
{
    int a=2;
    int b=3;

    
    cout<<add(a,b)<<endl;
    cout<<sqrt(a)<<endl;
    cout<<pow(a,b)<<endl;

    return 0;
}

