/* WAP TO PRINT A PATTERN FOR A RECTANGULAR STAR
******
******
******

#include<iostream>
using namespace std;
int main()
{
    int i,j;                                
    for (i=1;i<=3;i++)
    {
        for(j=1;j<=6;j++)
      {
 cout<<"*";
      }
      cout<<endl;
    }
    return 0;
}
*/













/* pattern
******
*    *
*    *
******
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++){
      if (i==1 || j==1 || i==n || j==m){
 cout<<"*";
      }
      else{
        cout<<" ";
      }
        }
      cout<<endl;
    }
    return 0;
} */












/* pattern 

*
**
***
**** 

#include<iostream>
using namespace std;
int main()
{
    int i,j;                                
    for (i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
      { if(i>=j)
 cout<<"*";
      
      else 
      cout<<" ";
      }
      cout<<endl;
    }
    return 0;
} */












/* pattern

****
 ***
  **
   *
   

#include<iostream>
using namespace std;
int main()
{
    int i,j;                                
    for (i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
      { if(i<=j)
 cout<<"*";
      
      else 
      cout<<" ";
      }
      cout<<endl;
    }
    return 0;
} */












/*    pattern

   *   
  ***
 *****
*******

#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++){
      if (j<=3+i && j>=5-i){
 cout<<"*";
      }
      else{
        cout<<" ";
      }
        }
      cout<<endl;
    }
    return 0;
} 
*/














/* pattern 
123456
123456
123456
123456


#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"enter number of rows= ";
    cin>>n;
    cout<<"enter number of columns= ";
    cin>>m;
    for(i=1;i<=n;i++)
    {
      int k =1;
      for(j=1;j<=m;j++){
        cout<<k;
        k++;
      }
      cout<<endl;
    }
    return 0;
}
*/












/*pattern

enter number od rows = 4
enter number of columns= 6
121212
212121
121212
212121 


#include<iostream>
using namespace std;
int main()
{
  int i,j,k ,m;
  cout<<"enter number od rows = ";
  cin>>k;

  cout<<"enter number of columns= ";
  cin>>m;

  for(i=1;i<=k;i++)
  {
    for(j=1;j<=m;j++)
    {
      int x= i + j;
      if(x%2==0)
      {
        cout<<1;
      }
      else {
        cout<<2;
      }
    }
    cout<<endl;
  }
  return 0;
}
*/












/* pattern 

enter the number of rows = 4
enter the number of columns = 4
1
12
123
1234

#include<iostream>
using namespace std;
int main()
{
  int row, col,i,j;
  cout<<"enter the number of rows = ";
  cin>>row;

  cout<<"enter the number of columns = ";
  cin>>col;

  for(i=1;i<=row;i++)
  { int k = 1;
    for(j=1;j<=col;j++)
   
    { 
      if(i>=j)
      cout<<k;
      k++;
    }
    cout<<endl;
  }
  return 0;
}
*/












/* pattern

    1   
   123
  12345
 1234567

#include<iostream>
using namespace std;
int main()
{
  int i,j,k;
  for(i=0;i<=4;i++)
  {
    int l=1;
for(j=0;j<=7;j++)
{
  if(j<=3+i && j>=5-i)
  {cout<<l;
  l++;
}
else
cout<<" ";
  }
  cout<<endl;
  }

  return 0;
}
*/