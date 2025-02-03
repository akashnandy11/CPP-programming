// swap two numbers without using third variable//

 #include<iostream>  
iostream = header file 

using namespace std; 
int main() 
{ int x,y;
cout<<"enter value of x:";
cin>>x;
cout<<"enter value of y:";
 cin>>y;
  x=x^y;
  y=x^y;
  x=x^y;

  cout<<"value of x  is: "<<x<<endl;
  cout<<"value of y  is: "<<y<<endl;
 return 0;
} 






 
 
 
 
 //ques= to check whether a num is odd or even//
#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"enter value of num1:";
    cin>>num1;

    if(num1 % 2 == 0)
    {
        cout<<"the number is even";
    }
else{
    cout<<"the number is odd";
}
return 0;

}














/*ques = print all odd numbers and even numbers between 1 to 100; */

 #include<iostream>
using namespace std;
int main(){
     int i;
     for(i=0; i<= 100 ; ++i)
     {
         if(i % 2 == 0)
    {
        cout<<i<< "\t" <<"the number is even"<<endl;
    }
else{
    cout<<i<< "\t" <<"the number is odd"<<endl;
     }
     }    
return 0;
}









/* WAP TO DIVIDE PEOPLE INTO 3 CATEGORY
BELOW 12  CHILD
BTW 12 AND 18  TEENAGER
ABOVE 18     ADULT 
*/
#include<iostream>
using namespace std;
int main ()
{
int x;
cout<<"the age is:";
cin>>x;
 
 if(x < 12)
 {
 cout<<"child";
 }
 else if (x >= 12 && x <= 18)
 {
    cout<<"teenager";
 }
else 
   { cout<<  "adult" ;
   }
return 0;
} 







/* ternary operator example*/
#include<iostream>
using namespace std;
int main()
{ 
    int marks;
    cout<<"enter marks:";
    cin>>marks;

    marks>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;
    return 0;
    } 












   /*ques: wap  to print if a number if it is even and divisible by 3 */

   #include<iostream>
   using namespace std;
   int main()
   {
    int i;
    cout<<"enter the number =";
    cin>>i;
if (i%2==0 && i%3==0)
{
    cout<<"the number is even and divisible by 3";
}
else if (i%2==0)
{
    cout<<"the number is even";
}
else if (i%3==0){
    cout<<"the number is divisible by 3";
}
else
cout<<"the number is neither even nor divisible by 3";
return 0;
   } 











  /*  wap to print a calculator using switch case*/


  #include<iostream>
  using namespace std;
  int main()
  {
    int num1 ,num2,ans ;
    char sign;
cout<<"enter the num 1 vaue = ";
cin>>num1;

cout<<"enter the operator = ";
cin>>sign;

cout<<"enter the num2 value = ";
cin>>num2;

switch (sign)
{
case '+':
ans = num1 + num2;
    cout<<"num1 + num2 = "<<ans;
    break;

    case '-':
    ans= num1-num2;
    cout<<"num1 - num2 = "<<ans;
    break;

 case '*':
 ans=num1 * num2 ;
 cout<<"num1 * num2 = "<<ans;
 break;

 case '/':
 ans= num1 / num2;
 cout<<"num1 / num2 = "<<ans;
 break;   

default:
cout<<"invalid choice";
    break;
}
return 0;

  }












 /*WHILE LOOP EXAMPLE */
 WAP TO PRINT  NATURAL NUMBER FOR  IS INPUT
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"how much number u want = ";
    cin>>
    n;
i=1;
    while(i<=n)
{
        cout<<i<<endl;
        i++;
    }
    return 0;
} 













/* wap to print sum of first  natural numbers                     */
#include<iostream>
using namespace std;
int main()
{
    int n;
     int sum=0;

     cout<<"enter the value of n = ";
     cin>>n;

     int i = 1;
     while(i<=n)
     {
     sum=sum+i;
     i++;}
cout<<sum<<endl;
return 0;
} 












/* wap print the first multiple of 5 which is also a multiple of 7 */
#include<iostream>
using namespace std;
int main()
{
    int i =5;
    while(true){
        
        if(i%7==0)
        {
cout<<i<<endl;
break;
        }
       i+=5;
    }
    for(int i=5;;i+=5){
        if(i%7==0)
        cout<<i<<endl;
        break;
    }
return 0;
}













/* wap to print  the sum of n integers using do while loop */
#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;

int i=0;
do{
    int num;
    cin>>num;
    i+=num;
    n--;

}while(n>0);


cout<<i<<endl;

return 0;
} 
