#include<iostream>
#include<vector>
#include<map>
#include<array>
#include<stack>
#include<string>
#include<deque>
#include<queue>
#include<algorithm>
#include <climits>
using namespace std;
// #include <VECTOR>
// int main(){
    
//     cout<<"hello world";
// };
//_________________________________________________________________
//homework question sheet 3
// int main()
// {
//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<a*b;
// };
// int main()
// {
//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<a-b;


// };
// int main(){
//     cout<<"6*3";
// }
//____________________________________________________
// int main(){
//     int a,b;
//     cout<<"enter first no.::";
//     cin>>a;
//     cout<<"enter secound no.::";
//     cin>>b;
//     cout<<"the sum is::"<<a+b;
// }
// int main(){
//     int a=10;
//     char c='d';
//     a=c;
//     cout<<a;
// }
// int main()
// {
//     int a=66;
//     char c='d';
//     c=a;
//     cout<<c;
// }

//IF-ELSE STATEMENT in c++
// int main()
// {
//     int pak;
//     cin>>pak;
//     if (pak>10)
//     {
//         cout<<"accepted";

//     }
//     else
//     {
//         cout<<"rejected";
//     }
// };
// int main(){
//     int marks;
//     cout<<"enter your marks";
//     cin>>marks;
//     if(marks>33)
//     {
//         cout<<"pass";
//     }
//   else{
//     cout<<"fail";
//   }
// };

// int main()
// {
//     int a,b;
//     cout<<"enter your first no.::";
//     cin>>a;
//     cout<<"enter your secound no.::";
//     cin>>b;
//     if(a>b)
//     cout<<"yes";
//     else
//     cout<<"no";

// };
// int main()
// {
//     int a;
//     cout<<"enter your first number:: ";
//     cin>>a;
//     if(a%2==0)
//     {
//         cout<<"even";

//     }
//     else
//     {
//         cout<<"odd";
//     }
// }
// int main ()
// {
//     int a;
//     cout<<"enter a number to check::";
//     cin>>a;
//     if(a>0)
//     cout<<"positive";
//     else if(a<0)
//     cout<<"negative";
//     else
//     cout<<"zero";
// };

//LOOPS
// int main()
// {int i;
//     for(i=0;i<=5;i++)
// cout<<"hello adhya\n";
// };

// int main()
// {
// int n;
// cin>>n;
// for(int count=1;count<=n;count=count+1)
// cout<<count<<endl;
// };
// int main()
// {
//     int a;
//     cout<<"enter a number::";
//     cin>>a;
//     for(int i=1;i<=a;i++)
//     cout<<i*i<<endl;

// };
// int main()
// {
//     int i,a;
//     for(i=2;i<=20;i=i+2)
//     cout<<i<<endl;
// };
// int main()
// {
// int i;
// for(i=100;i<=200;i++)
// cout<<i<<endl;

// };
// int main()
// {
//     char name;
//     for(name='a';name<='z';name=name+1)
//     cout<<name<<" ";

// };
// int main()
// {
//     int i,n;
//     cout<<"enter the number::";
//     cin>>n;
//     for(i=n;i>=1;i--)
//     cout<<i<<" ";
    
// };
// int main()
// {
//     int i;
//     for(i=1;i<100;i=i+3)
//     cout<<i<<endl;
// };
// int main()
// {
// int i,n;
// cout<<"enter a number::";
// cin>>n;
// for(i=n;i<=n*10;i=i+n)
// cout<<i<<endl;
// };

//calculate power of a number
// int main()
// {
//     long int n,pow,i,num;
//     cout<<"enter the number";
//     cin>>n;
//     cout<<"enter the power";
//     cin>>pow;
// num=n;
// for(i=1;i<pow;i=i+1)
// {num=num*n;}
// cout<<num;

// }
// int main()
// {
//     int i,n,sum=0;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
       
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// };
// int main()
// {
//     int i,n;
//     cout<<"enter the number:::";

//     cin>>n;
//     if(n<2)
//     {
//         cout<<"not prime";
//         return 0;

//     }
//     else
//     {for(i=2;i<n;i++)
//     if(n%i==0)
//     {
//         cout<<"not prime";
//         return 0;
//     }
//  {
//         cout<<"prime";
//     }

//     }

// };
//fibona
//homework question 4------------------------------------------------------------------------
//LECTURE 6----------------------------------------------------------------------------------------
//patterns

// int main()
// { 
//     int i,j;
//     for (j=1;j<=5;j++)
//     {
//         for(i=1;i<=5;i++)
//         {
//         cout<<"*"<<" ";
//         }
//          cout<<endl;
//     };
   
// };
// int main()
// {int i,j;
//     for(j=1;j<=4;j++)
//     {
//         for(i=1;i<=5;i++){
//         cout<<"10"<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int i,j;
//     for(j=1;j<=5;j++)
//     {
//         for(i=1;i<=5;i++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main()
// {
//     int i,j;
//     for(j=1;j<=5;j++)
//     {
//         for(i=1;i<=5;i++){
// cout<<i<<" ";
//         };
//         cout<<endl;
//     }
// }

// int main()
// {
//     int i,j;
//     for(j=1;j<=5;j++)
//     {
//         for(i=5;i>=1;i--)
//         {
//        cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main()
// {
//     int i,j;
//     for(j=1;j<=5;j++)
//     {
//         for(i=1;i<=5;i++)
//         {
//             cout<<i*i<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main()
// {
//     int j;
//     char i;
//     for(j=1;j<=5;j++)
//     {
//         for(i='a';i<='e';i++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main()
// {
//     int i,j;
//     {
//         for(j=1;j<=5;j++)
//         {
//             for(i=1;i<=5;i++)
//             {
//                 char name='a'+(j-1);
//                 cout<<name<<" ";
//             } cout <<endl;
//         }
       
//     }
// }

// int main()
// {
//     int i,j;
//     for(j=1;j<=5;j++)
//     {
//        for(i=1;i<=5;i++)
//          {
//         char name='a'+(i-1);
//         cout<<name<<" ";
//       }
//     cout<<endl;
// }
// };
// int main()
// {
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=j;i++)
//     {
//       cout<<"*"<<" ";
//     }cout<<endl;
//   }
// }
// int main()
// {
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=j;i++)
//     {
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }

// int main()
// {
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=j;i++)
//     {
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }

// int main()
// {
//   int i,j;
//   for(j=5;j>=1;j--)
//   {
//     for(i=5;i>=j;i--)
//     {
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }
// int main()
// {
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=j;i>=1;i--)
//     {
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }
// int main(){
//   int i,j;
//   for (j=1;j<=5;j++){
// for(i=1;i<=j;i++){
//   char name ='a'+(j-1);
//   cout<<name<<" ";
// }
// cout<<endl;
//   }
// }
// int main()
// {
// int i,j;
// for(j=1;j<=5;j++){
//   for(i=1;i<=5;i++)
//   {
//     cout<<"*"<<" ";
//   };
//   cout<<endl;
// }
// };
// int main()
// {
//   int i,j;
//   for(j=0;j<5;j++){
//     for(i=1;i<=5-j;i++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }

// }
// int main(){
//   int i,j;
//   for (j=1;j<=5;j++){
//     for(i=1;i<=5-j;i++)
//     cout<<" ";
//     for(i=1;i<=j;i++)
//     cout<<"*";
    
//     cout<<endl;
//   }
// }
// int main()
// {
//   int i,j;
//   for(j=1;j<=4;j++)
//   {
//     for(i=1;i<=4-j;i++)
//     cout<<" ";
//     for(i=1;i<=j;i++)
//     cout<<j;
//     cout<<endl;
//   }
// }
// int main()
// {
//   int i,j;
//   for (j=1;j<=5;j++)
//   {

//     for(i=1;i<=5-j;i++)
//     cout<<" ";
//     for(i=1;i<=j;i++)
//     cout<<i;
//     cout<<endl;
//   }
// }
// int main()
// {
//   int i,j;
 
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=5-j;i++)
//     cout<<" ";
 
//     for(i=1;i<=j;i++)
//     {
//     char name ='A'+(i-1);
//     cout<<name;
//     }
//     cout<<endl;
//   }
// };
// int main(){
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=(5-j);i++)
//     cout<<" ";
//     for(i=j;i>=1;i--)
//     cout<<i;
//     cout<<endl;
//   }
// };
// int main() {
//     int i, j;
//     for (j = 1; j <= 5; j++) {
//         for (i = 4; i >= j - 1; i--) {
//             cout << " ";
//         }
//         for (i = 5; i >= j; i--) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main()
// {
//   int i,j;
//   for(j=1;j<=5;j++){
//     for(i=1;i<(5-j);i++)
//     cout<<" ";
//     for(i=1;i<=(2*j-1);i++)
//     cout<<"*"<<" ";
//     cout<<endl;
//   }
// }
// int main(){
//     cout<<"hello world "<<"i am adhya";
// }
// int main()
// {
//     int i,j;
//     for(j=1;j<=5;j++){
//       for(i=1;i<=5-j;i++)
//       cout<<" ";
//       for(i=1;i<j;i++)
//       cout<<i;
//       for(i=j;i>=1;i--)
//       cout<<i;
//       cout<<endl;
//     }
// }
// int main(){int i,j;
//   for(j=5;j>=1;j--)
//   {
// for(i=1;i<=(5-j);i++)
// cout<<" ";
// for(i=1;i<=(2*j)-1;i++)
// cout<<"*";
// cout<<endl;
//   }
// }
// int main(){
//   int i,j;
//   for(j=4;j>=1;j--){
//     for(i=j;i>=1;i--)
//     cout<<"*";
    
//   }
// }

//homework sheet 8__________________________________________________
// int main()
// {
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=6;i++)
//     {
//       cout<<"4";
//     }cout<<endl;
//   }
// };
// int main(){
//   int i,j;
//   for(j=1;j<=6;j++)
//   {
//     for(i=1;i<=5;i++){
//       cout<<i*i<<" ";
//     }
//     cout<<endl;
//   }
// // };

// int main()
// {
//   int i,j;
//   for(j=1;j<=6;j++)
// {
// for(i=1;i<=6;i++)
// {
//   cout<<i*i*i<<" ";
// }cout<<endl;
// }};
// int main(){
//   int i,j;
//   for(j=1;j<=5;j++)
//   {
//     for(i=1;i<=6;i++)
//     {
//       char name='F'+(i-1);
//       cout<<name<<" ";
//     }
//     cout<<endl;
//   }
// }/
//homework sheet 9-------------------------------------------------------------
//   int main(){
// int i,j;
// for(j=1;j<=7;j++)
// {
//   for(i=1;i<=j;i++)
//   {
//     cout<<i;
//   }
//   cout<<endl;
// }
//   }
// int main(){
//   int i,j;
//   for(j=1;j<6;j++)
//   {
//     for(i=1;i<=j;i++)
//     {
//       char name='A'+(i-1);
// cout<<name<<" ";
//     }
//     cout<<endl;
//   }
// }
// int main(){
//   int i,j;
//   for(j=10;j<=16;j++)
//   {
//     for(i=10;i<=j;i++)
//     cout<<i<<" ";
//     cout<<endl ;
//   }

// }
// int main()
// {
//   int i,j;
//   for(j=4;j>=1;j--)
//   {
//     for(i=1;i<=j;i++){
//     char na='A'+(i-1);
//     cout<<na<<" ";
//     }
//     cout<<endl;
//   }
// }
//homework sheet 10-----------------------------------------------------------







































//lecture16
//arrays
// int main(){
//     int i;
//     int a[10];
//     for(i=0;i<10;i++){
//         cin>>a[i];
//     };
// }
// int main(){
//     int a[5]={2,5,8};
//     cout<<a[2];
// }
// int main()
// {int i;
//     int arr[5]={4,5,7,11,2};
//     int ans=INT8_MAX;
//     for(i=0;i<5;i++){
//         if(arr[i]<ans)
//         ans=arr[i];
//     }
//     cout<<ans;
//     return 0;
// }
// int main()
// {
//     int i;
//     int min=100;
//     int arr[5]={5,8,1,6,11};
//     for(i=0;i<5;i++){
//     if(arr[i]<min)
//     min=arr[i];
//     }
//     cout<<arr[i];
// }
// int main(){
//     int arr[5]={2,3,1,7,8};
//     int min=INT8_MIN;
//     int i;
//     for(i=0;i<5;i++)
//     {
//         if(arr[i]>min)
//         min=arr[i];
//     }cout<<min;
//     return 0;
// }
// int main(){
//     int i;
//     int res=0;
//     int arr[5]={1,2,3,4,5};
//     for (i=0;i<5;i++){
//         res+=arr[i];
//     }
//     cout<<arr[i];
// }
//sheet day22/180________________________________________________________

// int main(){
//    int i;
//    int sum=0;
//    int arr[20];
//    for(i=0;i<20;i++){
//       cin>>arr[i];
//    }
//    for(i=0;i<20;i++){
//       sum+=arr[i];
      
//    }
//     cout<<sum;
//  }
// int main(){
//    int i;
//    int sum=0;
//    int avg;
//    int arr[18];
//    for(i=0;i<18;i++){
//       cin>>arr[i];
//    }
//    for(i=0;i<18;i++){
//       sum+=arr[i];
//       avg=sum/18;
//    }
//    cout<<avg;
// };

// int main(){
//    int i,x;
// int n;
//    int arr[n];
//    cin>>n;
  
//    for(i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    // cout<<'search element';
//     cin>>x;
//    for(i=0;i<n;i++){
//     if(arr[i]==x){
//      cout<<i;
//      return 0;
//     }

// }
// return -1;
 
//    }

   
// int main(){
//    int i;
//    char alpha='a';
//    char arr[26];
//    for(i=0;i<26;i++){
//       arr[i]='a'+i;
//       cout<<arr[i]<<" ";
//    }
   
// }

// int main(){
//    int i;
//    int arr[5]={7,17,21,19,8};
//    int first=arr[0];
//    //largest element 
//    for(i=0;i<5;i++){
//       if(arr[i]>first){
//          first=arr[i];
//       }
//    }
//    //second element
//    int second=INT8_MIN;
//    for(i=0;i<5;i++){
//       if((arr[i]>second)&&(arr[i]<first)){
//          second=arr[i];
//       }
//    }
//     //third element
//    int third=INT8_MIN;
//    for(i=0;i<5;i++){
//       if((arr[i]>third)&&(arr[i]<second)){
//          third=arr[i];
//       }
// int main(){
//    int i;
//    int arr[5]={7,19,21,17,8};
//    //first number'
//    int first=INT8_MIN;
//    for(i=0;i<5;i++){
//       if(arr[i]>first){
//          first=arr[i];
//       }
//    }
//    //second element
// int second=INT8_MIN;
//  for(i=0;i<5;i++){
//       if((arr[i]>second)&&(arr[i]<first)){
//          second=arr[i];
//       }
//    }
//    cout<<second;
// }

// }
// cout<<third;
// }

//lecture 17______________________________
//searching an element
// int main()
// {int x;
// cin>>x;
//     int i;
//     int arr[5]={1,5,9,11,4};
//     for(i=0;i<5;i++){
//         if(arr[i]==x){
//          return 1;
//          }else{
//           return -1;
//          }
//     }
// }
//reverse element
// int main(){
//    int i;
//    int arr[5]={1,2,3,4,5};
//    int start=0;
//    int end=4;
//    while(start<end){
//       swap(arr[start],arr[end]);
//       start++;
//       end--;
//    };
//    for(i=0;i<5;i++){
//       cout<<arr[i]<<" ";
//    }
// }
//second maximum;
// int main(){
//    int i;
//    int arr[5]={7,17,21,19,8};
//    //first largest number
//    int first=INT8_MIN;
//    for(i=0;i<5;i++){
//       if(arr[i]>first){
//          first=arr[i];
//       }
//    }
//    //second largest
//    int second=INT8_MIN;
//    for(i=0;i<5;i++){
//       if((arr[i]>second)&&(arr[i]<first))
// {
//    second=arr[i];
// }  

//  }
//  cout<<second;
// }
// int main(){
//    int i;int ans;
//    int arr[5]={1,2,3,5};
//    int sum=0;
//    for(i=0;i<5;i++){
//       sum+=arr[i];
     
//    };ans=5*(5+1)/2;
// cout<<ans-sum;
// }
//fibonacci series
// int main(){
//    int n;
//    cout<<"enter the number";
//    cin>>n;
//    int arr[1000];
// arr[0]=0;arr[1]=1;
// for(int i=2;i<n;i++){
// arr[i]=arr[i-1]+arr[i-2];

// }
// cout<<arr[n-1]<<" ";
// }
//rotate array by1
// int main(){
//    int i;
//    int arr[5]={1,2,3,4,5};
//    int last=arr[4];
//    for(i=3;i>=0;i--){
//       arr[i+1]=arr[i];
//       arr[0]=last;
//        cout<<arr[i]<<" ";
//    }
// }
// void func(int a[],int n){
//    for(int i=0;i<n;i++){
//       cout<<a[i]<<" ";
//    }
// };
// int main(){
//    int arr[5]={1,2,4,8,6};
//    func(arr,5);
// };
//sheet23/180_________________________________________________________________________




































































//lecture{} 19_____________________________________________________________________
// int main(){
//    int i;int j;
//    int arr[6]={10,4,87,41,2,6};
//    for(i=0;i<5;i++){
//      int index=i;
//       for(j=i+1;j<6;j++){
//          if(arr[j]<arr[index]){
//             index=j;
//          }
//          swap(arr[index],arr[i]);
//       }
      
//    }
//       for(i=0;i<6;i++){
//          cout<<arr[i]<<" ";
//    }
//    }

// int main(){
//     int arr[1000];
//     int n;
//     cout<<"enter the element in array:";
//     cin>>n;//size of the array;
//     cout<<"enter the element in aray:";
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     for(int i=0;i<n;i++){
//         int index=0;
//         for(int j=0;j<6;j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//                 swap{arr[j],arr[index]};
//             }
//         }
//     }
//     for(i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }
//sheet 25/180_______________________________________________________________---
// int main(){
//    int i;
//    int j;
//    int arr[4]={10,3,7,11};
//    for(i=0;i<3;i++){
//      int index=i;
//       for(j=i+1;j<4;j++){
//          if(arr[j]>arr[index]){
//             index=j;
//          }
//          swap(arr[index],arr[i]);
//       }
//    }
//    for(i=0;i<4;i++){
//           cout<<arr[i]<<" ";
//     }
// }
//lec 20_________________________________________________________
// int main(){
//    int arr[1000];
//    int i,j;int n;
//    cout<<"enter the size of the array::";
//    cin>>n;
//    for(i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(i=n-2;i>=0;i--){
//       bool swapped=0;
//       for(j=0;j<=i;j++)
//       {
//          if(arr[j]>arr[j+1]){
//             swapped=1;
//             swap(arr[j],arr[j+1]);
//          }
//       }
//       if(swapped=0){
//          break;
//       }
//    }
//    for(i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
// }
//sheet26/180;____________________________________________________________________________________________________
// int main(){
//    int i;
//    int j;
//    int arr[4]={11,8,7,1};
//    for(i=2;i<=0;i--){
//       bool swapped=0;
//       for(j=0;j<=i;j++)
//       if(arr[j]<arr[j+1]){
//          swapped=1;
//          swap(arr[i],arr[j+1]);
//       }
//       if(swapped==0){
//       break;
//    }
//    }
//    for(i=0;i<4;i++){
//       cout<<arr[i]<<" ";
//    }
// }
// int main(){
//    int i; int j;
//    int arr[5]={7,19,8,1,21};
//    for(i=3;i>=0;i--){
//       bool swapped=0;
//       for(j=4;j>0;j--){
//          if(arr[j]<arr[j-1]){
//             swapped=1;
//             swap(arr[j],arr[j-1]);
//          }
//       }
//       if(swapped==0){
//          break;
//       }
//    }
//    for(i=0;i<5;i++){
//       cout<<arr[i]<<" ";
//    }
// }
// int main(){
//    int i,j;int x[5];
//    char arr[5]={'a','d','h','y','a'};
//    for(i=0;i<5;i++){
//       x[i]=arr[i]-'a';cout<<x[i]<<" "<<'\n';
//    }
   
//    for(i=3;i>=0;i--){
//       bool swapped=0;
//       for(j=0;j<=i;j++){
//          if(x[j]>x[j+1]){
//             swapped=1;
//             swap(x[j],x[j+1]);
//          }
//       }
//       if(swapped==0){
//          break;
//       }
//    }
//    for(i=0;i<5;i++){
//      arr[i]=x[i]+'a';
//       cout<<arr[i]<<" ";
//    }
// }
//lec 21_______________________________________________________________
// int main(){
//    int arr[1000];
//    int n; int i;
//    cout<<"enter the size of the array:";
//    cin>>n;
//    for(int i=0;i<n;i++)
//    cin>>arr[i];
//    for(int i=1;i<n;i++){
//       for(int j=i;j>0;j--){
//          if (arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//          }else{
//             break;
//          }
//       }
//    }
//    for(i=0;i<n;i++){
//      cout<<arr[i]<<" ";
//    }
// }
//sheet 29/180________________________________________________________________________















































































//lec 22___________________________________________________________________________________________________________________
// int BinarySeach(int arr[],int n,int key){
//    int start=0;int end=n-1;
//    int mid=start+end/2;
//    while(start<=end){
//    if(arr[mid]==key){
//       return mid;
//    }
//    else if(arr[mid]<key){
//       //rightside
//       start=mid+1;
//    }
//    else{
//       end=mid-1;
//    }
  
// }
//  return  -1;
//  };
// int main(){
//    int i;
//    int n;
//    int arr[1000];
//    cout<<"enter the number of element in array";
//    cin>>n;
//    cout<<"enter the element";
//    for(i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int key;
//    cout<<"enter the key:";
//    cin>>key;
//    cout<<BinarySeach(arr,n,key)<<endl;
//    return 0;
// }
//sheet30/180______________________________________________________________________________
// int BinarySeach(int arr[],int n,int key){
//    int start=0;int end=n-1;
//    int mid=(start+end)/2;
//    while(start<=end){
//    if(arr[mid]==key){
//       return mid;
//    }
//    else if(arr[mid]<key){
//       //rightside
//       start=mid+1;
//    }
//    else{
//       end=mid-1;
//    }
  
// }
//  return  -1;
//  };

// int BinarySeach(int arr[],int n,int key){
//    int start=0;int end=n-1;
//    int mid=(start+end)/2;
//    while(start<=end){
//    if(arr[mid]==key){
//       return mid;
//    }
//    else if(arr[mid]>key){
//       //rightside
//       start=mid+1;
//    }
//    else{
//       end=mid-1;
//    }
  
// }
//  return  -1;
//  };
// int main(){
//    int i;
//    int n;
//    int arr[1000];
//    cout<<"enter the number of element in array";
//    cin>>n;
//    cout<<"enter the element";
//    for(i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int key;
//    cout<<"enter the key:";
//    cin>>key;
//    cout<<BinarySeach(arr,n,key)<<endl;
//    return 0;
// }

//lecture 23
// int arr[9]={2,2,3,3,3,3,3,4,11};
// int target=3;
// int main(){

// int start=0,end=8,mid,first=-1,last=-1;
// while(start<=end){
//     mid=start+end/2;
//     if(arr[mid]==target){
//  first=mid;
//  end=mid-1;
//   cout<<first;
//     return first;
//     }
//     else if(arr[mid]<target)
//     start=mid+1;
//     else
//     end=mid-1;
   
// }
// //last
// start=0,end=8;
// while(start<=end){
//     mid=start+end/2;
//     if(arr[mid]==target){
//  last=mid;
//  start=mid-1; cout<<last;
//     return last;
//     }
//     else if(arr[mid]<target)
//     start=mid+1;
//     else
//     end=mid-1;
   
// }

// }


































































//lec 24____________________________________________________________
//peak value of mountain
// int main(){
//     int arr[7]={2,4,6,8,10,8,5};
//     int start=0;
//     int end=6;
//     int mid;
//     mid=end+(start-end)/2;
// while(start<=end){
    
//     if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
//         //return mid;
//         cout<<mid;
//     }
//     else if(arr[mid]>arr[mid-1]){
//         start=mid+1;
//     }
//     else{
//         end=mid-1;
//     }
// }
//     return -1;
// }
    
    






































































//lec 36
// int main(){
//     char arr[10];
//     cin>>arr;
//     arr[2]='\0';
//     cout<<arr;
// }

// int main(){
//     char arr[10];
//     cin>>arr;
//     arr[5]='\0';
//     cout<<arr;
// }

// int main(){
//     string s="rohit";
//     cout<<s;
// cout<<sizeof(s)<<endl;
// cout<<s.size()<<endl;
// }
// int main(){
//     string s;
//     cin>>s;
//    // getline(cin,s);
//     cout<<s;

// }
// int main(){
//     string s1="rohit";
// string s2="negi";
// // string s3=s1+s2;
// s1.push_back("adhya");
// cout<<s1;
// }

// int main(){
// //    string s="rohit is a \'good\' boy";
//      string s="rohit is a 'good' boy";
//     cout<<s;
// string a="rohit negi";
// cout<<a;
// }

// int main(){
//     string s="rohit";
//     int start=0,end=s.size()-1;
//     while(start<end){
//         swap(s[start],s[end]);
//         start++,end--;
//     }
//     cout<<s<<endl;
// }


// int main(){
//     string s="rohit negi";
//     int size=s.size()-1;
//     while(s[size]!='\0'){
//         size ++;
//     }
//     cout<<s<<endl;
// cout<<size<<endl;
// string s2="naman";
// int start=0,end=s2.size()-1;
// while (start<end){
//     if(s2[start]!=s2[end]){
//         cout<<"not a palindrone";
//     }
//     start++,end--;
// }
// }
//lec 37***********************
// int main(){
// string sentence="the quick brown fox jumps over the lazy dog";
// vector<bool>alpha(26,0);
// for(int i=0;i<sentence.size();i++){
//     int index=sentence[i]-'a';
//     alpha[index]=1;
// }
// for(int i=0;i<26;i++){
//     if(alpha[i]==0){
//     cout<<'0';
//     return 0;
//     }

//     else
//     cout<< '1';

// }
// };

// int main(){
//     string s="eeadfbac";
//     vector<int>alpha(26,0);
//     for(int i=0;i<s.size();i++){
//         alpha[s[i]-'a']++;
//     };
//     string ans;
//     for(int i=0;i<26;i++){
//         char c='a'+i;
//         while(alpha[i]){
//             ans+=c;
//             cout<<alpha[i];
//             alpha[i]--;
//         }
//     }
//     cout<< ans;
// }
//lec39********************************************
// int main(){
//    string num1="26553";
//     string num2="698";
//     int sum=0; int carry=0;string ans;
//     int index1=num1.size()-1;
//     int index2=num2.size()-1;
//       while(index2>=0){
//            sum=(num1[index1]-'0'+num2[index2]-'0')+carry;
//            char c = '0'+ sum % 10;
//             carry=sum/10;
//             ans+=c;
//             index2--,index1--;
//     };
//     while(index1>=0){
//            sum=(num1[index1]-'0')+carry;
//            char c = '0'+ sum % 10;
//             carry=sum/10;
//             ans+=c;
//             index1--;
//     };
//     if(carry){
//         ans+="1"; 
//          reverse(ans.begin(),ans.end());
//      cout<<ans<<endl;
//     }
  
// }


















//pointer in c++
// int main(){
// int a=10;
// int* ptr=&a;
// cout<<&a<<endl;
// cout<<ptr<<endl;
// char name='a';
// char *p1=&name;
// cout<<p1<<endl;
// cout<<*p1<<endl;
// cout<<(void*)name<<endl;
// cout<<&name<<endl;
// cout<<(void*)p1<<" ";
// }
// int   main(){
//     int a=10;
//     cout<<&a<<endl;
//     int *ptr =&a;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<sizeof(ptr)<<endl;
//     float m=2.5;
//     float *ptr1=&m;
//     cout<<sizeof(ptr1)<<endl;
// }
//sheet 61/180__________________________ 
// int main(){
//     int num=10;
//     int *ptr=&num;
//     *ptr=*ptr+5;
//     cout<<*ptr<<endl;
// }
//lecture46sheet 64_______________________________________
// int main(){
// int arr[5]={1,2,3,4,5};
// int *ptr=arr;
// cout<<arr<<endl;
// cout<<arr+0<<endl;
// cout<<&arr[0]<<endl;
// cout<<ptr<<endl;
// //print the element of second or 1 index
// cout<<arr+1<<endl;
// cout<<&arr+1<<endl;
// //print the value of index
// cout<<arr[0]<<endl;
// cout<<*arr<<endl;
// cout<<*arr+0<<endl;
// cout<<*ptr<<endl;
// //saare address ko print kardo
// for(int i=0;i<5;i++){
//     cout<<arr+i<<endl;
// }
// //print all the value
// for(int i=0;i<5;i++){
//     cout<<*arr+i<<endl;
// }
// }
// int main(){
//      int arr[5]={1,2,3,4,5};
//      //print all the values
//     int *ptr=arr;
//     cout<<ptr<<endl;
//     *ptr=*ptr+2;
//     cout<<ptr<<endl;
// for(int i=0;i<5;i++){
//     cout<<*ptr+i<<endl;
//     cout<<ptr+i<<endl;//print address
// }

// }
//sheet lol DO IT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!sheet64
//question1
// int main(){
//     char arr[6]="adhya";
//    // char *ptr=arr;
//     cout<<(void*)&arr[2]<<endl;
// }
//question2
// int main(){
//     char arr[6]="adhya";
//     cout<<(void*)arr<<" ";
// }
//question3
// int main(){
//     char s[6]="adhya";
//      cout<<(void*)s<<" ";
//  }
//question4
// int main(){
//     int arr[5]={1,2,3,4,5};
// cout<<arr<<endl;
// cout<<&arr<<endl;
// }
//question5
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int * ptr=arr+4;
//    int i;
// cout<<ptr<<endl;
// for(int i=4;i>=0;i--){
//      int *p=&arr[i];
// cout<<*p<<endl;
// }
// }
//sheet 65/180**************************************DONE
//sheet 66/180***********

//  void modifyString(char *str)
// {
//     while (*str)
//     {
//         if (*str >= 'a' && *str <= 'z')
//         {
//             *str = *str - 'a' + 'A';
//         }
//         str++;
//     }
// }

// int main()
// {
//     char myString[] = "hello World";
//     modifyString(myString);
//     cout << myString;
//     return 0;
// }
// void concatenateAndPrint(char *str1, const char *str2)
// {
//     while (*str1)
//     {
//         str1++;
//     }

//     while ((*str1 = *str2))
//     {
//         str1++, str2++;
//     }
// }

// int main()
// {
//     char first[] = "Good";
//     const char second[] = "Morning";
//     concatenateAndPrint(first, second);
//     cout << first;
//     return 0;
// }

// void reverseString(char *str)
// {
//     char *end = str;
//     while (*end)
//     {
//         end++;
//     }
//     end--;

//     while (str < end)
//     {
//         char temp = *str;
//         *str = *end;
//         *end = temp;
//         str++, end--;
//     }
// }

// int main()
// {
//     char myString[] = "Programming";
//     reverseString(myString);
//     cout << myString;
//     return 0;
// }

//question5
//  void updateValues(int *a, int *b) {
//     *a += *b;
//     *b = abs(*a - 2 * (*b));
// }

// int main() {
//     int x = 5, y = 3;
//     updateValues(&x, &y);
//     cout << x << " " << y;
//     return 0;
// }

//question6*******************************
// void countVowelsAndConsonants(const char *str, int &vowels, int &consonants) {
//     vowels = consonants = 0;

//     while (*str) {
//         char ch = tolower(*str);
//         if (isalpha(ch)) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//                 vowels++;
//             } else {
//                 consonants++;
//             }
//         }
//         str++;
//     }
// }

// int main() {
//     const char *text = "Hello, World!";
//     int numVowels, numConsonants;
//     countVowelsAndConsonants(text, numVowels, numConsonants);
//     cout << "Vowels: " << numVowels << ", Consonants: " << numConsonants;
//     return 0;
// }
//question 7***************

// void foo(int *i, int*j) {
//     *i = *i + *j;
//     *j = *i - *j;
//     *i = *i - *j;
// }


// int main()
// {
//   int a = 4, b = 5;
//   foo(&a, &b);
//  cout<<a<<b;
// }




//lec47
//int main()
// {
//     char arr[5] = "1234";
//     char name='a';
//     char *ptr =arr;
// cout<<arr<<endl;
// cout<<ptr<<endl;
// cout<<(void*)arr<<endl;
// cout<<(void*)ptr<<endl;
// cout<<(void*)&name<<endl;
// };
// void incc(int *ptr){
//     ptr=ptr+1;
// }
// int main(){
//     int num =10;
//     int temp =num;
//     incc(&num);
//     cout<<num<<endl;
// };
// void dopb(int *n){
// for(int i=0;i<5;i++){
//     n[i]=2*n[i];
// }
// };
// int main(){
//     int arr[5]={1,2,3,4,5};
//     dopb(arr);
//     for(int i=0;i<5;i++){
// cout<<arr[i]<<endl;
//     }
//  };
// int main(){
//     int first=10;
//     int second=20;
//     swapping(&first,&second);
//     cout<<first<<second;
// };
// void swapping(int *ptr1,int *ptr2){
//     int temp=*ptr1;
//     *ptr1=*ptr2;
// *ptr2=temp;
// }
// void swapping(int*ptr1,int*ptr2){
//     int temp=*ptr1;
//     *ptr1=*ptr2;
//     *ptr2=temp;
//     cout<<&ptr1<<" "<<&ptr2<<endl;
//     cout<<ptr1<<" "<<ptr2<<endl;
// }
// int main(){
//     int first=10,second=20;
//     cout<<&first<<" "<<&second;
//     swapping(&first,&second);
// cout<<first<<" "<<second<<endl;
// cout<<&first<<" "<<&second<<endl;
// }
// void swapping(int &p1,int&p2){
// int temp=p1;
// p1=p2;
// p2=temp;
// }
// int main(){
//     int first=10,second=20;
//     swapping(first,second);
//     cout<<first<<second;
//  }
// int main(){
//     int num=10;
//     int &temp=num;
//     cout<<temp<<endl;
//     temp++;
//     cout<<&temp<<endl;
//     cout<<num;
//     cout<<&num;
// }
// int main(){
//     int first=10,second=20;
//     cout<<&first<<endl;
//     cout<<&second<<endl;
//     swapping(first,second);
//     cout<<first<<" "<<second;
// }
// void swapping(int&p1,int&p2){
//     int temp=p1;
//     p1=p2;
//     p2=temp;
// // }
// void dob(int p[]){
//     for(int i=0;i<5;i++)
//     p[i]=p[i]*2;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     dob(arr);
// }
// void fum(int*p){
//     *p=*p+1;
// }
// int main(){
//     int n=10;
//     int *p=&n;
//     fum(p);
//     cout<<n;
// }
// void fuo(int **p1){
//     **p1=**p1+1;
// }
// int main(){
//     int num=10;
//     int *p=&num;
//     int **ptr=&p;
//     fuo(ptr);
//     cout<<num<<endl;
// // }
// int main(){
//     int n=10;
//     int *p=&n;//single pointer
//     int &temp=n;
//     cout<<temp<<endl;
//     cout<<p<<endl;
// int **p2=&p;
// cout<<p2<<endl;
// cout<<&p<<endl;
// cout<<&p2<<endl;
// int***p3=&p2;
// cout<<p3<<endl;
// cout<<&p2<<endl;
// cout<<***p3<<endl;
// **p2=**p2+5;
// cout<<n<<endl;
// ***p3=***p3+10;
// cout<<n<<endl;
// }
//gate question
// int main(){
//     char c[]="GATE2024";
// char *p=c;
// cout<<p+p[3]-p[1];
// }//2024
// void second(int*p1,int*p2){
//     p1=p2;
//     *p1=2;
// }
// int main(){
//     int i=0,j=1;
// second (&i,&j);
// cout<<i<<j;
// }
// int main(){
//     int a=5;
//     int b=10;int &name=a;
//     int *ptr=&a;
//     (*ptr)++;
//     ptr=&b;
//     *ptr=*ptr+5;
//     name+=5;
// cout<<a<<b;

// }
// void four(int x,int *py,int**ppz){
//     int x,y,z;
//     **ppz+=1;
//     z=**ppz;
//     *py+=2;
//     y=*py;
//     x+=3;
//     return x+y+z;
// }
// int main(){
//     int c,*b,**a;
// c=4,b=&c,a=&b;
//   cout<<four(c,b,a);
// }
// void five( char *str1,char *str2){
//    while((*str1=*str2)){
//     str1++,str2++;
//    }
// }
// int main(){
//     char first[]="mohit";
//     char second[]="rohit";
// five(first,second);
// cout<<first;
// }
//lec49 and lec50 comboooo_________________________________________________
// int main(){
//     //array create karns hai,jo store karega address
//     int n,m;
//     cin>>n>>m;
//     int **ptr=new int*[n];
//     //create 2d array
//     for (int i=0,i<n,i++){
//         ptr[i]=new int [m];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>ptr[i][j];
//         }
//     }
//     //print the value
//     for(int i=0,i<n;i++){

//     }
// }

// int main(){
//     int *ptr= new int;
//     *ptr=5;
//     cout<<*ptr<<endl;
//     float *ptr2=new float;
//     *ptr2= 3.6;
// cout<<*ptr2<<endl;
// int n;
// cout<<"enter the size of array:";
// cin>>n;
// int *p=new int[n];
// //insert value
// for(int i=0;i<n;i++)
// p[i]=i+1;
// //print the value
// for(int i=0;i<n;i++){
//     cout<<p[i]<<endl;
// }
// delete ptr;
// delete ptr2;
// delete[] p;
// }
//lec50*******************
// int main(){
//     //creating two d array
//     int n,m;
//     cin>>n>>m;
//    int **ptr= new int *[n];
//    for(int i=0;i<n;i++){
//     ptr[i]=new int[m];
//    }
//     for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//        cin>>ptr[i][j];
//     }
//    }
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<ptr[i][j]<<endl;
//     }
//    }
//    //release the memory
//    for(inti=0;i<n;i++){
//     delete[] ptr[i];
//    }
// }
// int main(){
//     int l,b,h;
//     cin>>l>>b>>h;
// int ***ptr=new int **[l];
// for(int i=0;i<l;i++){
//     ptr[i]=new int*[b];

   
//     for(int j=0;j<b;j++){
//      ptr[i][j]=new int[h];
//          }

// }
// for(int i=0;i<l;i++)
// for(int j=0;j<b;j++)
// for(int k=0;k<h;k++)
// ptr[i][j][k]=i+j+k;
// for(int i=0;i<l;i++)
// for(int j=0;j<b;j++)
// for(int k=0;k<h;k++)
// cout<<ptr[i][j][k]<<endl;
// }
// //lec51
//recursion**************************************
// void func3(int n){
//     cout<<n<<"days left";
// }
// void func2(int n){
//     cout<<n<<"days left";
// }
// void func1(int n){
//     cout<<n<<"days left";
// }
// void func0(int n){
//     cout<<n<<"days left";
// }
// int main(){
//     func3 (3);
//     func2(2);
//     func1 (1);
//     func0(0);
// }
// void func0(int n){
//     cout<<n<<"days left\n";
// }
// void func1(int n){
//     cout<<n<<"days left\n";func0(n-1);
// }
// void func2(int n){
//     cout<<n<<"days left\n";func1(n-1);
// }

// void func3(int n){
//     cout<<n<<"days left\n";
//     func2(n-1);
// }

// int main(){
//     func3 (3);
   
// }
// void func(int n){
// if (n==0){
//     cout<<"hapy birthday\n";
//     return ;
// }
// cout<<n<<"days left\n";
// func(n-1);
// };
// int main(){
//     func(3);
// }
//sheet 72
//qustion 1
// void print(int n){
//     if (n>10){
//         return;
//     }
//     cout<<n<<"coder army\n";
//     print(n+1);
// }
// int main(){
//     print(1);
// }
//question 2
// void print (int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<"hi\n";
//     print(n-1);
// }
// int main(){
//      print(10);
//  }
//question3
// void print (int n){
//     if(n==10){
//         return;
//     }
//     cout<<n<<"hi\n";
//     print(n+1);
// }
// int main(){
//      print(0);
//  }
//lecture 52
// void print(int num,int N){
//     if(num==N){
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+1,N);
// }
// int main(){
//     int N;
//      cin>>N;
//      print(1,N);
// }
// void print(int N){
//     if(N==1){
//         cout<<1<<endl;
//         return;
//     }
//     cout<<N<<endl;
//     print(N-1);
// }
// int main(){
//     int N;
//     cin>>N;
//     print(N);
// }
// void print(int num,int N){
//     if(num==N){
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+2,N);
// }
// int main(){int N;
//     //print even number from 1 to n;
//     cin>>N;
//     if(N%2==1){
// N--;
//     }
// }
// void print(int N){
// if(N==2){
//     cout<<2<<" ";
//     return;
// }
// print(N-2);
// cout<<N<<" ";
// }
// int main(){
//     //print evn no.from 1 to N;
//     int N;
//     cin>>N;
//     if(N%2==1){
//         N--;
//     }
//     print(N);
// }
//sheet 73
//question 1 Print all odd numbers from 1 to n using recursion.
// void print(int num,int n){
//     if(num==n){
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+2,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//       n--;
//     }
//     print(1,n);
// }
//question 2
// Print all numbers from 10 to n using recursion, where n will be greater than 10.
// void print(int a,int n){
//     if(a==n){
//         cout<<n<<endl;
//         return;
//     }
//     cout<<a<<endl;
//     print(a+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     if(n<10){
// cout<<'input should br greater than 10';
//     }
//     print(10,n);
// }
//question3
//Write a Table program using recursion. Take input number n, and print its table. 
// void print(int n,int i){
   
//     if(i>10){
//         return;
//     }
//     cout<<n*i<<endl;
//     print(n,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n,1);
// }
//lec53
// int fact(int n){
// if(n==1||n==0){
//     return 1;
// }
// return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }
// int sum (int n){
//     if(n==1){
//         return 1;
//     }
// return n+sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }
// int pow(int num,int n){
//     if (n==1){
//         return 2;
//     }
//     if(n==0){
//         return 1;
//     }
//     return num*pow(num,n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<pow(2,n);
// }
// int sqsum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*n+sqsum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sqsum(n);
// }
//sheet  81
// int fact(int n)
// {
//    if(n<=1)
//    return 1;


//    return n*fact(n-1);


// }
//o(n),s:o(n);
// int power(int base, int exponent) {
//    if (exponent == 0)
//        return 1;
//    return base * power(base, exponent - 1);
// }
//time:o(n),s:(n);

// bool isPalindrome(string str, int start, int end) {
//    if (start >= end)
//        return true;
//    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
// }
//time:o(n),space:o(n);
// void reverseString(string& str, int start, int end) {
//    if (start < end) {
//        swap(str[start], str[end]);
//        reverseString(str, start + 1, end - 1);
//time:o(n),o(n);
// bool isEven(int n) {
//    if (n == 0)
//        return true;
//    return !isEven(n - 1);
//}
//time o(n);s:O(N);
//sheet 80****************************************

//lec 57*************************************************
// bool linearsearch(int arr[],int x,int index,int n){
//     //base case
//     if(index==n){
//         return 0;
//     }
//     if(arr[index]==x){
//         return 1;
//     }
//     return linearsearch(arr,x,index+1,n);
// }
// int main(){
//   int  arr[]={4,5,6,1,9,3};
//     int x=1;
//     cout<<linearsearch(arr,x,0,6);
// }
// bool bs(int arr[], int start ,int end , int x){
//     if(start>end){
//         return 0;
//     };
//     int mid =(start+end)/2;
//     if(arr[mid]==x){
//          return 1;
//     }
//     else if(arr[mid]<x){
//         return bs(arr,mid+1,end,x);
//     }
//     else {
//         return bs(arr,start,mid-1,x);
//     }
// }
// int main (){
//     int arr[]={1,4,6,8,10,12};
//     int x=10;
//     cout<< bs(arr,0,5,x);
// }
//sheet 80****************************
// int bs(int arr[], int start, int end, int x){
//     if(start>end){
//         return 0;
//     }
//     int mid =(start+end)/2;
//     if(arr[mid]==x){
//        // return 1;
//         return mid;
//     }
//      else if(arr[mid]>x){
//         return bs(arr,mid+1,end,x);
//      }
//      else{
//          return bs(arr,start,mid-1,x);
//      }

// }
// int main (){
//     int arr[]={19,14,7,5,2};
//     int x=5;
//     cout<< bs(arr,0,4,x);
// }
//question2

// int reverse(int arr[], int start, int end){
// if(start>=end){
//     return 0;
// }
// if(start<end){
//     swap(arr[start],arr[end]);
// // return reverse(arr);
// }
//  return reverse(arr, start++ , end--);
// };
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<reverse(arr,0,4);
// };//

//question3






















































//lec 59

// void merge(int arr[],int start, int end ,int mid){
//     vector <int> temp(end-start+1);
//     int left=start;
//     int right=mid+1;
//     int index=0;
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){
//             temp[index]=arr[left];
//             index++,left++;
//         }
//         else{
//              temp[index]=arr[right];
//             index++,right++;
//         }
      
//     };
// while(left<=mid){
//     temp[index]=arr[left];
//     index++,left++;
// };
// while(right<=mid){
//     temp[index]=arr[right];
//     index++,right++;
// };
//  index=0;
// while(start<=end){
//     arr[start]=temp[index];
//     start++,index++;
// };
// };
// void mergesort(int arr[], int start, int end){
//     if(start ==end){
//         return;
//     }
//     int mid =start+end/2;
//     //left side
//     mergesort(arr,start,end);
//     //right side
//     mergesort(arr,mid+1,end);
//  merge(arr,start,end,mid);

// };
// int main(){
//     int arr[]={6,3,1,2,8,9,10,7,3,10};
//     mergesort(arr,0,9);
    
// for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }
















//OOPS lec 70*****************************************************************************************************
// class student{
//     public:
//     string name;
//     int age,roll_no;
//     string grade;

// };
// int main(){
//     student s1;
//     s1.name= "rohit";
//     s1.age=10;
//     s1.roll_no=987;
//     s1.grade="A+";
//     cout<<s1.age<<s1.name<<endl;
// }
// class student{
//     private:
//     string name;
//     int age,roll;
//     string grade;
//     //function getter and setter
//     public:
//     void setname(string s){
//      if(s.size()==0){
//       cout<<"invalid name";
//       return;

//      }
//        name=s;
//     }
//      void setage(int a){
//       age=a;
//      }
//     void setroll( int t){
//       roll=t;
//     }

//       void setgrade( string p){
//      grade=p;
// }
// void getname(){
//     cout<<name<<endl;
// }
// void getage(){
//     cout<<age<<endl;
// }
// int getroll(){
//     return roll;
// }
// string getgrade(int pin){
//     if(pin==123){
//    return grade;
//    }
//     else 
//     return " ";
// }
// };

// int main(){
//     student s1;
//     s1.setname("adhya");
//     s1.setage(10);
//     s1.setroll(21);
//     s1.setgrade("A+");
//     s1.getname();
//      s1.getage();
//      cout<<s1.getgrade(123)<<endl;
//     cout<<s1.getroll()<<endl;
// }
// class a{
//     int b;
//     char c;

// };
// int main(){
//     a obj;
//     cout<<sizeof(obj)<<endl;
// }
// class student{
//     public:
//     string name;
//     int age;
// };
// int main(){
//     student *s1=new student;
//     (*s1).name="adhya";
//     s1->age=10;
//     cout<<s1->name<<endl;
// }
//sheet99***************



//lec71***********************
// class customer{
// string name;
// int account_no;
// int balance;
// customer(){
//     cout<<"constuvtor is been created";
// }
// };
// int main(){
//     customer a1;
// // }
// class customer{
//     string name;
//     int account;
//     int balance;int*roi;
//     public:
//     // customer(){
//     //     cout<<"const is called";
//     // }
//     customer(){//default constructor
//         name="adhya";
//         account=5;
//         balance=52000;
//         roi= new int[100];
//     }
//     customer(string a,int b,int c){
//         name=a;
//         account=b;//paramertized constructor
//           balance=c;
//     }
//     customer(string name,int account){
//         this->name=name;
//         this->account=account;
//     }
// void display(){
//     cout<<name<<" "<<account<<" "<<balance<<endl;
// }
// };
// int main(){
//     customer a1;
//     a1.display();
//     customer a2("rohit",5,75000);
//     a2.display();
//     customer a3("shraddha",78,980000);
//     a3.display();
// customer a4("aman",8);
// a4.display();
// }
// class customer{
//     string name;
//     int account;
//     int balance;
//     public:
//     customer(){
// name="rohit";
// account=879654;
// balance=741000;

// }
// customer(string name,int account,int balance){
//     this->name=name;
//     this->account=account;
//     this->balance=balance;
// }

// customer(customer &b){
//     name=b.name;
//     account=b.account;
//     balance=b.balance;
// }
// void display(){
//     cout<<name<<" "<<balance<<endl;
// }
// };
// int main(){
//     customer a1;
//     customer a3("adhya",741258,78000);
//     customer a5(a3);
//     a5.display();
//     a3.display();
//     a1.display();
//     customer a2(a1);
// a2.display();
// }
// class customer{
//     string name;
//     int *data;
  
    // customer(string name,int bal){
    //     this->name=name;
    //     balance=new int;
    //     *balance=bal;
    // }
    // ~customer(){
    //     cout<<"name";
    // }
//     public:
//       customer(){
//         name="4"; cout<<"constructor is called"<<" "<<name<<endl;
//     };
//     customer(string name){
//         this->name=name;
//     // data=new int;
//     // *data=10;
//         cout<<"constructor is called"<<" "<<name<<endl;
//     };
//     ~customer (){
//     //    delete data;
//         cout<<"destructor is called"<<" "<<name<<endl;
//     }
// };
// int main(){
//     customer a1("1");
//     customer a2("2");
//     customer a3("3");
//     customer *a4= new customer;
//     delete a4;
// }
//lec72**********************************
// class customer{
//     string name;
//     int account;
//     int balance;static int total_customer;
//     static int total_balance;
// public:
// customer(string a,int b,int c){
//     name=a;
//     account=b;
// balance=c;
// total_customer++;
// total_balance+=balance;
// }
// void display(){
//     cout<<name<<" "<<balance<<" "<<total_customer<<endl;
// }
// void display_total_nbal(){
//     cout<<total_balance<<endl;
// }
// };
// int customer::total_customer=0;
// int customer::total_balance=0;
// int main(){
//     customer a1("rohit",1,1000);
//     customer a2("mohit",2,2000);
//     a1.display();
//     a2.display();
//     a2.display_total_nbal();
// }
// class customer{
//     string name;
//     int account,balance;
//     static int total_customer;
//     public:
    
//     static int total_balance;
//      static void acestatic(){
//         cout<<total_customer<<endl;
//      }
//     customer(string name,int account,int balance){
//         this->name=name;
//         this->account=account;
//         this->balance=balance;
//         total_customer++;
//         total_balance+=balance;
//     }
//     void display(){
//      cout<<name<<" "<<account<<" "<<balance<<" "<<total_customer<<endl;
//     }
//     void totof(){
//         cout<<total_customer<<endl;
//     }
// };
// int customer::total_balance=0;
// int customer::total_customer=0;
// int main(){
//     customer s1("adhya",741123,85000);
//      customer s2("rohit",748223,75000);
//       s1.display();

//     //  customer::total_customer=5;
//      //s1.totof();
//      customer::acestatic();
// }

// class customer{
//     string name;
//     int account,balance;
//     static int total_balance;
//     public:
//     customer(string name,int account,int balance){
//         this->name=name;
//         this->account=account;
//         this->balance=balance;
//         total_balance+=balance;
//     }
//     static void accstatic(){
//         cout<<total_balance<<endl;
//     }
//     void deposit(int amount){
//         if(amount>0){
//             balance+=amount;
//             total_balance+=amount;
//         }
//         else{
//             cout<<"invalid amount"<<" ";
//         }
//     }
//     void withdraw(int amount){
//          if(amount>0){
//             balance-=amount;
//             total_balance-=amount;
//          }
//          else{
//             cout<<"you are uselesss";
//          }
//     }
//     void display_total(){
//               cout<<total_balance<<endl;
//     }
//     void display(){
//         cout<<name<<"account is:"<<account<<"balance is:"<<balance<<endl;
//     }
// };
// int customer::total_balance=0;
// int main(){
//     customer a1("adhya ",74411,2000);
//     //a1.deposit(200);
//     a1.display();
//     a1.deposit(500);
//     a1.display_total();
//     customer::accstatic();
// }

// //lec73*********************************************************************************
// // class human{
// //     private:
// //     int a;
// //     protected:
// //     int b;
// //     public:
// //     int c;
// //     void fun(){
// //         a=10;b=20;c=30;
// //     }
// // };
// // int main(){
// //     human rohit;
// //     rohit.c=10;
// // };
// // class human{
// //     string religion,caste;
// //   public:
// //     string name;
// //     int age,weight;
// // };
// // class student: protected human{
// //     private:
// //     int roll_number,fees;
// //   public:
// //   void fun(string n,int a,int w){
// //     name=n;
// //     age=a;
// //     weight=w;
// //   }
// //   void display(){
// //     cout<<name<<" "<<age<<" ";
// //   }
// //   student(string name,int age,int weight,int roll_number,int fees){
// //     this->age=age;
// //     this->fees=fees;
// //     this->name=name;
// //     this->weight=weight;
// //     this->roll_number=roll_number;
// //   }
// //   void displawy(){
// //     cout<<name<<"age is"<<age<<"weight is"<<weight<<fees<<endl;
// //   }
// // };
// // class teacher: public human{
// //     int salary,id;
// // };
// // int main(){
// //     student a("adhya",78,14,144,500);
// //     a.displawy();
// //     teacher b;
// //     b.name ="mohit";
// // }
//lec 74******************************************************************
// class human{

//     protected:
//     string name;
//     int age;

//     public:
//     human(string name,int age){
//          this->name=name;
//          this->age=age;
//     }
//     void disp(){
//         cout<<name<<" "<<age;
//     }
//     // human(){
//     //     cout<<"iam aguau";
//     // }
      
//     //   ~human(){
//     //     cout<<" humam desc";
//     //   }
//     void work()
//     {
//         cout<<"i am working\n";
//     }
// };
// class student:public human{
//     int roll,fees;

//     public:
//     student(string name, int age,int roll, int fees):human(name,age){
//         // this->name=name;
//         // this->age=age;
//         this->roll=roll;
//         this->fees=fees;
//     }
//     void disp(){
//         cout<<name<<" "<<age<<" "<<fees<<" "<<roll;
//     }
//     // student(){
//     //     cout<<"hello"<<endl;
//     // }
//     // ~student(){
//     //     cout<<"student des"<<endl;
//     // }
// };
// int main(){
//     student a1("rohit",25,1478,450000);
// //    student a1;
//     a1.work();
//     a1.disp();
// }
// class person{
//     protected:
//     string name;
//     public:
//     void intro(){
//         cout<<"hello my name is :: "<<name<<endl;
//     }
// };
// class employee:public person{
//     protected:
//     int salary;
//     public:
//     void mon_sal(){
//         cout<<"my monthlu salary is:"<<salary<<endl;
//     }
// };
// class manager:public employee{
// //    protected:
// public:
//     string department;
//     public:
//     manager(string name,int salary,string department){
//         this->name=name;
//         this->salary=salary;
//         this->department=department;
//     }
    
//     void work(){
//         cout<<"i am leading the department  "<<department<<" "<<endl;
//     }
// };
// int main(){
//     manager a1("rohit",200,"finance");
//     a1.department="rp";
//     a1.work();
//     a1.mon_sal();
//     a1.intro();
// }



// class engineer{
//     public:
//     string spec;
//      engineer(){
//         cout<<"hello engineer"<<endl;
//      }
//     void work(){
//         cout<<" i have spec in "<<spec<<endl;
//     }
// };
// class youtuber{
//     public:
//     int subs;
//      youtuber(){
//         cout<<"hello  yt"<<endl;
//     };
//      void concre(){
//         cout<<"i have a subcriber base of "<<subs<<endl;
//      }
// };
// class codeteacher:public youtuber,public engineer{
//     public:
//     string name;
//     codeteacher(){
//         cout<<"hello codr\n";
//     }
//     codeteacher(string name,string spec,int subs){
//         this->name=name;
//         this->spec=spec;
//         this->subs=subs;
//     }
//     void showcase(){
//         cout<<"my name is:"<<name<<" "<<endl;
//         work();concre();
//     }
// };
// int main(){
//    // codeteacher a1("rohit","cse",48000);
//    codeteacher a1;
//    // a1.showcase();
// }





















//hybrid inheritance
// class student{

//     public:
//     void print(){
//         cout<<" i am studnet \n";
//     }
// }






























//lec76
// class customer{
//     string name;
//     int balance,account_number;
//     public:
//     customer(string name,int balance,int account_number)
//     {
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     };
//     void deposit(int amount)
//     {

//          if(amount>0)
//          throw " rs amount  is credited sucessfully\n";
//          balance+=amount;
//             cout<<amount<< " rs amount  is credited sucessfully\n";
         
//     }
//         void withdraw(int amount)
//     {
//          if(amount>0 && amount<=balance)
//          {balance-=amount;
//             cout<<amount<<"amount  is debited sucessfully\n";
//          }
//          else if(amount<0){
//             throw "amount is low";
//          }
//          else{
//             throw " amount is greater";
//          }
//     }
// };
// int main(){
//     customer c1("rohit",5000,10);
//     try{
//         c1.withdraw(5000);
//           c1.deposit(5000);
//     c1.withdraw(12000);
//     }catch(const char *c){
//     cout<<"expection occured: "<<c<<endl;
//     }
   
// };
// int main(){
//     int a,b;
//     cin>>a>>b;
//     if(b==0){
//         cout<< "divide by zero is not posiible";
//         return 0;
//     }
//     int c=a/b;
//     cout<<c<<endl;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     try{
//         if(b==0){
//             throw "divide bt 0 isn't possible";
//         }
    
//     int c =a/b;
//      cout<<c<<endl;
//     }
//     catch(const char *c){
//       cout<<"expected occured::"<<c<<endl;
//     }
    
// }
// int main(){
//    try{
//      int *p=new int[1000000000000000000000000000000000000000];
//     cout<<"memory allocation is successfull\n";
//     delete[]p;
//    }
//    catch(const exception *C){
//     cout<<"exception occured:"<<C<<endl;
//    }
// };
// int main(){
//     try{
//         int *p=new int[100000000000000000000];
//         cout<<"memory allocation was successfully\n";
//         delete []p;
//     }catch(const exception &e){
//         cout<<"exeption ocuured due to line 9::"<<e.what()<<endl;
//     }
// }
// class customer{
//     string name;
//     int balance,account_number;
//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }
//     void deposit(int amount)
//     {
//         if(amount<=0){
//             throw runtime_error("amount should be greater");
//             balance+=amount;
//         }else{
//             cout<<"passes successfully";
//         }
//     }
//     void withdraw(int amount){
//         if(amount<0){
//             throw runtime_error("amount should be grater");
//         }
//         else if(amount>=balance){
//             throw runtime_error("amount shulod be low");
//         }
//         else{
//             throw "some other type of error";
//         }
//     }
// };
// int main(){
//     customer c1("rohit",5000,10);
//     try{
//         c1.deposit(100);
//         c1.withdraw(500);
//     }
//     catch(const runtime_error &c){
//         cout<<"execption occured::"<<endl;
//     }
//     catch(...){
//         cout<<"execption occured::"<<endl;
//     }
// }'
// class runtime_error{
//     protected:
//     string msg;
//     runtime_error(string msg){
//         this->msg=msg;
//     }
//     void what()
//     {
//         cout<<msg;
//     }
// };
// class invaliderror:public runtime_error{
//     public:
//     invaliderror(const string &msg);
//     runtime_error(msg);
// };
// class customer{
//      string name;
//     int balance,account_number;
//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }
//     void deposit(int amount)
//     {
//         if(amount<=0){
//             throw runtime_error("amount should be greater");
//             balance+=amount;
//         }else{
//             cout<<"passes successfully";
//         }
//     }
//     void withdraw(int amount){
//         if(amount>0){
//             throw invaliderror("amount should be grater");
//         }
//         else if(amount>=balance){
//             throw runtime_error("amount shulod be low");
//         }
//         else{
//             throw "some other type of error";
//         }
//     }
// };
// int main(){
// customer c1("rohit",5000,10);
//     try{
//         c1.deposit(100);
//         c1.withdraw(0);
//     }
    
//     catch(const runtime_error &c){
//         cout<<"execption occured::"<<endl;
//     }
//     catch(const invaliderror &c){
//       cout<<"exeption occured:"<<c.what()<<endl;
//     }
//     catch(...){
//         cout<<"execption occured::"<<endl;
//     }
// }

//lec37************************************************************
// int main(){
//     ofstream foul;
//     foul.open("zoom.txt");
//     foul<<"hello world";
//     foul.close();
// };
// int main(){
//     ifstream fin;
//     fin.open("zoom.txt");
//     char c;c=fin.get();
//     //fin>>c;
//     while(!fin.eof()){
//         cout<<c;
//         //fin>>c;
//         c=fin.get();
//     }
//      fin.close();
// }
// int main(){
//     vector<int>arr[5];
//     cout<<"enter the input:";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];

//     }
//     ofstream fout;
//     fout.open("zoom.txt");
//     fout<<"orginal data\n";
//     for(int i=0;i<5;i++){
//         fout<<arr[i]<<" ";
//     };
//     fout<<"\nsorted data";
//     fout.close();
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<5;i++){
//         fout<<arr[i]<<" ";
//     };
//     f.close();
// }


// int main(){
// int arr[6]={1,0,1,0,1,0};
// int start=0,end=5;
// while(start<=end)
// {
// if(arr[start]==arr[end]) {
//   end--;
// }
// else if(arr[start]<arr[end])
// start++;

// else{
// swap(arr[start],arr[end]);
// }
// }
// for(int i=0;i<6;i++){
// cout<<arr[i]<<endl;
// }
// }
// int main(){int target=22;
// int arr[5]={2,7,11,15,27};
// int start=0,end=4;
// while(start<=end){
//    if(arr[start]+arr[end]==target){

//     cout<<arr[start]<<" "<<arr[end]<<endl;
// }
// else if(arr[start]<target-arr[end]){
// start++;
// }
// else{
// end--;
// }
// }
// }
// int main(){
//     int prefix[6]={};
//     int arr[6]={6,4,5,-3,2,8};
//     int sum=0;
//     for(int i=0;i<6;i++){
//         sum+=arr[i];
//         prefix[i]=sum;
//     }
//       for(int i=0;i<6;i++){
//        cout<<prefix[i]<<endl;
//     }

// // }
// void opop(int arr[][4],int row,int col){
//     int x=6;
//     for(row=0;row<3;row++){
//         for(col=0;col<4;col++){
//             if(arr[row][col]==x){
//                 cout<<"hi adhya";
                
//             } 
//         }
//     }
  
// }
// int main(){
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<endl;
//         }
//     }
//     opop(arr,3,4);
// // }
// int main(){
//     int arr2[3][4]={1,14,45,19,62,14,78,8,9,10,11,12};
//     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int ans[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             ans[i][j]=arr1[i][j]+arr2[i][j];
//         }
//     }
//      for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//            cout<<ans[i][j]<<" ";
//         }
//     }
// }
// void printrowma(int arr[][4],int n,int m){
//     int sum=INT8_MIN;int index=-1;
//     for(int i=0;i<n;i++){
//         int total=0;
//          for(int j=0;j<m;j++){
//              total+=arr[i][j];
//          }
//              if(total>sum){
// sum=total;
// index=i;
//      }
//      }
//  cout<<index<<" ";
// }
// int main(){
//     int arr[3][4]={1,14,45,19,62,14,78,8,9,10,11,12};
// printrowma(arr,3,4);



// }
// void diagonalsum(int arr[][4],int n,int m){
//     int first=0;
//     int second=0;int ans=0;
//     int i=0;
//     while(i<n){
//         first+=arr[i][i];
//         i++;
//     }
//        i=0;int j=m-1;
//     while(j>=0){
//         first+=arr[i][j];
//         i++,j--;
//     }
// ans=first+second;
// cout<<ans<<"  ";
// }
// int main(){
//     int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     diagonalsum(matrix,4,4);
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int sum=0;
//     for(int j=0;j<3;j++){
//         for(int i=0;i<3;i++){
//             sum+=arr[j][i];

//         }
//                      cout<<sum<<endl;
//     }
    
// }
// int main(){
//     int arrA[3][3]={1,5,6,4,2,8,6,7,10};
//     int arrB[3][3]={1,2,3,4,5,6,7,8,9};
//     int arrC[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arrC[i][j]=arrA[i][j]-arrB[i][j];
//         }
//     }
//         for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arrC[i][j]<<endl;
//         }
//     }
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int first=0;int second=0;int ans=0;

//     int i=0;int j=2;
//     while(j>=0){
//         if(i==j){
//             first+=arr[i][i];
//         }else{
// first+=arr[i][i];
// second+=arr[i][j];
// }
// i++,j--;
    
//     }
//     ans=first+second;
//     cout<<ans<<endl;
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int sum=INT8_MIN;
//     for(int i=0;i<3;i++){
        
//         for(int j=0;j<3;j++){int total=0;
//             total+=arr[i][j];
//              if(total>sum){
//             sum=total;

//         }
//         }
       
//     }
//     cout<<sum<<" ";
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int sum=INT8_MAX;
//     for(int i=0;i<3;i++){
        
//         for(int j=0;j<3;j++){int total=0;
//             total+=arr[i][j];
//              if(total<sum){
//             sum=total;

//         }
//         }
       
//     }
//     cout<<sum<<" ";
// }
// int main(){
//     vector<vector<int>>matrix(3,vector<int>(4,1));
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<matrix[i][j]<<" ";
//             cout<<matrix.size()<<endl;//rows
//             cout<<matrix[0].size()<<" ";
//         }
//     }
// // }
// int main(){//reverse the array
//     int matrix[3][3]={1,2,3,4,5,6,7,8,9};
//     int row=3;

//     for(int i=0;i<3/2;i++){
//         for(int j=0;j<3;j++){
//             int temp=matrix[i][j];
//            matrix[i][j]= matrix[row-1-i][j];
//             matrix[row-1-i][j]=temp;
//         }
      
//     }
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }}
// // }
// int main(){
//     int matrix[3][3]={1,2,3,8,9,4,7,6,5};
//        vector< vector<int>>result(3,vector<int>(3));
//        // int row=matrix.size(),col=matrix[0].size();
//        int row=3,col=3;
//         int top=0, bottom=row-1, left=0, right=col-1;
//         while(left<=right && top<=bottom){
//        //print top
//         for(int j=left;j<=right;j++){
//          result[top][j]=matrix[top][j];}
//           top++;
        
//        //print right
//          for(int i=top;i<=bottom;i++){
//           result[i][right]=matrix[i][right];}
//           right--;
         

//          //print bottom
//         if(top<=bottom){
//          for(int j=right;j>=left;j--){
//           result[bottom][j]=matrix[bottom][j];}
//           bottom--;
         
//          };
//          //print left
//         if(left<=right){
//          for(int i=bottom;i>=top;i--){
//          result[i][left]=matrix[i][left];}
//           left++;
//            };
//         }
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 cout<<result[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         return 0;
// //         }
// int main(){
//         vector<vector<int>>ans(4,vector<int>(4));
//     int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

//     int col=4;
  
//       for (int i=0;i<4;i++)
// {
// for(int j=0;j<4;j++){
//     ans[j][col-1]=arr[i][j];
// }
// col--;
// }
  

//  for (int i=0;i<4;i++)
// {
// for(int j=0;j<4;j++){
//     cout<<ans[i][j]<<" ";
// }


// }
// }
// int main(){
//     int matrix[3][3]={1,2,3,4,5,6,7,8,9};
//     int start=0,end=2;
//     for(int i=0;i<2;i++){
//         for(int j=2;j>i;j--){
//             swap(matrix[i][start],matrix[j][end]);
//             start++;
//         }
//         end--;
//     }
//     for(int i=0;i<2;i++){
//         while(start<end){
//             swap(matrix[i][start],matrix[i][end]);
//             start++,end--;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//     }
// }
// void rotateClockwise(string &s){
//     // int forward=s.size()-2;
//     int index=1;char c=s[0];
//     while(index<s.size()){
//         s[index-1]=s[index];
//         index++;
//     }
//     s[s.size()-1]=c;
// }
// int main(){
//     string s="amazon";
//     rotateClockwise(s);
//     rotateClockwise(s);
//     cout<<s;
// }
// class customer{
//     string name;
//     int acc_no,balance;
    
//     public:
//     static int total_customers;
//     customer(string name,int acc_no,int balance){
//    this->name=name;
//    this->acc_no=acc_no;
//    this->balance=balance;
// total_customers++;
//     }
//     void display(){
//         cout<<name<<" "<<acc_no<<" "<< balance<<"  "<<total_customers<<" ";

//     }
// };
// int customer::total_customers=0;
// int main(){
//     customer A1("rohit",1,1000);
//     customer A2("adhya",2,14700);
//     customer::total_customers=5;
//     A1.display();
// }
// class customer{
//     string name;
//     int acc_no,balance;
//     static int total_customer;
//     static int total_balance;
//     public:
//     customer(string name,int acc_no,int balance){
//         this->name=name;
//         this->acc_no=acc_no;
//         this->balance=balance;
//         total_balance+=balance;
//       total_customer++;
//     }
//     static void lol(){
//         cout<<total_customer<<endl;
//     }
//     //deposit
// void deposit(int a){
//     if(a>0){
// balance+=a;
// total_balance+=a;
//     }
//     else{
//         cout<<"not qwree";
//     }
// }
// //withdraw
// void withdraw(int a){
//     if(a>0&&a<=100000){
// balance-=a;
// total_balance-=a;
//     }
//     else{
//         cout<<"not qwree";
//     }
// }

//     void display(){
//         cout<<name<< " "<<acc_no<<" "<<balance<<" ";
//     }
// };
// int customer::total_customer=0;
// int customer::total_balance=0;
// int main(){
//     customer A1("adhya",2,14000);
//     customer A2("rohit",1,15000);
//     customer::lol();
//     A1.deposit(5000);
//     A1.display();
// }
// class insaan{
//     public:
//     string name;
//     int age,weight;

// };
// class student:protected insaan{
//     private:
//     int roll_no,fees;
//     public:
//     void lol(string a){
//         name:a;
//     }

// };
// int main(){
//     student A;
//     // A.name="rohit";
//     A.lol("adhya");
// }
// class insaan{
//     string religion,caste;
//     protected:
//     string name;
//     int age,weight;

// };
// class student:private insaan{
//     private:
//     int roll_no,fees;
//     public:
//     void fun(string n,int a,int m){
//         name=n;
//         age=a;
//         weight=m;
//     }
   
//     student (string name,int age,int weight,int roll_no,int fees){
//         this->name=name;
//    this->age=age;
//    this->weight=weight;
//    this->roll_no=roll_no;
//    this->fees=fees;
//     }
//     void display(){
//         cout<<name<<"age is"<<age<<"weight id:"<< weight<<" ";
//     }
// };

// int main(){
//     student A1("rohit",12,300,23,200);
//     A1.display();
// }
//single inhertiance

// class human{
//     protected:
//     string name;
//     int age;
//     human(){
//         cout<<"hello         "<<endl;
//     }
//     public:
//     void work(){
//         cout<<"iam working";
//     }
// };
// class student:public human{
//     int roll_no,fees;
//     public:
//     student(string name,int age,int roll_no,int fees){
//         this->name=name;
//         this->age=age;
//         this->roll_no=roll_no;
//         this->fees=fees;
//     }
//     void work(){
// cout<<" i am working lol";
//     }
//     student(){
//         cout<<"hello student          ";
//     }
// };
// int main(){
//     student a1("adhya",12,741654,74000);
// a1.work();
// }
// class person{
//     protected:
//     string name;
//     public:
//     void introduce(){
//         cout<<"my name is:"<<name<<" ";
//     }
// };
// class employee:public person{
//     protected:
//     int salary;
//     public:
//     void monthly_sol(){
//         cout<<"my salary is:"<<salary<<" ";
//     }
// };
// class manager:public employee{
    
//         public:
//         string department;
//     manager(string name,int salary,string department){
//             this->name=name;
//             this->salary=salary;
//             this->department=department;
//         }
        
//        void work(){
//             cout<<"i am leading the department"<<department<<" ";
//         }

    
// };
// int main(){
//     manager a1("adhya",45000,"finance");
//     a1.introduce();
// }
// class engineer{
//     public:
//     string specializition;

//     void work(){
//         cout<<"i have specilisation "<<endl;

//     }
// };
// class youtube{
//     public:
//     int subscribers;
//     void content_creator(){
//     cout<<"i have a subcriber base of:"<<subscribers<<" ";
//     }
// };
// class codeteacher:public engineer ,public youtube{
//     public:
//     string name;
//     codeteacher(string name,string specializition,int subscribers){
//         this->name=name;
//         this->specializition=specializition;
//         this->subscribers=subscribers;
//     }
//     void showcase(){
//         cout<<"my name is:"<<name<<" ";
//     }

// };
// int main(){
//     codeteacher a1("adhya","CDE778",48000);
//     a1.showcase();
// }
// class human{
//     protected:
//     string name;
//     int age;
//     human(){

//     }
//     public:
//     human(string name,int age){
// this->name=name;
// this->age=age;
//     }
//     void display(){
//         cout<<name<<" "<<age<<endl;
//     }
//     void work(){
//         cout<<" i am working \n";
//     }
// };
// class student :public human{
// int roll_no,fees;
// public:
// student (string name,int age,int roll_no,int fees):human(name,age){
//     this->roll_no=roll_no;
//     this->fees=fees;
// }
// void display(){
//     cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" ";
// }
// };
// class teacher:public human{
//     int salary;
//     public:
//     teacher(int salary,string name,int age){
//         this->salary=salary;
//         this->name=name;
//         this->age=age;
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
//     }
// };
// int main(){
//     student a1("adhya",12,4585,45000);
//     a1.display();
//     teacher a2(45000,"arrai",10);
//     a2.display();
// }
// class student{
//     public:
//     void print(){
//         cout<<"i am student\n";
//     }
// };
// class male{
//     public:
//     void maleo(){
//         cout<<"i am malee"<<endl;
//     }
// };
// class female{
//     public:
//     void femalo(){
//         cout<<"i am female"<<endl;
//     }
// };
// class boy:public student,public male{
//     public:
//     void boyprint(){
//         cout<<"i am a boy"<<endl;
//     }
// };
// class girl:public student,public female{
//     public:
//     void girlprint(){
//         cout<<"i am girl"<<endl;
//     }
// };

// int main(){
//     girl g1;
//     g1.girlprint();
//     boy b1;
//     b1.maleo();
//     b1.boyprint();
// }
// class human{
//     public:
//     string name;
//     void display(){
//         cout<<"i am "<<name<<endl;
//     }
// };
// class engineer:public virtual human{
//     public:
//     string specilization;
//     engineer(){
// cout<<"hello enginner"<<endl;
//     }
//     void work(){
//         cout<<"i have specilisation in"<<endl;
//     }
// };
// class youtuber:public virtual human{
//     public:
//     int subscriber;
//     youtuber(){
//         cout<<"i am youtuber"<<endl;
//     }
//     void content_creator(){
//         cout<<"i have subscriber-base of"<<subscriber;
//     }
// };
// class codeteacher:public youtuber,public engineer{
//     public:int salary;
//     codeteacher(){
//         cout<<"hello coder\n";
//     }
//     codeteacher(string name,string specilization,int subscriber){
//         this->specilization=specilization;
//         this->name=name;
//         this->subscriber=subscriber;
//     }
// };
// int main(){
//     codeteacher a1("rohit","CSE",45000);
//     a1.display();
// }
// class complex{
//     int real,img;
//     public:
//     complex(){
//     }
//     complex(int real,int img){
//   this->real=real;
//   this->img=img;
//     }
//     void display(){
//         cout<<real<<"+i "<<img<<endl;
//     }
//     complex operator+ (complex &c){
//         complex ans;
//         ans.real=real+c.real;
//         ans.img=img+c.img;
//         return ans;
//     }
// };
// int main(){
//     complex c1(1,7);
//     complex c2(2,8);
//     complex c3=c1+c2;
//     c3.display();
// }
// class animal{
//     public:
//    virtual void speak(){
//         cout<<"Hu Hu";
//     }
// };

// class dog:public animal{
//     public:
//     void speak(){
//         cout<<"Bark\n";
//     }
// };
// class cat:public animal{
//     public:
//     void speak(){
//         cout<<"Meow\n";
//     }
// };
// int main(){
//    // Animal *p;
//     // p=new dog();
//     // p->speak();
//     animal *p;
//     vector<animal*>animals;
//     animals.push_back(new dog());
//      animals.push_back(new cat());
//      animals.push_back(new animal());
//      animals.push_back(new dog());
//      animals.push_back(new cat());
//      for(int i=0;i<animals.size();i++){
//         p=animals[i];
//         p->speak();
//      }
// }
// class customer{
//     string name;
//     int balance,acc_no;
//     public:
//     customer(string name,int balance,int acc_no){
//         this->name=name;
//         this->balance=balance;
//         this->acc_no=acc_no;
//     };
//     //deposit
//     void deposit(int amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<"amount is created successfully \n";
//         }
//         else{
//             cout<<"amount should throw be greated than 0";
//         }
//     };
//     //withdraw
//     void withdraw(int amount){
//         if(amount>0&&amount<=balance){
//             balance-=amount;
//             cout<<amount<<"is debited sucessfully:";
//         }
//         else if(amount<0){
//                 throw " amount should br greater thsn 0";
//         }
//         else{
//             throw "balance low";
//         }
//     }
// };
// int main(){
//    try{
//      customer c1("rohit",10500,10000);
//     c1.deposit(100);
//     c1.withdraw(0);
//    }
//    catch(const char *e){
//  cout<<"expected occured:"<<e<<endl;
//    }
// };


// class expection{
//     protected:
//     string msg;
//     public:
//     expection(string msg){
//         this->msg=msg;
//     }
//     string what(){
//         cout<<msg;
//     }
// };
// int main(){
//     try{
//     int *p=new int[10000000000000];
//      cout<<"memeory allocation is successfull";
//      delete[]p;
//     }
//     catch(const expection &e){
// cout<<"expection occured due to line 9"<<e.what()<<endl;
//     }
// };
// int maxele(int arr[],int n){
//     int max=arr[0];
//     int index=1;
//    while(index<=n){
    
//      if(max<arr[index]){
//         max=arr[index];
//     }else{
//        index++;
//     }
//    }
//     return max;
// };
// int main(){
//     int arr[9]={1,7,4,5,12,17,9,5,4};
//     cout<<maxele(arr,8);
//     return 0;
// }
// int prodele(int arr[],int n){
//     int index=0;
//     int prod=1;
//     while(index<=n){
//         prod*=arr[index];
//         index++;
//     }
//     return prod;
// };
// int main(){
//     int arr[9]={1,7,4,5,12,17,9,5,4};
//    cout<<prodele(arr,8);
// return 0;
// }
// int evenele(int arr[],int n){
//     int index=0;
//     int count=0;
// while(index<=n){
//     if(arr[index]%2==0){
//         count++;
//         index++;
//     }else{
//         index++;
//     }
// }
//    return count;
// };
// int main(){
//     int arr[9]={1,7,4,5,12,17,9,5,4};
//    cout<<evenele(arr,8);
// return 0;
// }

// int const(string s,int n){
//     int index=0;
//     int count=0;
//     while(index<=n){
//         char c =tolower(s[index]);
//         if(c!=='a'&& c!=='e'&& c!=='i'&& c!=='o'&& c!=='u'){
//             count++;
//             index++;
//         }else{
//             index++;
//         }
//     }
//     return count;
// };
// int main(){
//     string s="adhya";
//     cout<<const(s,4)<<endl;
//     return 0;
// }
//bool pren(int arr[],int n,int x){
//     int index=0;
//     while(index<=n){
//         if(arr[index]==x){
//             return true ;
//           break;
//         }else{
//             index ++;
//         }
//     }
//     return false;
// };
// int main(){
//     int arr[6]={17,15,9,7,3,2};
//     int x=9;
//     cout<<pren(arr,5,x)<<endl;
//     return 0;
// }
// int reverse(int arr[],int n){
//     int index=0;
//     while(index<n){
//        int temp=arr[index];
//         arr[index]=arr[n];
//         arr[n]=temp;
//         index++,n--;
//     }
 
// };
// int main(){
//     int arr[6]={17,15,9,7,3,2};
//    reverse(arr,5);
//    for(int i=0;i<=5;i++){
//     cout<<arr[i]<<endl;
//    }
//     return 0;
// }
// int rotate(int arr[],int n){
//     int last=arr[n];

//     while(n>0){
//         arr[n]=arr[n-1];
//         n--;
//     }
//     arr[0]=last;
// };
// int main(){
//     int arr[6]={17,15,9,7,3,2};
// rotate(arr,5);
//     for(int i=0;i<=5;i++){
//     cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// class node{
//     public:
//     int data;
//     node *next;
//     node(int val){
//         data=val;
//  next=NULL;
//     }
// };
// int main(){
//     node *head;
//     head=NULL;
//     int arr[5]={2,4,6,8,10};
//     for(int i=0;i<5;i++){
//         if(head==NULL){
//             head=new node(arr[i]);
//         }
//     else{
//     node *temp;
//     temp =new node(arr[i]);
//     temp->next=head;
//     head=temp;
//         }
//     }
//     node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// };

// Node *vrll(int arr[],int index,int n){
//     if(index==size)
//         return NULL;
    
    
//     node *temp;
//     temp=new node(arr[index]);
//     temp->next=vrll(arr,index+1,n);
//     return temp;
// }
// int main(){
//     node *head;
//     head=NULL;
//     int arr[5]={1,2,3,45,78};
//    head= vrll(arr,0,5);

//     node *temp;
//     temp=head;
//     while(temp){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// }
// int main(){
//  int arr[5]={7,4,5,8,9};
//  int n=5;
// for(int i=n-1;i>=0;i--){
//     int index=i;
//     for(int j=i-1;j>=0;j--){
//       if(arr[j]<arr[index])
//        index=j;
//     }
//     swap(arr[i],arr[index]);
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
// }
//  int main(){
//  char arr[5]={'a','z','w','g','r'};
//  int n=5;
// for(int i=0;i<n;i++){
//     int index=i;
//     for(int j=i+1;j<n;j++){
//       if((arr[j]-'a')<(arr[index]-'a'))
//        index=j;
//     }
//     swap(arr[i],arr[index]);
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
// }
//  int main(){
//    int arr[5]={7,4,5,8,9};
//  int n=5;

// for(int i=1;i<n-2;i++){
   
//     for(int j=n;j>=i;j--){
//      if(arr[j]>arr[j-1])
     
//       swap(arr[j],arr[j-1]);
//     }
   
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
// }
//  int main(){
//    char arr[5]={'a','z','w','g','r'};
//  int n=5;

// for(int i=n-2;i>=0;i--){
   
//     for(int j=0;j<=i;j++){
//      if((arr[j]-'a')>(arr[j+1]-'a'))
     
//       swap(arr[j],arr[j+1]);
//     }
   
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
// }

// int main(){
//     int arr[5]={7,4,2,3,5};
//     int n=5;
//     for(int i=n;i>=0;i--){
//         for(int j=i;j<n-1;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }else{
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     vector<int>ans(3);
//     int arr[3][3]={1,2,3,7,8,9,6,5,4};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//   ans[i]+=arr[i][j];
//         }
//     }
//     int sum=0;
//     for(int i=0;i<3;i++){
//         if(ans[i]>sum){
//             sum=ans[i];
//         }else{
//             cout<<sum;
//         }
//     }
// }
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=1;j<5;j++){
//             cout<<j;
         
//         }
//  cout<<endl;
//     }
// }
// int main(){
//     for(int i=3;i>0;i--){
//         for(int j=3;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int z=1;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
// cout<<z<<" ";
// z=z+1;
//     }
//     cout<<endl;
// }
// }
// int main(){
// int z=1;
// for(int i=0;i<4;i++){
//     for(int j=0;j<z;j++){
//         cout<<"*";
      
      
//     }
//     z++;  cout<<endl;
// }
// }
// int main(){
//     int z=1;for(int i=0;i<4;i++){
//         for(int j=0;j<z;j++){
//             cout<<z;
//         }
//         z++;cout<<endl;
//     }
// }
// int main(){
//     int z=1; int n=1;
//     for(int i=1;i<5;i++){
//         for(int j=0;j<z;j++){
           
//             cout<<n<<" ";
//             n++;
//         }
//         z++;cout<<endl;
//     }
// }
// int main(){
//     int z=1;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<z;j++){
// cout<<i-j+1;
//         }
//         z++;cout<<endl;
//     }
// }
// int main(){
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         char c='A'+i;
//         cout<<c;
//     }
//     cout<<endl;
// }
// }
// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
// char c='A'+j;
// cout<<c;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             char c='A'+x;
//             cout<<c;
//             x++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++){
//             char c='A'+j+i;
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int z=1;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<z;j++){
// char c='A'+i;
// cout<<c;
//         }z++;
//         cout<<endl;
//     }
// }
// int main(){
//      int z=1;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<z;j++){
//             char c='A'+i+j;
//             cout<<c;
//         }
//      z++;   cout<<endl;
//     }
// }
// int main() {
//     int z = 1;
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < z; j++) {
//             char c = 'A' + i + j;
//             cout << c << " ";
//         }
//         z++;
//         cout << endl;
//     }
//     return 0;
// }
// int main() {
//     int z=1;
//     char c = 'A';
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < z; j++) {
//             cout << c << " ";
//             c++;
//         }
//        z++; cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int z=1; int n=4;
//     for(int i=4;i>0;i--){
//         for(int j=0;j<z;j++){
           
//             char c='D'+n-i;
//             cout<<c;
//           n--;
//         }
//         z++;cout<<endl;
//     }
// }
// int main() {
//     int z=1;
//     for (int i = 3; i >= 0; i--) {
//         for (int j = 0; j <z; j++) {
//             char c = 'A' + i + j;
//             cout << c << " ";
//         }
//        z++; cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int z=1;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             char c='A'+i+j;
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// // }
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=1;j<5;j++){
//             cout<<10<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<6;i++){
//         for(int j=1;j<6;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<6;i++){
//         for(int j=1;j<6;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main (){
//     for(int i=5;i>0;i--){
//         for(int j=5;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i>6;i++){
//         for(int j=1;j>6;j++){
//             cout<< j*j <<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1; i<=6; i++){
//         for(int j=1; j<=6; j++){
//             cout << j*j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     for(int i=0;i<6;i++){
//         for(int j=0;j<6;j++){
//             char c='a'+j;
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int z=1;
//     for(int i=1;i<6;i++){
//         for(int j=1;j<6;j++){
//             cout<<z<<" ";
//             z++;
//         }
//         cout<<endl;
//     }}

// int main(){
//     int z=1;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<z;j++){
//             cout<<"*"<<" ";
//         }
//         z++,cout<<endl;
//     }
// }
// int main(){
//     int z=1;
//     for (int i=0;i<5;i++){
//         for(int j=1;j<=z;j++){
//             cout<<j;
//         }
//         z++;cout<<endl;
//     }
// }
// int main(){int z=1;
//     for(int i=1;i<6;i++){
//         for(int j=1;j<=z;j++){
// cout<<i<<" ";
//         }
//         z++;cout<<endl;
//     }
// }
// int main(){int z=1;
//     for(int i=1;i<5;i++){
//         for(int j=0;j<z;j++){
//             cout<<i-j<<" ";
//         }
//         z++;cout<<endl;
//     }
// }
// int main(){
// int z=1;
// for(int i=0;i<6;i++){
//     for(int j=0;j<z;j++){
//         char c='a'+i;
//         cout<<c<<" ";
//     }z++;cout<<endl;
// }
// }
// int main(){
//     int z=5;
//     for(int i=5;i>0;i--){
//         for(int j=1;j<=z;j++){
//             cout<<"*"<<" ";
//         }
//         z--;cout<<endl;
//     }
// }

//     int main(){
//     int z=5;
//     for(int i=5;i>0;i--){
//         for(int j=1;j<=z;j++){
//             cout<<j<<" ";
//         }
//         z--;cout<<endl;
//     }
// }

//     int main(){
//     int z=5;
//     for(int i=5;i>0;i--){
//         for(int j=5;j>=z;j--){
//             cout<<j<<" ";
//         }
//         z--;cout<<endl;
//     }
// }

// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<5;i++){
//         for(int j=3;j>0;j--){
//             cout<<" ";
//         }
//         for(int j=1;j>=i;j++){
//             cout<<"i";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1; i<5; i++){
//         for(int j=3; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=1; j>0; j++){
//             cout<<"i";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     for(int i=1; i<5; i++){
//         for(int j=1; j<=5-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     for(int i=1;i<6;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
//     cout<<" ";
// }
// for(int j=1;j<=i;j++){
//     char c='A'+j-1;
//     cout<<c;
// }
// cout<<endl;
// }
// }
// int main(){
//    for(int i=0;i<=5;i++){
//     for(int j=1;j<=5-i;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<i;j++){
//         cout<<i-j;
//     }
//     cout<<endl;
//    }
// }
// int main(){
//     int a=4;
//     int b=5;
//     cout<<(a&b)<<"  a&b"<<endl;
//     cout<<(a|b)<<"  a!b"<<endl;
// cout<<(~a)<<"  ~a"<<endl;
// cout<<(a^b)<<"  a^b"<<endl;
// cout<<(17>>2)<<endl;
// cout<<(17<<2)<<endl;
// int i=1;
// int c=i++;
// cout<<c+i<<endl;;

// }
// int main(){
// int i=7;
// cout<<++i<<'\n';
// cout<<i++<<'\n';
// cout<<i--<<'\n';
// cout<<--i<<'\n';

// }
// int main(){
//     int a=10;
//     int b=1;
//     if(++a){
//         cout<<b<<'\n';
//     }else{
//         cout<<++b<<endl;
//     }
// }int mai
// int main(){
//     int a=1;int b=2;
//     if(a-->0&& ++b>2){
//         cout<<"stage1-inside if";
//     }
//     else{
//         cout<<"stage 2-inside else";
//     }
//     cout<<a<<" a"<<b<<"b ";
// }
// int main(){
// int a=1;
// int b=2;
// if(a-->0 ||++b>2){
//     cout<<"stage 1-inside if";
// }
// else{
//     cout<<"stage 2-inside else";
// }
// cout<<a<<" "<<b<<" "<<endl;
// }
// int main(){
//     int a=1;
//     int b=a++;
//     int c=++a;
//     cout<<b;
//     cout<<c;
// }
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=5;i>0;i--){
//         for(int j=0;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=4;j>=i;j--){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*i-2;j++){
//             cout<<" ";
//         }
//         for(int j=4;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*4-2*i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*4-2*i;j++){
//             cout<<" ";
//         }
//          for(int j=1;j<=i;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
//     for(int i=4;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=8-2*i;j++){
//             cout<<" ";
//         }
//           for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// // }
// int main(){
// for(int i=0;i<=4;i++){
//     for(int j=1;j<4-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }
// for(int i=4;i>0;i--){
//     for(int j=0;j<=4-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     // int arr[10]={24};
//     // cout<<arr[7];
//     int art[10];
//     for(int i=0;i<10;i++){
//         art[i]=24;
//     }
//     cout<<art[7];
// }
//get maxima
// int getmax(int arr[],int n){
//     int max=INT8_MIN;
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     return max;
// };
// int getmin(int arr[],int n){
//     int min=INT8_MAX;
//     for(int i=0;i<n;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     return min;
// };
// int main(){
//     int nums[5]={7,5,3,4,2};
// getmax(nums,5);
// cout<<getmax(nums,5)<<endl;
// cout<<getmin(nums,5)<<endl;
// }
//  void update(int arr[],int n){
//     cout<<"inside the function"<<endl;
//     arr[0]=120;
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<"going back to my main function";
//  }



// int main(){
//     int arr[3]={1,2,3};
//     update(arr,3);
//     for(int i=0;i<3;i++){
//         cout<<" "<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// int summi(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int num[5]={1,2,3,4,5};
// cout<<summi(num,5);
// }
// bool search(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int num[5]={7,8,5,4,1};
//     cout<<"enter the element to search for "<<endl;
//     int key;cin>>key;
//     bool found=search(num,5,key);
//     if(found){
//         cout<<"key present"<<endl;

//     }
//     else{
//         cout<<"key not present"<<endl;
//     }
// // }
// //reverse an array
// int reverse(int arr[],int n){
//     int s=0;int end=n-1;
//     while(s<=end){
//         swap(arr[s],arr[end]);
//         s++;end--;
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     reverse(arr,5);
//     for(int i=0;i<5;i++){
// cout<<arr[i]<<"  ";
//     }
// }
// int swaprev(int arr[],int n){
// int i=0;
//     while( i+1<n){
//         swap(arr[i],arr[i+1]);
//         i+=2;
//     }
// };
// int main(){
//     int num[5]={1,2,3,4,5};
//     swaprev(num,5);
//     for(int i=0;i<5;i++){
//         cout<<num[i]<<" ";
//         }
// int main(){

//     int num[5]={1,3,3,1,5};
//     for(int i=0;i<5;i++){
//         if(num[i])
//     }
// }
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=1;j<4-i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         for(int j=4;j>i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=3;j>i;j--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i+1;j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i+1;j++){
//             cout<<j;
//         }
//         for(int j=1;j<i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<i;j++){
//             cout<<"*";
//         }
//         for(int j=5-i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int bs(int arr[],int size,int key){
//     int start=0;int end=size-1;
//     int mid;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]>key){
//             start=mid-1;
//         }else{
//             end=mid+1;
//         }
//       mid=start+(end-start)/2;
//     }
//                return -1;
// };
// int main(){
//     int arr[5]={7,8,10,15,20};
// cout<<bs(arr,5,20);
// return 0;
// }


// int bs(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;
//     int mid;

//     while (start <= end) {
//         mid = start + (end - start) / 2; // Initialize mid here

//         if (arr[mid] == key) {
//             return mid;
//         } else if (arr[mid] > key) {
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[5] = {7, 8, 10, 15, 20};
//     cout << bs(arr, 5, 20);
//     return 0;
// }
// int findPivot(int arr[],int n){
//     int low=0;int high=n-1;
//     int mid;
//     while(low<=high){
//         mid=low+high/2;
//         if((arr[mid-1]>arr[mid])&&(arr[mid]<arr[mid+1])){
//         return mid;
//         }else if(arr[mid+1]>arr[mid]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
// }
// int main(){
//     int arr[9]={2,3,4,6,7,8,10,2,4};
//     int num[5]={1,2,10,4,7};
//      cout<<findPivot(num,5);
//     cout<<findPivot(arr,9);
// // }
// int findPivot(int arr[], int n) {
//     int low = 0;
//     int high = n - 1;
//     int mid;

//     while (low <= high) {
//         mid = low + (high - low) / 2;

//         if ((mid == 0 || arr[mid - 1] > arr[mid]) && (mid == n - 1 || arr[mid] < arr[mid + 1])) {
//             return mid;
//         } else if (mid < n - 1 && arr[mid + 1] > arr[mid]) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[9] = {2, 3, 4, 6, 7, 8, 10, 2, 4};
//     int num[5] = {1, 2, 10, 4, 7};
//     cout << findPivot(num, 5) << endl;
//     cout << findPivot(arr, 9) << endl;
//     return 0;
// }


// int findPivot(int arr[], int n) {
//     int low = 0;
//     int high = n - 1;
//     int mid;

//     while (low <= high) {
//         mid = low + (high - low) / 2;

//         if ((mid == 0 || arr[mid - 1] > arr[mid]) && (mid == n - 1 || arr[mid] < arr[mid + 1])) {
//             return mid;
//         } else if (mid > 0 && arr[mid - 1] < arr[mid]) {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[9] = {2, 3, 4, 6, 7, 8, 10, 1, 4};
//     int num[5] = {1, 2, 10, 4, 7};
//     cout << findPivot(num, 5) << endl;
//     cout << findPivot(arr, 9) << endl;
//     return 0;
// }

// int pl(int num[],int n){
    
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(num[mid]<num[mid+1]){
//             start=mid;
//         }else{
//             end=mid-1;
//         }
//     }
//     return start;
// };
// int main(){
//     int num[9]={7,8,10,11,5,4,3,2,1};
//     cout<<pl(num,9);
//     return 0;
// }
// int pl(int num[], int n) {
//     int start = 0;
//     int end = n - 1;
//     int mid;

//     while (start <= end) {
//         mid = start + (end - start) / 2;

//         if (mid == n - 1 || num[mid] > num[mid + 1]) {
//             return mid;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int num[9] = {7, 8, 10, 11, 5, 4, 3, 2, 1};
//     cout << pl(num, 9);
//     return 0;
// }


// int pl(int arr[],int n){
// int low=0;int high=n-1;
// int mid;
// while(low<=high){
//      mid = low + (high- low) / 2;
//     if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
//         return mid;
//     }else if(arr[mid]>arr[mid-1]){
//         low=mid+1;
//     }else{
//         high=mid-1;
//     }
// }
// }
// int main() {
//     int num[9] = {7, 8, 10, 11, 5, 4, 3, 2, 1};
//     cout << pl(num, 9);
//     return 0;
// }
//peak of element
// int peakElement(int arr[],int n){
//     int start=0;int end=n-1;
//     int mid;
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return start;
// }
// int main(){
//     int num1[9]={2,5,7,8,9,10,11,4,2};
//     int num2[7]={2,3,6,7,8,5,2};
//     int num3[4]={1,10,4,2};
//     cout<<peakElement(num1,9)<<endl;
//     cout<<peakElement(num2,7)<<endl;
//     cout<<peakElement(num3,4);
// // }
// int pivot(int arr[],int n){
//     int start=0;int end=n-1;
//     int mid;
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return start;
// }
// int main(){
//     int num1[5]={11,14,8,9,10};
// int num2[11]={5,6,7,9,1,2,3,4,5,7,9};
// int num3[6]={11,12,19,2,4,9};
// cout<<pivot(num1,5)<<endl;
// cout<<pivot(num2,11)<<endl;
// cout<<pivot(num3,6)<<endl;
// }
// int getPivot(int arr[],int n){
//     int start=0;int end=n-1;
//     int mid;
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }return start;
// }
// int binarySearch(int arr,int pivot,int n,int k){
// int start=0;int end=n-1;int mid;
// while(start<=end){
//    mid=start+(end-start)/2;
//     if(arr[mid]==k){
//         return mid;
//     }else if(arr[mid]<k){
//         start=mid+1;
//     }else{
//         end=mid-1;
//     }
//      }return -1;
//     }








// int main()
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
// int arr[9]={7,8,9,10,11,4,5,7,9};
// int result;
//    int pivot=getPivot(arr, 9);
//    if((11>=arr[pivot])&& (11<=arr[9-1])){
//       result= binarySearch(arr,  pivot,  9, 11);
//    }else{
//      result=   binarySearch(arr, 0, pivot-1, 11);
//    }
//    cout<<result<<endl;
//    return 0;
// // }
// int getPivot(int arr[], int n) {
//     int start = 0;
//     int end = n - 1;
//     int mid;

//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (arr[mid] >= arr[0]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }
//     return start;
// }

// int binarySearch(int arr[], int start, int end, int k) {
//     int mid;

//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == k) {
//             return mid;
//         } else if (arr[mid] < k) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[9] = {7, 8, 9, 10, 11, 4, 5, 7, 9};
//     int pivot = getPivot(arr, 9);
//     int result;

//     if ((11 >= arr[pivot]) && (11 <= arr[9 - 1])) {
//         result = binarySearch(arr, pivot, 9, 11);
//     } else {
//         result = binarySearch(arr, 0, pivot - 1, 11);
//     }

//     cout << result << endl;
//     return 0;
// }
// int squareRoot(int arr[],int n){

// }
// int main(){
//     // int arr[6]={7,4,2,1,6,9}; int n=6;
//      int arr[4]={7,4,0,9};
//    int n=4;
//     for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
//    if(arr[j]<arr[i]){
//     swap(arr[j],arr[i]);
//    }
// }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
    
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
// for(int j=i+1;j<n;j++){
//             if (arr[j] < arr[i]) {
//         int minIndex = j;
    
//    }
//         }
// swap(arr[minIndex],arr[i]);
//     }
// }
// int main(){
//     int arr[7]={ 8, 22, 7, 9, 31, 5, 13}; int n=7;
//     int count=0;
//     for (int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             count++;
//         }
//         }
//     }
//     cout<<count;
// }
// bool is_present(int arr[][3],int n,int m,int target){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==target){
//                 return 1;
//             }
//         }
//     }
//    return 0;
// }

// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int target;
//     cin>>target;
//     int pre=is_present(arr,3,3,target);
//     if(pre){
//         cout<<"target found"<<endl;
//     }else{
//         cout<<"target not found";
//     }
//     return 0;
// }
// int row_sum(int arr[][3],int n,int m){
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<m;j++){
//          sum+=arr[i][j];
//         }
    
//         cout<<sum<<endl;
//     }
// // }
// int Largest_row_sum(int arr[][3],int n,int m){
//     int maxi=INT8_MIN;
// int row_index=-1;
// for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<m;j++){
//          sum+=arr[i][j];
//         }
//         if(maxi<sum){
//             maxi=sum;
//             row_index=i;
//         }
//         }
//          cout<< maxi<<" "<<row_index<<" ";

// }
//int col_sum(int arr[][3],int n,int m){
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<m;j++){
//          sum+=arr[j][i];
//         }
    
//         cout<<sum<<endl;
//     }
// }
// int main(){
//     // int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int arr[3][3]={7,8,9,10,12,14,13,11,15};
//     // int pre=col_sum(arr,3,3);
//      Largest_row_sum(arr,3,3);
//     return 0;
// }
// int main(){
//     int arr[3][3]={7,8,9,10,11,12,5,4,3};
//     for(int j=0;j<3;j++){
//         if(j%2==0){
//             for(int i=0;i<3;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int i=3;i>0;i--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//    vector<int>v;
//    cout<<v.capacity()<<endl;
//    v.push_back(1);
//    cout<<v.capacity()<<endl;
//    v.push_back(5);
//   cout<< v.capacity()<<endl;
//    v.push_back(7);
//  cout<< v.capacity()<<endl;
// //    v.push_back(11);
// //   cout<< v.capacity()<<endl;
//   cout<<v.size()<<endl;
//   cout<<v.at(0)<<endl;
//   cout<<v.front()<<endl;
//   cout<<v.back()<<endl;
//   v.pop_back();
//   for(int i=1;i<=5;i++){
//     v.push_back(i);
//   }
//   for(int i:v){
//     cout<<i<<endl;
//   }
//   v.assign(5,10);
//   for(int i:v){
//     cout<<i<<endl;
//   }
//   vector<int>v2;
//   v2.assign(3,18);
//   v.swap(v2);
//    for(int i:v2){
//     cout<<i<<endl;
//   }
// }
//int main(){
  // int ans=0;
  // int sign=1;int n=521;
  // while(n>0){
  //  ans+=sign*(n%10);
  //  sign*=-1;
  //  n=n/10;
  // }
  // cout<<ans;
//}
// void rotate(int arr[],int n,int k){
//    k=k%n;
//  for (int j = 0; j < k; j++) {
//   int temp=arr[n-1];
//   for(int i=n-1;i>0;i--){
//     arr[i]=arr[i-1];
//   }
//   arr[0]=temp;
// }
// };
// int main(){
//   int arr[4]={1,2,9,11};
// rotate(arr,4,2);
//   for (int i = 0; i < 4; i++) {
//         cout << arr[i] << " ";
//     }

// }
// void rotate(int arr[], int n, int k) {
    // k = k % n;
    // for (int j = 0; j < k; j++) {
    //     int temp = arr[n - 1];
    //     for (int i = n - 1; i > 0; i--) {
    //         arr[i] = arr[i - 1];
    //     }
    //     arr[0] = temp;
    // }
// }

// int main() {
//     int arr[4] = {1, 2, 9, 11};
//     rotate(arr, 4, 2);
//     for (int i = 0; i < 4; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// bool check_rotaed_sorted(int arr[],int n){
//   //ascending order
//   for(int i=1;i<n;i++){
//  if(arr[i-1]>arr[i]){
//   return true;
//  }
//   }
//   if(arr[0]>arr[n-1]){
//     return true;
//   }
// }

// int main(){
//   int arr[5]={4,5,1,2,3};
//  bool po= check_rotaed_sorted(arr,5);
// if(po){
//   cout<<"yes,it rotated and sorted";
// }else{
//   cout<<"ni,it not rotated and sorted";
// }
// return 0;
// }
// int main(){
//   int a,b=1;
//   a=10;
//   if(++a){cout<<b;
//   }else{
//     cout<<++b;
//   }
// }
//sum of two numbers
// int sum_of_two_no(int a[],int n,int b[],int m){
//   int i=n-1;
//   int j=m-1;
//   vector<int>answer;
//   int carry=0;int sum=0;
//   while(i>=0 && j>=0){
//     int cario1=a[i];
//     int cario2=b[j];
//     sum+=cario1+cario2+carry;
//     carry=sum/10;
//     sum=sum%10;
//     answer.push_back(sum);
//     i--;j--;
//   }
//   while(i>=0){
//      int cario1=a[i];
//     sum+=cario1+carry;
//     carry=sum/10;
//     sum=sum%10;
//     answer.push_back(sum);
//     i--;
//   }
//   while(j>=0){
//      int cario2=b[j];
//     sum+=cario2+carry;
//     carry=sum/10;
//     sum=sum%10;
//     answer.push_back(sum);
//     j--;
//   }
//   //reverse(ans);
//   return answer;
// }
// int main(){
//   int a[4]={7,4,3,4};
//   int b[3]={2,6,8};int arr;
//   int po=sum_of_two_no(a,4,b,3);
//   for(int i=0;i<po.size();i++){
//     cout<<arr[i]<<" ";
//   }
// }
// std::vector<int> sum_of_two_no(int a[], int n, int b[], int m) {
//     int i = n - 1;
//     int j = m - 1;
//     std::vector<int> answer;
//     int carry = 0;
//     int sum = 0;
//     while (i >= 0 && j >= 0) {
//         int cario1 = a[i];
//         int cario2 = b[j];
//         sum = cario1 + cario2 + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         answer.push_back(sum);
//         i--;
//         j--;
//     }
//     while (i >= 0) {
//         int cario1 = a[i];
//         sum = cario1 + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         answer.push_back(sum);
//         i--;
//     }
//     while (j >= 0) {
//         int cario2 = b[j];
//         sum = cario2 + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         answer.push_back(sum);
//         j--;
//     }
//     std::reverse(answer.begin(), answer.end());
//     return answer;
// }

// int main() {
//     int a[4] = {7, 4, 3, 4};
//     int b[3] = {2, 6, 8};
//     std::vector<int> arr = sum_of_two_no(a, 4, b, 3);
//     for (int i = 0; i < arr.size(); i++) {
//         std::cout << arr[i] << " ";
//     }
//     return 0;
// }
// char lowercase(char c){
//   if(c>='a' && c<= 'z'){
//     return c;
//   }else{
//     char temp=c-'A'+'a';
//     return temp;
//   }
// }
// int main(){
//   int a[12]={5,?,3,a,6,@,6,A,?,3,5};
//   int s=0;int n=a.size();
//   int e=n-1;
//   while(s<=e){
//     if(lowercase(a[s])!=lowercase(a[e])){
//       cout<<"not palindrome";
//     }
//     s++,e--;
//   }
// }
// void reverse(char name[],int n){
// int s=0;
// int e=n-1;
// while(s<=e){
//   swap(name[s],name[e]);
//   s++,e--;
// }

// }
// int getLength(char name[]){
//   int count=0;
//   for(int i=0;name[i]!='\0';i++){
//     count++;
//   }
//   return count;
// }

// char lowercase(char a){
 
//     if(a>='a' && a<='z'){
//       return a;
//     }else{
//       char temp=a-'A'+'a';
//       return temp;
//     }
  
// }
// bool palindrome(char a[],int n){
//   int s=0;int e=n-1;
//   while(s<=e){
//     if(lowercase(a[s])!=lowercase(a[e])){
//       return 0;
//     }else{
//       s++;
//       e--;
//     }
//   }
//   return 1;
// }
// int main(){
//   char name[20];
//   cout<<"enter your name"<<endl;
//   cin>>name;
//   cout<<"your name is:"<<endl;
//   cout<<name<<endl;
//   int  len=getLength(name);
//   cout<<"length  "<<len<<endl;
//   reverse(name, len);
//   cout<<"reverse is: "<<name<<endl;
//   bool pali=palindrome(name,len);
//   if(pali){
//     cout<<"is palindrome"<<endl;
//   }else{
//      cout<<"is not palindrome"<<endl;
//   }
//   }
//  int main(){
  // int num=5;
  // int*ptr=&num;
  // cout<<num<<endl;
  // cout<<&num<<endl;//address
  // cout<<ptr<<endl;//address
  // cout<<*ptr<<endl;
  // cout<<sizeof(num)<<endl;
  // cout<<sizeof(ptr)<<endl;
// int i=5;
// int * ptr=0;
// ptr=&i;
// cout<<ptr<<endl;
// cout<<i<<endl;
// cout<<&i<<endl;
// cout<<*ptr<<endl;
// int num=5;
// // int a=num;
// cout<<num<<endl;
// int *ptr=&num;
// cout<<num<<endl;
// *ptr=*ptr+1;
// cout<<num<<endl;
// int *q=ptr;
// cout<<q<<endl;
// cout<<ptr<<endl;
// cout<<*q<<endl;
// int i=3;
// int *t=&i;
// cout<<(*t)++<<endl;
// cout<<i<<endl;
// cout<<t<<endl;
// t=t+1;
// cout<<t<<endl;
// cout<<*t<<endl;


int arr[3]={7,5,1};
// cout<<arr<<endl;
// cout<<&arr[0]<<endl;
// cout<<*arr<<endl;
// for(int i=0;i<10;i++){
// cout<<*(arr+i)<<endl;
// }
// cout<<*arr+1<<endl;
// cout<<*(arr+1)<<endl;
// cout<<*(arr)+1<<endl;
// cout<<2[arr]<<endl;//arr[i]
// cout<<*(2+arr)<<endl;//*(Arr+i)
//  }
// int main(){
//   int temp[10]={1,2,7};
//   cout<<sizeof(temp)<<endl;
//   cout<<(&temp)<<endl;
//   cout<<sizeof(*temp)<<endl;
//   int *ptr=temp;
//   cout<<sizeof(ptr)<<endl;
//   cout<<sizeof(*ptr)<<endl; 
//    cout<<sizeof(&ptr)<<endl;
//   cout<<*(ptr+1)<<endl;
// // }
// int main(){
//   int arr[10];
//   int *ptr=&arr[0];
//   cout<<ptr<<endl;
//   ptr++;
//   cout<<ptr<<endl;
//   cout<<*ptr<<endl;
// }
// int main(){
//   int arr[5]={1,2,3,4,5};
//   char ch[6]={'a'};
//   cout<<arr<<endl;
//   cout<<ch<<endl;
//   char *ptr=&ch[0];
//  cout<<ptr<<endl;
//  char temp='x';
//  char *p=&temp;
//  cout<<p<<endl;
//  cout<<*p<<endl;
//  arr[10]={1};
//  int *ptr=&arr[0];
//  cout<<ptr<<endl;
// }
// void print(int *p){
//   cout<<*p<<endl;

// }
// void update(int *p){
//   p=p+1;
//   *p=*p+1;
// }
// int main(){
//   int value=5;
//   int *p=&value;
//   // print(p);
//   cout<<"before  "<<p<<endl;
//   cout<<*p<<endl;
//   update(p);
//   cout<<"after "<<p<<endl;
//   cout<<*p<<endl;
// }
// int main(){
//   int i=5;
//   int *p=&i;int **p2=&p;
//   cout<<p<<endl;//address of i
//   cout<<&i<<endl;
// cout<<*p<<endl;//value of i
// cout<<&p<<endl;//address of pointer p
// cout<<p2<<endl;//adress of pointer p
// cout<<**p2<<endl;
// return 0;
// }
// void update(int **p){
//  // p=p+1; 
//   //*p=*p+1;
//   **p=**p+1;
// }

// int main(){
//   int i=5;
//   int *p1=&i;
//   int **p2=&p1;
//   cout<<"before "<<i<<endl;
//   cout<<"before  "<<p1<<endl;
//   cout<<"before  "<<p2<<endl;
//   update(p2);
//   cout<<"After "<<i<<endl;
//   cout<<"after "<<p1<<endl;
//   cout<<"after "<<p2<<endl;
// }
// int main(){
//   int first=0;
//   int second=10;
//   int *ptr=&second;
//   *ptr=9;
//   cout<<first<<" "<<second<<" "<<endl;
// // }
// int main(){
//   int first=6;
//   int *p=&first;
//   int *q=p;
//   (*q)++;
//   cout<<first<<endl;
// }/
// int main(){
//   int first=8;
//   int *p=&first;
//  cout<<(*p)++<<endl;
//  cout<<first<<endl;
// }
// int main(){
//   int *ptr=0;
//   int first=110;
//   *ptr=first;
//   cout<<*ptr<<endl;
// }
// int main()
  // int first=8;
  // int second=11;
  // int *third=&second;
  // first=*third;
  // *third=*third+1;
  // cout<<first<<" "<<second<<endl;
  // float f=12.5;
  // float p=21.5;
  // float *ptr=&f;
  // (*ptr)++;
  // cout<<*ptr<<" "<<f<<" "<<p<<endl;
  // int s[5];
  // int *ptr;
  // cout<<sizeof(s)<<" "<<sizeof(ptr)<<" "<<endl;
// int arr[]={11,21,13,15};
// cout<<*(arr)<<" "<<*(arr+1)<<" "<<endl;
// int arr[6]={11,21,13};
// cout<<arr<<" "<<&arr<<endl;

// int arr[6]={11,21,13};
// int *p=arr;
// // cout<<(arr+1)<<endl;
// cout<<p[2]<<endl;
// int arr[]={11,12,13,14,1,5};
// cout<<*(arr)<<" "<<*(arr+3)<<endl;
// }}

// int arr[]={11,2,1,30,41};
// int *ptr=arr++;
// cout<<*ptr<<endl;
// char ch='a';
// char *ptr=&ch;
// ch++;
// cout<<*ptr<<endl;4
// char arr[]="abcde";
// char *p= &arr[0];
// p++;
// cout<<p<<endl;
// char str[]="babber";
// char *p=str;
// cout<<str[0]<<" "<<p[0]<<endl;

// void update(int *p){
//   *p=*p+1;

// }
// int main(){
//   int i=10;
//   update(&i);
//   cout<<i<<endl;
// }
// void increment(int **p){
//   ++(**p);
// }
// int main(){
//   // int first=110;
//   // int *p=&first;
//   // int **q=&p;
//   // int second=(**q)+++9;
//   // cout<<first<<" "<<second<<endl;
// int num=110;
// int *ptr=&num;
// increment(&ptr);
// cout<<num<<endl;
// }
// int main()
// {
//   int ***r, **q, *p, i=8;
//   p = &i;
//   (*p)++;
//   q = &p;
//   (**q)++;
//   r = &q;
//   cout<<*p << " " <<**q << " "<<***r;
//   return 0;
// }
// int f(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// int main() {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
//     return 0;
// }
// int main(){
// int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;
// }
// void Q(int z)
// {
//   z += z;
//   cout<<z << " ";
// }

// void P(int *y) 
// {
//   int x = *y + 2;
//   Q(x);
//   *y = x - 1; 
//   cout<<x << " ";
// }

// int main()
// {
//   int x = 5;
//   P(&x);
//   cout<<x;
//   return 0;
// }
// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }

// int main()
// {
//    char *x = "ninjasquiz";
//    char *y = "codingninjas";
//    char *t;
//    swap(x, y);
//    cout<<x << " "<<y;
//    t = x;
//    x = y;
//    y = t; 
//    cout<<" "<<x<< " "<<y;
//    return 0;
// }

// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }
// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }
// void changeSign(int *p){
//   *p = (*p)  *  -1;
// }

// int main(){
//   int a = 10;
//   changeSign(&a);
//   cout << a << endl;
// }
// int main()
// {
//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;
//   return 0;
// }
// int main() {
//   char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st];
//   }
//   return 0;
// }
// int main ()
// {
//   int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
//   return 0;
// }
// int main()
// { 
//   char *ptr; 
//   char Str[] = "abcdefg";
//   ptr = Str;
//   ptr += 5;
//   cout << ptr;
//   return 0;
// }
// int main()
// {
//   // char arr[20];
//   // int i;
//   // for(i = 0; i < 10; i++) {
//   //   *(arr + i) = 65 + i;
//   // }
//   // *(arr + i) = '\0';
//   // cout << arr;
//   // return 0;
//   char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];
// }
// int main(){
// char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl;
// }
  // int arr[] = {4, 5, 6, 7};
  // int *p = (arr + 1);
  // cout << *arr + 9;
  // return 0;
//   int a[] = {1, 2, 3, 4};
// int *p = a++;
// cout << *p << endl;
// int a[3] = {
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
// int a[5];
// int *c;
// cout << sizeof(a) << " " << sizeof(c);
// char ch = 'a';
//  char* ptr = &ch;
//  ch++;
//  cout << *ptr << endl;
// float f = 10.5;
// float p = 2.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout << *ptr << " " << f << " " << p;
// int a = 7;
// int b = 17;
// int *c = &b;
// *c = 7;
// cout  << a << "  " << b << endl;
// int *ptr = 0;
// int a = 10;
// *ptr = a;
// cout << *ptr << endl;
// int update(int &n){
//   n++;
// }
// int main(){
//   int n=5;
//   cout<<"before "<<n<<endl;
//   update(n);
//   cout<<"after "<<n<<endl;
// }

// int get_sum(int arr[],int n){
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum+=arr[i];
//   }
// cout<<sum<<endl;
// // delete []arr;
// // cout<<"ge"<<get_sum(arr,n)<<endl;
// }
// int main(){
//   int n;
//   cin>>n;
//   int *arr=new int [n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   get_sum(arr,5);
// }
// void get_sum(int *arr,int n){
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum+=arr[i];
//   }
// cout<<sum<<endl; 
// }
// int main(){
//   int arr[5]={1,2,3,4,5};
//   get_sum(arr,5);
// }
// int main(){
//   int n=3;
//   int m=3;
//   int **arr=new int *[n];
//   for(int i=0;i<n;i++){
//     arr[i]=new int [m];
//   }
//   arr[n][m]={1,2,3,4,5,6,7,8,9};
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cout<<arr[i][j]<<" ";
//     }cout<<endl;
//   }
//   return 0;
// }
// int main() {
//     int n = 3;
//     int m = 3;
//     int** arr = new int*[n];
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[m];
//     }

//     // Initialize the array with specific values
//     int values[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             arr[i][j] = values[k++];
//         }
//     }

//     // Print the array
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Don't forget to delete the dynamically allocated memory
//     for (int i = 0; i < n; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     return 0;
// }

// int main() {
//     int n = 3; // Number of rows
//     int** arr = new int*[n]; // Create an array of pointers

//     // Create each inner array with different lengths
//     arr[0] = new int[2]; // First row has 2 elements
//     arr[1] = new int[3]; // Second row has 3 elements
//     arr[2] = new int[4]; // Third row has 4 elements

//     // Initialize the jagged array
//     arr[0][0] = 10; arr[0][1] = 20;
//     arr[1][0] = 30; arr[1][1] = 40; arr[1][2] = 50;
//     arr[2][0] = 60; arr[2][1] = 70; arr[2][2] = 80; arr[2][3] = 90;

//     // Print the jagged array
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < (i + 2); j++) { // Note the condition (i + 2)
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Don't forget to delete the dynamically allocated memory
//     for (int i = 0; i < n; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     return 0;
// }
// #define pi 7
// int main(){
//   int sum=pi*pi;
//   cout<<sum<<endl;
// }
// inline int get_sum(int &a , int b = 15){
//   return (a>b)?a:b;
// }
// int main(){
//   int a=1;
//   int ans=get_sum(a);
//   cout<<ans;
// }
//recursion
// 0 1 1 2 3 5 8 13 21
// int fact(int n){
//   if(n==0){
//     return 1;
//   }
//   int small=n*fact(n-1);
//   return small;
// }
// int main(){
//   int n;
//   cin>>n;
//   int ans=fact(n);cout<<ans<<endl;
// }
// int pow(int n){
//   if(n==0){
//     return 1;
//   }
//   int po=2*pow(n-1);
//   return po;
// }
// int main(){
//   int n;cin>>n;
//   cout<<pow(n);
// }
// int print_no(int n){if(n==0){
//   return 0;
// } cout<<n<<endl;
// print_no(n-1);
 
// }
// int main(){
//   print_no(5);
// }
//fibonnaci series

// int fab(int n){
//   int ans=0;
//  if(n==0 ){
//   return 0;
//  }
//  if(n==1){
//   return 1;
//  };
//   ans=fab(n-1)+fab(n-2);
// return ans;

// }
// int fab(int n){

//   for(int i=0;i<n;i++){
//     if(n==0){
//       return 0;
//     }if(n==1){
//       return 1;
//     }
//     else{
//       int ans=fab(n-1)+fab(n-2);
//       return ans;
//     }
//   }
// }
// int main(){
//   int ree=fab(5);
//   cout<<ree;
// }
// int main(){
//   int n=412;
//   string na[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  

// while(n>0){
//     int digit =n%10;
//  cout<<na[digit]<<" ";
//   n=n/10;
// }

// }
// void say_name(int n,string na[]){
//   if(n==0){
//     return;
//   }
//   int digit=n%10;
//   n=n/10;
//   say_name(n,na);
//   cout<<na[digit]<<endl;
//   }
//   int main(){
//     string na[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//   int n=412;
//   say_name(n,na);
//   }
// int sum_of_square(int n){
//   int sum=0;
//   if(n==0){
//   return 0; 
//   }
//   else{
//     sum=n*n+sum_of_square(n-1);
//     return sum;
//   }
// }
// int min_ele(int arr[],int index,int n){
//   int min=arr[0];
//   if(index==n){
//     return min;
//   }
//   // Compare current element with min and return smaller value
//     if (arr[index] < min) {
//         return arr[index];
//     } else {
//         return min;
//     }
// ;
// }
// int min_ele(int arr[], int index, int n) {
//     // Base case: if index equals array length, return max value
//     if (index == n) {
//         return INT_MAX;
//     }

//     int min;

//     // Initialize min with first element if index is 0
//     if (index == 0) {
//         min = arr[index];
//     } else {
//         // Recursive call to find min of previous elements
//         min = min_ele(arr, index - 1, n);
//     }

//     // Compare current element with min and return smaller value
//     if (arr[index] < min) {
//         return arr[index];
//     } else {
//         return min;
//     }
// }
// int min_ele(int arr[], int n) {
//     int min = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int min_ele(int arr[],int index,int n){int min=INT16_MAX;
// if(index==n){
//   return 0;
// }
// if(min>arr[index]){
//   min=arr[index];
//    min_ele(arr,index+1,n);
// }else{
//    min_ele(arr,index+1,n);
// }
// return min;
// }
// int main(){
//   int arr[5]={7,2,3,5,1};
// cout<<min_ele(arr,0, 5);
// return 0;
// }

// int min_ele(int arr[], int index, int n) {
//     static int min = INT_MAX; // Initialize min with max value

//     if (index == n) {
//         return min; // Return min in base case
//     }

//     if (min > arr[index]) {
//         min = arr[index]; // Update min if current element is smaller
//     }

//     return min_ele(arr, index + 1, n); // Recursive call with return statement
// }

// int main() {
//     int arr[5] = {7, 2, 3, 5, 1};
//     std::cout << "Minimum element: " << min_ele(arr, 0, 5);
//     return 0;
// }

// class hero{
// private:
//   int health;
//    public:
//    hero(){
//     cout<<"hi hello"<<endl;
//   }
//   char level;
//   void print(){
//     cout<<level<<endl;
//   }
//   int gethealth(){
//     return health;
//   }
//   char getlevel(){
//     return level;
//   }
//  void sethealth(int h,char name){
//   if(name=='A')
//    health =h;
//   }
//   void setlevel(char ch){
//     level =ch;
//   }
// };
// int main(){
//   hero h1;
//   h1.sethealth(741,'B');
//   h1.level='S';
//   cout<<h1.gethealth()<<endl;
// cout<<h1.getlevel()<<endl;
// hero *h2=new hero;
// h2->sethealth(987,'A');
// cout<<h2->gethealth()<<endl;
// (*h2).setlevel('A');
// cout<<(*h2).getlevel()<<endl;
// }
//reverse words in string 
// string reverse (string s){
//   string temp="";
//   for(int i=0;i<s.length();i++){
//     if(s[i]==" "){
//       int s=i,e=i-1;
//       while(s<=e){
//         temp.push_back(s[e]);
//         s--;
//       }
//       temp.push_back(" ");
//     }
//     temp.push_back(" ");
    
//   }
//   return temp;
// }
// int main(){
//   cout<<reverse("My name is Adhya");
// // }
// std::string reverse(const std::string& s) {
//     std::string temp;
//     int start = 0;

//     for (int i = 0; i <= s.length(); i++) {
//         if (i == s.length() || s[i] == ' ') {
//             int end = i - 1;
//             while (start <= end) {
//                 temp += s[end];
//                 end--;
//             }
//             temp += ' ';
//             start = i + 1;
//         }
//     }

//     // Remove trailing space
//     temp.pop_back();

//     return temp;
// }

// int main() {
//     cout << reverse("My name is Adhya") << endl;
//     return 0;
// }
// class hero{
//   private:
//   int health;
//   public:
//   char level;
//   void print(){
//     cout<<level<<endl;
//   },
//   int gethealth(){
//     return health;
//   },
//   char level(){
//     return level;
//   },
//   int sethealth(int b){
//     health=b;
//   },
//   char level(char a){
//     level=a;
//   }
// };
// int main(){
//   hero ram;
//   ram.sethealth(740);
//  cout<< ram.gethealth()<<endl;
// }
// class Hero {
// private:
//     int health;

// public:
//     char level;

//     void print() {
//         std::cout << level << std::endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     void setHealth(int b) {
//         health = b;
//     }

//     void setLevel(char a) {
//         level = a;
//     }
// };

// int main() {
//     Hero ram;
//     ram.setHealth(740);
//     std::cout << ram.getHealth() << std::endl;
//     return 0;
// }
// class hero{
//   public:
//   int health;
//   char level;
//   int points;
//   hero(){
//     cout<<"const was called"<<endl;
//   }
//   hero(int points){
//     this->points=points;
//     cout<<points<<endl;
//   }
//   void print(){
//     cout<<level<<endl;
//   }
//   int gethealth(){
//     return health;
//   }
//   void sethealth(int health){
//     this->health=health;
//   }
// };

// int main(){
// hero ramesh;
// hero *manoj=new hero;
// ramesh.level='e';
// ramesh.print();
// manoj->health=744;
// cout<<manoj->gethealth()<<endl;
// manoj->sethealth(852);
// cout<<manoj->gethealth()<<endl;
// hero *eric=new hero();
// hero ken(741258);

// }

// Node* insert_at_tail(int arr[]){
//   Node* tail=NULL;Node*head=NULL;
//  int n=5;
//   for(int i=0;i<n;i++){
//   if(tail==NULL){
//     Node* temp=new Node(arr[i]);tail=head=temp;
//   }else{
//     tail->next=new Node(arr[i]);
//     tail=tail->next;
//   }

//   }
//   reverse(head);
//   // Node* temp=head;
//   // while(temp!=NULL){
//   //   cout<<temp->data<<endl;
//   //   temp=temp->next;
//   // }

// };
// Node* reverse_ll(Node* head){
//   if(head==NULL||head->next==NULL){
//  return head;
//   }
//   Node* prev=NULL;
//   Node* curr=head;
//   Node* forward= NULL;
//   while(curr!=NULL){
//     forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=forward;
//   }
//   cout<< prev;
// }

// void insert_at_head(int arr[]){
//   Node* tail=NULL;Node*head=NULL;
//  int n=5;
//   for(int i=0;i<n;i++){
//   if(head==NULL){
//     Node* temp=new Node(arr[i]);tail=head=temp;
//   }else{
//    Node* temp=new Node(arr[i]);
//     temp->next=head;
//     head=temp;
//   }

//   }
//   Node* temp=head;
//   while(temp!=NULL){
//     cout<<temp->data<<endl;
//     temp=temp->next;
//   }

// }
// int main(){
//   int arr[5]={1,2,3,4,5};
  
//  // insert_at_tail(arr);
//    insert_at_head(arr);
// }





// void insert_at_head(int arr[], int n) {
//     Node* head = NULL;

//     for (int i = n - 1; i >= 0; i--) {
//         Node* newNode = new Node(arr[i]);
//         newNode->next = head;
//         head = newNode;
//     }

//     Node* temp = head;
//     while (temp != NULL) {
//         std::cout << temp->data << std::endl;
//         temp = temp->next;
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     insert_at_head(arr, 5);
//     return 0;
// }


// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;    
//     Node(int value) : data(value), next(NULL),prec(NULL) {}
// };

// Node* insert_at_tail(int arr[], int n) {
//     Node* tail = NULL;
//     Node* head = NULL;

//     for (int i = 0; i < n; i++) {
//         if (tail == NULL) {
//             Node* temp = new Node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// }

// Node* reverse_ll(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;

//     while (curr != NULL) {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev; // Return reversed head
// }
// Node* reverse_2(Node* &head){
//   if(head==NULL||head->next==NULL){
//  return head;
//   }
//   Node* smhead=reverse_2(head->next);
//   head->next->next=head;
//   head->next=NULL;
//   return smhead;
// }
// void print_list(Node* head) {
//     while (head != NULL) {
//         std::cout << head->data << std::endl;
//         head = head->next;
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     Node* head = insert_at_tail(arr, 5);
//     // head = reverse_ll(head);
//         head = reverse_2(head);
//     print_list(head);
//     return 0;

// }
// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;    
//     Node(int value) : data(value), next(NULL),prec(NULL) {}
// };
//     void append(int arr[]) {
//         Node* newNode = new Node(value);
//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }


// void reverse( Node* &head) {
//         Node* current = head;
//         Node* prevNode = NULL;

//         while (current != NULL) {
//             Node* nextNode = current->next;
//             current->next = prevNode;
//            // current->prev = nextNode;
//             prevNode = current;
//             current = nextNode;
//         }

//         Node* temp = head;
//         head = tail;
//         tail = temp;
//     }

//     void printForward(Node* & head) {
//         Node* current = head;
//         while (current != NULL) {
//             std::cout << current->data << " ";
//             current = current->next;
//         }
//         std::cout << std::endl;
//     }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//      Node* head = insert_at_tail(arr, 5);
//      head =reverse(head);
//      printForward(head);
// }
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) : data(value), next(NULL) {}
//     ~Node(){
//       int value=this->date;
//       if(this->next!=NULL){
//         delete next;
//         this->next=NULL;
//       }
//     }
// };
// void print_list(Node* head) {
//     while (head != NULL) {
//         std::cout << head->data << std::endl;
//         head = head->next;
//     }
// };
//  Node* insert_at_tail(int arr[], int n) {
//     Node* tail = NULL;
//     Node* head = NULL;

//     for (int i = 0; i < n; i++) {
//         if (tail == NULL) {
//             Node* temp = new Node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// };
// void delete_node(Node* head,int pos){
//   Node *temp=head;
// if(pos==1){
//   temp->next=NULL;
//   head=head->next;
//   delete temp;
// }
// Node *curr=head;
// Node *prev=NULL;
// int cnt=1;
// while(cnt<pos){
//  prev=curr;
//  curr=curr->next;
//  cnt++;
// }
// prev->next=curr->next;
// curr->next=NULL;
// delete curr;

// }
// int main(){
//   int arr[5]={1,2,3,4,5};
//   Node* head=insert_at_tail(arr,5);
// delete_node(head,1);
// }
// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int value) : data(value), next(NULL) {}
//     ~Node() {
//         if (this->next != NULL) {
//             delete this->next;
//             this->next = NULL;
//         }
//     }
// };
// void print_list(Node* head) {
//     while (head != NULL) {
//         std::cout << head->data << std::endl;
//         head = head->next;
//     }
// }

// Node* insert_at_tail(int arr[], int n) {
//     Node* tail = NULL;
//     Node* head = NULL;
//     for (int i = 0; i < n; i++) {
//         if (tail == NULL) {
//             Node* temp = new Node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// }
// Node* delete_node(Node* head, int pos) {
//     if (head == NULL) return NULL;
//     if (pos < 1) return head;

//     if (pos == 1) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node* curr = head;
//     Node* prev = NULL;
//     int cnt = 1;
//     while (cnt < pos && curr != NULL) {
//         prev = curr;
//         curr = curr->next;
//         cnt++;
//     }

//     prev->next = curr->next;
//     delete curr;
//     return head;
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     Node* head = insert_at_tail(arr, 5);
//     head = delete_node(head, 1);
//     print_list(head);
//     return 0;
// }

// int main(){
// stack<int>s;
// s.push(22);
// s.push(33);
// s.push(44);
// s.push(55);
// s.push(69);
// s.pop();
// cout<<s.top()<<endl;
// while(s.top()!=0){
//   cout<<s.top()<<endl;
//   s.pop();
// }
// }
// class stackm{
//   public:
//   int *arr;
//   int top;
//   int size;
//   stackm(int size){
//     this->size=size;
//     arr=new int(size);
//     top=-1;
//   }
//   void push(int e){
//     if(size-top>1){
//       top++;
//       arr[top]=e;
//     }
//   }
//   void pop(){
//    if(top>=0){
//      top--;
//    }
//   }
//   int peek(){
//     if(top>=0){
//       return arr[top];
//     }else{
//       return -1;
//     }
//   }
//   bool isEmpty(){
//     if(top==-1){
//       return true;
//     }else{
//       return false;
//     }
//   }
// };
// int main(){
//   stackm st(5);
//   st.push(11);
//   st.push(22);
//    st.push(33);
//       st.push(44);   st.push(55);
//       cout<<st.peek()<<endl;
//       st.pop();
//       cout<<st.peek()<<endl;
//       if(st.isEmpty()){
//         cout<<"stack is empty"<<endl;
//       }else{
//                 cout<<"stack is not empty"<<endl;

//       }
// }
// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int value) : data(value), next(NULL) {}
//     ~Node() {
//         if (this->next != NULL) {
//             delete this->next;
//             this->next = NULL;
//         }
//     }
// };
//  Node* insert_at_tail(int arr[], int n) {
//     Node* tail = NULL;
//     Node* head = NULL;

//     for (int i = 0; i < n; i++) {
//         if (tail == NULL) {
//             Node* temp = new Node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// };
// Node * kreverse(Node *head,int k){
//   if(head==NULL){
//     return NULL;
//   }
//   int cnt=0;
//   Node *forward=NULL;
//   Node *prev=NULL;
//   Node *curr=head;
//   while(curr!=NULL &&cnt<k){
//     forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=curr->next;cnt++;
//   }
//   while(forward!=NULL){
//     head->next=kreverse(forward,k);
//   }
//   return prev;
// }
//  void print_list(Node* head) {
//     while (head != NULL) {
//         std::cout << head->data << std::endl;
//         head = head->next;
//     }
// };
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     Node* head = insert_at_tail(arr, 5);
//     head = kreverse(head, 2);
//     print_list(head);
//     return 0;
// }
// int main(){
//   int arr[5]={2,1,4,3,0};
//   vector<int >ans(5);
//   for(int i=0;i<5;i++){
//     for(int j=i+1;j<5;j++){
//       if(arr[i]>arr[j]){
//         ans[i]=arr[j];
//         break;
//       }else{
//         ans[i]=-1;
//       }
//     }
//   }
//   for(int i:ans){
//     cout<<i;
//   }
// }

// int main() {
//     int arr[5] = {2, 1, 4, 3, 0};
//     std::vector<int> ans(5);

//     for (int i = 0; i < 5; i++) {
//         bool found = false;
//         for (int j = i + 1; j < 5; j++) {
//             if (arr[i] > arr[j]) {
//                 ans[i] = arr[j];
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             ans[i] = -1;
//         }
//     }

//     for (int val : ans) {
//         std::cout << val << " ";
//     }

//     return 0;
// }
// int main(){
//   int arr[5]={2,5,4,3,1};
//  // Create a stack and a vector to store results
//     std::stack<int> st;
//     std::vector<int> ans(5);

//     // Initialize stack with -1 (sentinel value)
//     st.push(-1);

//     // Iterate through the array in reverse order
//     for (int i = 5 - 1; i >= 0; i--) {
//         int curr = arr[i];

//         // Pop elements from stack until smaller element found
//         while (st.top() >= arr[i]) {
//             st.pop();
//         }

//         // Store next smaller element in ans
//         ans[i] = st.top();

//         // Push current element onto stack
//         st.push(curr);
//     }

//     // Print results
//     for (int val : ans) {
//         std::cout << val << " ";
//     }

//     return 0;

// }
// int main() {
    // int arr[5] = {1, 5, 2, 3, 1};
    //  int arr[5] = {9, 5, 2, 7, 3};
// int arr[5]={9,8,1,2,10};
// int arr[5]={1,2,5,7,3};
//     std::vector<int> ans(5);
//     std::stack<int> st;
//     st.push(-1);

//     for (int i = 5 - 1; i >= 0; i--) {
//           int minElem = *std::min_element(arr+i , arr + 5);
//       int curr=arr[i];
//         while (st.top() >=arr[i]) {
//             st.pop();
//         }
//         ans[i] = (st.top() >= minElem) ? minElem : st.top();
//         st.push(curr);
//     }

//     for (int val : ans) {
//         std::cout << val << " ";
//     }

//     return 0;
// }
// 
// int main() {
//     int arr[5] = {9, 5, 2, 7, 3};
//     std::vector<int> ans(5);
//     std::stack<int> st;
//     st.push(-1); // Sentinel value

//     for (int i = 5 - 1; i >= 0; i--) {
//         int curr = arr[i];
//         while (st.top() >= arr[i] && st.top() != -1) {
//             st.pop();
//         }
//         ans[i] = (st.top() == -1) ? -1 : st.top();
//         st.push(curr);
//     }

//     for (int val : ans) {
//         std::cout << val << " ";
//     }

//     return 0;
// }

// int main(){
//   int num1[3]={4,1,2};
//   int num2[4]={1,3,4,2};
 
//  std::stack<int> st;
//     std::vector<int> ans(4);

//     // Initialize stack with -1 (sentinel value)
//     st.push(-1);

//     // Iterate through the array in reverse order
//     for (int i = 4 - 1; i >= 0; i--) {
//         int curr = num2[i];

//         // Pop elements from stack until smaller element found
//         while (st.top() >= num2[i]) {
//             st.pop();
//         }

//         // Store next smaller element in ans
//         ans[i] = st.top();

//         // Push current element onto stack
//         st.push(curr);
//     }

// for(int i=0;i<3;i++){
//   for(int j=0;j<4;j++){
//     if(num1[i]==num2[j]){
//       num1[i]=ans[j];
//     }
//   }
// }
// for(int i=0;i<3;i++){
//   cout<<num1[i]<<" ";
// }
// }
// int main() {
//     int num1[3] = {4, 1, 2};
//     int num2[4] = {1, 3, 4, 2};
//     std::stack<int> st;
//     std::vector<int> ans(4);

//     // Initialize stack with -1 (sentinel value)
//     st.push(-1);

//     // Iterate through num2 array in reverse order
//     for (int i = 4 - 1; i >= 0; i--) {
//         int curr = num2[i];  // Fix: Use num2 instead of arr

//         // Pop elements from stack until smaller element found
//         while (st.top() <= curr) {
//             st.pop();
//         }

//         // Store next smaller element in ans
//         ans[i] = st.top();

//         // Push current element onto stack
//         st.push(curr);
//     }

//     // Replace elements in num1 with next smaller elements from num2
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             if (num1[i] == num2[j]) {
//                 num1[i] = ans[j];
//             }
//         }
//     }

//     // Print modified num1 array
//     for (int i = 0; i < 3; i++) {
//         std::cout << num1[i] << " ";
//     }

//     return 0;
// }


// int largestRectangularArea(int* heights, int n) {
//     int maxArea = 0;

//     for (int i = 0; i < n; i++) {
//         int minHeight = heights[i];

//         for (int j = i; j < n; j++) {
//             minHeight = std::min(minHeight, heights[j]);
//             int width = j - i + 1;
//             int area = minHeight * width;
//             maxArea = std::max(maxArea, area);
//         }
//     }

//     return maxArea;
// }



// int main(){
//   int heights[5]={9,8,9,7,2};
//  cout<< largestRectangularArea(heights, 5);
//   return 0;
// }
// class  queue{
//   int *arr;
//   int size;
//   int qfront;
//   int rear;
//   public:
//   queue(int n){
//     arr=new int[n];
//     qfront=-1;rear=-1;
//     size=n;
//   }
//   bool IsEmpty(){
//     if(qfront==-1){
//       return true;
//     }else{
//       return false;
//     }
//   }
//   void push(int x){
//     //q is empty
//     if(IsEmpty()){
//       qfront=rear=0;
//       arr[0]=x;
//     }
//     //
//     else if(rear==size-1){
//       cout<<"queue overflow";
//     }
//     else{
//       rear++;
//       arr[rear]=x;
//     }
//   }
//   void pop(){
//     if(IsEmpty()){
//       cout<<"stack underflow";
//     }
//     else if(qfront==rear){
//       qfront=rear=-1;
//     }
//     else{
//       qfront++;
//     }
//   }
//   void front(){
//     if(IsEmpty()){
//       cout<<"queue is empty";
//     }
//     else {
//       cout<<arr[qfront]<<endl;
//     }
//   }
// };
// int main(){
//   queue q(5);
//   q.push(1);
//   q.front();
//   q.push(3);
//   q.front();
//   q.push(5);
//   q.front();
//   q.push(7);
//   q.front();
//   q.push(9);
//   q.front();
//   q.pop();
//   q.front();
//    q.pop();
//   q.front();
//    q.pop();
//   q.front();
//    q.pop();
//   q.front();
//    q.pop();
//   q.front();
// }
// int main(){
//   // int arr[5]={17,2,9,11,10};
//   // int arr[5]={11,45,8,0,78};
//   // int arr[5]={4,11,98,178,13};
// int arr[5]={89,7,14,25,11};
//    vector<int>ans(5,-1);
//         for (int i = 0; i < 5; i++) {
//             for (int j = i+1; j < (2 * 5)+i; j++) {
//                 int index = j % 5;
//               //  if (index == i) continue;
//                 if (arr[i]<arr[index]) {
//                     ans[i] = arr[index];
//                     break;
//                 }
//             }
//         }
// for(int val:ans){
//   cout<<val<<"  ";
// }
// }
// int main(){
//   int arr[5]={89,7,14,25,11};
//   int n=5;
//   vector<int>ans(n,-1);
//   stack<int>s;
//   for(int i=2*n-1;i>=0;i--){
//     int index=i%n;
//       int curr=arr[index];
//     while(s.top()<arr[index]){
//       s.pop();
//     }
//     ans[index]=s.top();
//     s.push(curr);
//   }
//   for(int val:ans){
//   cout<<val<<"  ";
// }
// }
// int main() {
//     int arr[5] = {89, 7, 14, 25, 11};
//     int n = 5;
//     vector<int> ans(n, -1);
//     stack<int> s;

//     for (int i = 2 * n - 1; i >= 0; i--) {
//         int index = i % n;
//         int curr = arr[index];

//         // Ensure the stack is not empty before accessing its top
//         while (!s.empty() && s.top() <= curr) {
//             s.pop();
//         }

//         // If stack is not empty, the next greater element is the top of the stack
//         if (!s.empty()) {
//             ans[index] = s.top();
//         }

//         // Push the current element onto the stack
//         s.push(curr);
//     }

//     // Output the results
//     for (int val : ans) {
//         cout << val << "  ";
//     }

//     return 0;
// }
// int main(){
//   int arr[7]={100,80,55,70,50,75,85};
//   int n=7;
//   vector<int>ans(n,1);
//   for(int i=n-1;i>=0;i--){  int count=1;
//     for(int j=i-1;j>=0;j--){  
//       if(arr[i]>arr[j]){
//         count++;
//       }else{
//         break;
//       }
//       ans[i]=count;
//     }
//   }
//    for (int val : ans) {
//         cout << val << "  ";
//      }
// }
// int main(){
//   string str="adhya";
//   stack<char>s;
//   for(int i=0;i<5;i++){
//     s.push(str[i]);
//   }
//   string ans=" ";
//   while(!s.empty()){
//     ans.push_back(s.top());
//     s.pop();
//   }
//   cout<<ans<<endl;
//   return 0;
// }
// int get_size(stack<int>s){
//   int size=0;
//   while(!s.empty()){
//     s.pop();
//     size++;
//   }
//   return size;
// }
// stack delete_middle(stack<int>s,int size,int count){
//   if(count==size/2){
//     s.pop();
//   }
//   int num=s.top();
//   s.pop();
//   delete_middle(s,size, count+1);
//   s.push(num);
//   return s;
// }
// int main(){
//   int count=0;
//   stack<int>s;
//   s.push(4);
//     s.push(2);
//       s.push(9);
//         s.push(5);
//           s.push(3);
//           int size=get_size(s);
//           cout<<delete_middle(s,size,count)<<endl;
//           return 0;
// }
// #include <iostream>
// #include <stack>
// using namespace std;

// // Function to get the size of the stack
// int get_size(stack<int> s) {
//     int size = 0;
//     while (!s.empty()) {
//         s.pop();
//         size++;
//     }
//     return size;
// }

// // Recursive function to delete the middle element
// void delete_middle(stack<int>& s, int size, int count) {
//     // Base case: If we've reached the middle
//     if (count == size / 2) {
//         s.pop();
//         return; // Return from the function after popping
//     }
    
//     // Store the top element
//     int num = s.top();
//     s.pop();
    
//     // Recursive call
//     delete_middle(s, size, count + 1);
    
//     // Push the stored element back onto the stack
//     s.push(num);
// }

// int main() {
//     int count = 0;
//     stack<int> s;
//     s.push(4);
//     s.push(2);
//     s.push(9);
//     s.push(5);
//     s.push(3);
    
//     // Get the size of the stack
//     int size = get_size(s);
    
//     // Call the function to delete the middle element
//     delete_middle(s, size, count);
    
//     // Print the modified stack
//     cout << "Modified stack: ";
//     stack<int> temp;
//     while (!s.empty()) {
//         temp.push(s.top());
//         s.pop();
//     }
//     while (!temp.empty()) {
//         cout << temp.top() << " ";
//         s.push(temp.top()); // Push back to original stack if needed
//         temp.pop();
//     }
//     cout << endl;

//     return 0;
// }
//reverse a doubly linked list
// class node{
//     public:
//     node * head;
//     node *tail;
//     node(int x){
//         node->data=x;
//         node->next=NULL;
//         node->prev=NULL;
//     }
// ~node(){
//    int value= this->data;
//     if(next!=nullptr){

//         delete next;
//         next =nullptr;
//     }
//     cout<<value;
// }
// }
// node * reverse_doubly(node *head){
//     if(head==NULL ||head->next== NULL){
//         return head;
//     }
//     node * back=NULL;
//     node * forward=NULL;
//     node* curr=head;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->prev=forward->next;
//         curr->next=back;
//         back=curr;
//         curr=forward;
//     }
//     return back;
// }
// node* insert_at_tail(node*head,int arr[],int n){
//  node *temp = new node(arr[i]);
//         if (head == nullptr) {
//             head = temp;
//         } else {
//             node *tail = head;
//             while (tail->next != nullptr) {
//                 tail = tail->next;
//             }
//             tail->next = temp;
//             temp->prev = tail;
//         }
    
//     return head;
// }
// int main(){
//     int arr[5]={1,3,5,7,9};
//     node*head=nullptr;
//    node* ad= insert_at_tail(head,arr,5);
//     node *reverse=reverse_doubly(ad);
//     print_doubly(reverse);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int x) {
//         data = x;
//         next = nullptr;
//         prev = nullptr;
//     }

//     ~node() {
//         int value = this->data;
//         if (next != nullptr) {
//             delete next;
//             next = nullptr;
//         }
//         cout << "Deleting node with value: " << value << endl;
//     }
// };

// Function to reverse a doubly linked list
// node* reverse_doubly(node *head) {
//     if (head == nullptr || head->next == nullptr) {
//         return head;
//     }

//     node *curr = head;
//     node *temp = nullptr;
    
//     // Traverse the list and swap next and prev pointers for each node
//     while (curr != nullptr) {
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;
//         curr = curr->prev;
//     }

//     // After loop, temp will be at the original tail node
//     if (temp != nullptr) {
//         head = temp->prev;
//     }
    
//     return head;
// }
// node* reverse_doubly(node *head) {
//     node *curr = head;
//     node *back = nullptr;
//     node *forward = nullptr;
    
//     while (curr != nullptr) {
//         // Save the next node
//         forward = curr->next;

//         // Reverse the next and prev pointers
//         curr->next = back;
//         curr->prev = forward;

//         // Move back and curr one step forward
//         back = curr;
//         curr = forward;
//     }

//     // New head of the reversed list
//     return back;
// }

// // Function to insert elements at the tail of a doubly linked list
// node* insert_at_tail(node *head, int arr[], int n) {
//    node *tail=nullptr;
//     for (int i = 0; i < n; i++) {
//         node *temp = new node(arr[i]);
//         if (head == nullptr) {
//             head = temp;
//             tail=temp;
//         } else {
//             // node *tail = head;
//             // while (tail->next != nullptr) {
//             //     tail = tail->next;
//             // }
//             tail->next = temp;
//             temp->prev = tail;
//             tail=temp;
//         }
//     }
//     return head;
// }

// // Helper function to print a doubly linked list
// void print_doubly(node *head) {
//     node *temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int arr[5] = {1, 3, 5, 7, 9};
//     node *head = nullptr;

//     // Insert elements in the doubly linked list
//     head = insert_at_tail(head, arr, 5);

//     cout << "Original List: ";
//     print_doubly(head);

//     // Reverse the doubly linked list
//     node *reversedHead = reverse_doubly(head);

//     cout << "Reversed List: ";
//     print_doubly(reversedHead);

//     // Free memory by calling the destructor recursively
//     delete reversedHead;

//     return 0;
// }
//rotate _list
// class node{
//     public:
//     node * head;
//     node *tail;
//     int data;
//     node* next;
//     node(int x){
//         this->data=x;
//         this->next=NULL;
//     }
// ~node(){
//    int value= this->data;
//     if(next!=nullptr){

//         delete next;
//         next =nullptr;
//     }
//     cout<<value;
// }
// }
// void print_list(node *head) {
//     node *temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
//  node* insert_at_tail(node* head,int arr[], int n) {
//     node* tail = NULL;
//      head = NULL;

//     for (int i = 0; i < n; i++) {
//         if (tail == NULL) {
//             node* temp = new node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// };
// node *rotate_head(node *head,int k,int len){
// int n=k%len;
// if(n==0||head==nullptr){
//     return head;
// }
// node *temp=head;
// node *prev=nullptr;
// node *tail=nullptr;
// int count=0;
// while(temp!=nullptr){
//     prev=tail;
//     tail=temp;
//     temp=temp->next;
// }
// temp=head;
// while(count<n){
//     tail->next=temp;
//     prev->next=nullptr;
//     head=tail;
//     tail=prev;
//     rotate_list(head,2,5);
//     count++;
// }
// return head;
// }
// int main() {
//     int arr[5] = {1, 3, 5, 7, 9};
//      node *head = nullptr;

// // Insert elements in the doubly linked list
//     head = insert_at_tail(head, arr, 5);
//     //rotate list
// node *rohead =rotate_list(head,2 , 5);
// cout<<"rotate_list"<<endl;
// print_list(rohead);
// }
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
    
//     node(int x) : data(x), next(nullptr) {}
    
//     ~node() {
//         if (next != nullptr) {
//             delete next;
//             next = nullptr;
//         }
//         cout << "Deleting node with value: " << data << endl;
//     }
// };

// // Function to print the linked list
// void print_list(node* head) {
//     node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Function to insert elements at the tail of the linked list
// node* insert_at_tail(node* head, int arr[], int n) {
//     node* tail = nullptr;
//     head = nullptr;

//     for (int i = 0; i < n; i++) {
//         if (tail == nullptr) {
//             node* temp = new node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// }

// // Function to rotate the list to the left by k positions
// node* rotate_head(node* head, int k, int len) {
//     if (k == 0 || head == nullptr || len == 0) {
//         return head;
//     }

//     int n = k % len;
//     if (n == 0) return head;

//     node* tail = head;
//     for (int i = 1; i < len; i++) {
//         tail= tail->next;
//     }

   
//    int count=0;
//    node *prev=nullptr;
//    node *curr=head;
//    while(count<len-n){
//     prev=curr;
//     curr=curr->next;
//     count++;
//     }
//    node *temp=curr;
//    while(temp!=nullptr){
//     temp=temp->next;
//    }
//    temp->next=head;
//    prev->next=nullptr;
//    head=curr;
//    return head;
// }

// int main() {
//     int arr[5] = {1, 3, 5, 7, 9};
//     node* head = nullptr;

//     // Insert elements in the linked list
//     head = insert_at_tail(head, arr, 5);

//     // Rotate the list to the left by 2 positions
//     node* rohead = rotate_head(head, 2, 5);

//     cout << "Rotated List:" << endl;
//     print_list(rohead);

//     // Clean up memory
//     // delete rohead;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
    
//     node(int x) : data(x), next(nullptr) {}
    
//     ~node() {
//         if (next != nullptr) {
//             delete next;
//             next = nullptr;
//         }
//         cout << "Deleting node with value: " << data << endl;
//     }
// };

// // Function to print the linked list
// void print_list(node* head) {
//     node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Function to insert elements at the tail of the linked list
// node* insert_at_tail(node* head, int arr[], int n) {
//     node* tail = nullptr;
//     head = nullptr;

//     for (int i = 0; i < n; i++) {
//         if (tail == nullptr) {
//             node* temp = new node(arr[i]);
//             tail = head = temp;
//         } else {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     return head;
// }

// // Function to rotate the list to the left by k positions
// node* rotate_head(node* head, int k, int len) {
//     if (k == 0 || head == nullptr || len == 0) {
//         return head;
//     }

//     // Calculate the effective rotations needed
//     int n = k % len;
//     if (n == 0) return head;

//     // Traverse to the (len-n)-th node to find the new head and tail
//     node* prev = nullptr;
//     node* curr = head;
//     for (int i = 0; i < len - n; i++) {
//         prev = curr;
//         curr = curr->next;
//     }

//     // Connect the end of the original list to the original head
//     node* tail = curr;
//     while (tail->next != nullptr) {
//         tail = tail->next;
//     }
//     tail->next = head;

//     // Set the new head and cut the connection from the previous node
//     head = curr;
//     prev->next = nullptr;

//     return head;
// }

// int main() {
//     int arr[5] = {1, 3, 5, 7, 9};
//     node* head = nullptr;

//     // Insert elements in the linked list
//     head = insert_at_tail(head, arr, 5);

//     // Rotate the list to the left by 2 positions
//     node* rohead = rotate_head(head, 2, 5);

//     cout << "Rotated List:" << endl;
//     print_list(rohead);

//     // Clean up memory
//     delete rohead;

//     return 0;
// }
//map
// int main(){
//   map<string,int>m;
//   m["one"]=1;
//   m["two"]=2;
//   m["three"]=3;
//   auto it=m.begin();
//   while(it!=m.end()){
//     cout<<"key::  "<<it->first<<"  value  "<<it->second<<endl;
//     ++it;
//   }
//   return 0 ;
  
// }
// int main(){
//   map<int,int>m;
//   m.insert(pair<int,int>(1,10));
//   m.insert(pair<int,int>(2,20));
//   m.insert(pair<int,int>(3,30));
//   m.insert(pair<int,int>(4,40));
//   m.insert(pair<int,int>(5,50));
//   m[6]=60;
//   // auto it=m.begin();
//   // while(it!=m.end()){
//   //   cout<<"key::  "<<it->first<<"  value  "<<it->second<<endl;
//   //   it++;
//   // }
//   // return 0 ;
//   map<int,int>m2(m.begin(),m.end());
// // auto  it=m2.begin();
// // while(it!=m2.end()){
// //   cout<<"key::  "<<it->first<<"  value  "<<it->second<<endl;
// //   it++;
// // }
// m2.erase(m2.begin(),m2.find(3));
// auto  it=m2.begin();
// while(it!=m2.end()){
//   cout<<"key::  "<<it->first<<"  value  "<<it->second<<endl;
//   it++;
// }
// int num=m2.erase(4);
// cout<<num<<"  ";
// cout<<m2.lower_bound(5)->first<<endl;
// cout<<m2.lower_bound(5)->second<<endl;
// cout<<m2.find(5)->first<<endl;
// if(m2.count(5)>0){
//   cout<<"key is present in map";
// }else{
//   cout<<"key is not present in map";
// }
// return 0;
// }
//detect and remove the loop
// int main(){
//   Node* head=nullptr;
//   Node* tail=nullptr;
//   insert_at_tail(tail,1);
//   insert_at_tail(tail,3);
//   insert_at_tail(tail,5);
//   insert_at_tail(tail,7);
//   insert_at_tail(tail,9);
//   tail->next=head->next->next;
//   Node* head=insert_at_tail(tail);
//   print_ll(head);
// }
// class Node {
// public:
//     int data;
//     Node* next;
    
//     Node(int val) : data(val), next(nullptr) {}
// };

// // Insert at tail function
// Node* insert_at_tail(Node*& head, Node*& tail, int val) {
//     Node* newNode = new Node(val);
//     if (!head) {   // If list is empty
//         head = newNode;
//         tail = newNode;
//     } else {
//         tail->next = newNode;
//         tail = newNode;
//     }
//     return head;
// }

// // Print linked list function
// void print_ll(Node* head) {
//     Node* temp = head;
//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int detect_the_loop(Node* head){
//   map<Node*,bool>visited;
//   Node* temp=head;
//   while(temp!=nullptr){
//   if(visited[temp]==true){
//     cout<<temp->data;
//     return true;
//   }
//   visited[temp]=true;
//   temp=temp->next;
//   }
//   return NULL;
// }
// Node* flyod_detect_loop(Node* head){
//   Node* slow = head;
//   Node* fast = head;
//   while(slow && fast && fast->next){
//     slow = slow->next;
//     fast = fast->next->next;
//     if(slow == fast){
//       //cout<< slow->data;
//       return slow;
//       }
//       }
//      return nullptr; 
// }
// Node* get_starting_loop(Node* head){
//   Node* slow = head;
//   Node* instersection = flyod_detect_loop(head);
//   if(instersection==nullptr){
//     return 0;
//   }
// while(slow!=instersection){
//   slow = slow->next;
//   instersection = instersection->next;
// if(slow==instersection){
//   return slow;
// }
// }
// return 0;

// }
// Node* remove_the_loop(Node*  head){
//   Node* starting_node=get_starting_loop(head);
//   if(starting_node==nullptr){
//     return nullptr;
//     }
//     Node* temp=starting_node;
//     while(temp->next!=starting_node){
//       temp=temp->next;
//     }
//     temp->next=nullptr;
//     return head;
// }

//remove dulpicate
// Node* UniqueSortedList(Node* head){
//   Node* curr=head;
//   while(curr->next!=nullptr){
//     if(curr->data==curr->next->data){
//       Node* next_next=curr->next->next;
//       Node* d_node=curr->next;
//       delete (d_node);
//       curr->next=next_next;
//     }else{
//       curr=curr->next;
//     }
//   }
//   return head;
// }
// Node* sort_linkedList(Node* head){
//   Node* temp = head;
//   if(head==nullptr){return nullptr;}
//   vector<int>v;
//  while(temp!=nullptr){
//   v.push_back(temp->data);
//   temp=temp->next;
//  }
//  sort(v.begin(),v.end());
//  temp=head;
//  for(int i:v){
//   temp->data=i;
//   temp=temp->next;
//   i++;
//  }
// return head;
// }
// Node* unsorted_linkedList(Node* head){
//   Node* curr=head;
//   while(curr!=nullptr){
//     Node* temp=curr;
//     while(temp!=nullptr){
//       if(temp->next->data==curr->data){
//         Node* ll=temp->next;
//         temp->next=temp->next->next;
//         delete ll;
//       }
//       else{
//         temp=temp->next;
//       }
//     }
//    curr=curr->next;
//   }
//   return head;
// }

    // Node* removeDuplicates(Node* head) {
    //     Node* curr = head;

    //     while (curr) {
    //         Node* runner = curr;
    //         // Check all subsequent nodes for duplicates
    //         while (runner->next) {
    //             if (runner->next->data == curr->data) {
    //                 // Duplicate found; remove it
    //                 Node* temp = runner->next;
    //                 runner->next = runner->next->next;
    //                 delete temp;
    //             } else {
    //                 runner = runner->next;
    //             }
    //         }
    //         curr = curr->next;
    //     }
    //     return head;
    // }
//map function
// Node* rd(Node* head){
//   map<int,bool>seen;
//   Node* temp=head;
//   while(temp!=nullptr){
//     if(seen[temp->data]==true){
//       Node* dd=temp->next;
//       temp->next=temp->next->next;
//       delete dd;
//     }else{
//       seen[temp->data]=true;
//       temp=temp->next;
//     }
//   }
//   return head;
// }
// Node* rd(Node* head) {
//     if (!head) return nullptr;  // Return if the list is empty

//     std::map<int, bool> seen;  // To track unique data values
//     Node* curr = head;  // Pointer to traverse the list

//     // Mark the first node as seen
//     seen[curr->data] = true;

//     while (curr->next != nullptr) {
//         if (seen[curr->next->data]) {
//             // Duplicate found; remove it
//             Node* duplicate = curr->next;
//             curr->next = curr->next->next;  // Skip the duplicate
//             delete duplicate;  // Delete the duplicate node
//         } else {
//             // No duplicate; mark the data as seen and move forward
//             seen[curr->next->data] = true;
//             curr = curr->next;  // Move to the next node
//         }
//     }
//     return head;  // Return the modified list
// }
// int main() {
//     Node* head = nullptr;
//     Node* tail = nullptr;
    
//     insert_at_tail(head, tail, 4);
//     insert_at_tail(head, tail, 2);
//     insert_at_tail(head, tail, 2);
//     insert_at_tail(head, tail, 5);
//     insert_at_tail(head, tail, 4);
//     insert_at_tail(head, tail, 2);
//     insert_at_tail(head, tail, 2);
// // tail->next=head->next->next;
// // Printing the linked list

// //print the starting node of the loop
// //get_starting_loop(head); 
// //  Node* dd=remove_the_loop(head);
// //   print_ll(dd);
// // print_ll(head);
// // //remove duplicate
// // UniqueSortedList(head);
// // print_ll(head);
// //     return 0;
// // sort_linkedList(head);
// // UniqueSortedList(head);
// rd(head);
// print_ll(head);
// }
//some queuse question
// void display(queue<int>q){
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={2,3,1,5,6,7,8};
//     int k=3;
//     int n=7;
//     queue<int>q;
//     for(int i=0;i<k-1;i++){
//         q.push(arr[i]);
//     }
//     for(int i=k-1;i<n;i++){
//         q.push(arr[i]);
//         display(q);
//          q.pop();
//     }


// }
//first negative in the integer
// void first_negative(queue<int>q){
//     while(!q.empty()){
//         if(q.front()<0){
//         cout<<q.front();
//         }else{
//           q.pop();
//         }
//          }
    
// }
// int main(){
//     int arr[]={2,-3,-4,-2,7,8,9,-10};
//     int k=3;
//     int n=8;
//     queue<int>q;
//     for(int i=0;i<k-1;i++){
//      q.push(arr[i]);
//     }
//     for(int i=k-1;i<n;i++){
//         q.push(arr[i]);
//         first_negative(q);
//         q.pop();
//     }
// }
// int main(){
//   int arr[5]={-8,2,3,-6,10};
//   int k=2;
//   int n=5;
//   vector<int>ans;
// for(int i=0;i<=n-k;i++){
//   int nini=INT_MAX;
//   while(k){
//     nini=min(arr[j],nini);
//   }
//   ans.push(nini);
// }
// auto(i:ans){
//   cout<<i<<endl;
// }
// }
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     int arr[5] = {-8, 2, 3, -6, 10};
//     int k = 2;
//     int n = 5;
//     vector<int> ans;
    
//     // Iterate through the array to get the minimum in each sliding window of size k
//     for (int i = 0; i <= n - k; i++) {
//         int nini = INT_MAX;
//         // Get the minimum value in the window of size k
//         for (int j = i; j < i + k; j++) {
//             nini = min(arr[j], nini);
//         }
//         if(nini<0){
//         ans.push_back(nini); 
//         }else{
//           ans.push_back(0);
//           // Push the minimum value in the window
//     }
//     }
//     // Print the results
//     for (auto i : ans) {
//         cout << i << endl;
//     }

//     return 0;
// }

// void interleaveQueue(std::queue<int>& q) {
//     int halfSize = q.size() / 2;
//     queue<int> fq;

//     // Step 1: Push the first half of elements into a stack
//     for (int i = 0; i < halfSize; i++) {
//         fq.push(q.front());
//         q.pop();
//     }

//     // Step 2: Interleave the stack and the remaining elements in the queue
//     while (!fq.empty()) {
//         q.push(fq.front()); // Push element from stack (first half)
//         fq.pop();

//         q.push(q.front()); // Push element from the queue (second half)
//         q.pop();
//     }
// }

// int main() {
//     std::queue<int> q;

//     // Populate the queue with an example
//     for (int i = 1; i <= 10; i++) {
//         q.push(i);
//     }

//     interleaveQueue(q);

//     // Print interleaved queue
//     while (!q.empty()) {
//         std::cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;
// }
//pivot in an array
//9
// int Pivot_elem(int arr[],int n){
//   int start=0;int end=n-1;int ans;
//   while(start<=end){
//     int mid=start+(end-start)/2;
//     if(arr[mid]>arr[0]){
//       ans=mid;
//        start=mid+1;
//     }else{
//      end=mid-1;
//     }
//   }
//   cout<<ans;
// }
// int main(){
//   int arr[]={7,9,1,2,3};
//   Pivot_elem(arr,5);
// }
// #include <iostream>
// using namespace std;

// int Pivot_elem(int arr[], int n) {
//     int start = 0, end = n - 1;

//     while (start < end) { // Use < instead of <= for simplicity
//         int mid = start + (end - start) / 2;

//         // Check which half to search
//         if (arr[mid] > arr[end]) {
//             start = mid + 1; // Pivot is in the right half
//         } else {
//             end = mid; // Pivot is in the left half
//         }
//     }

//     return start; // At the end, start == end, pointing to the pivot
// }

// int main() {
//     int arr[] = {7, 9, 1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int pivotIndex = Pivot_elem(arr, n);
//     cout << "Pivot element is at index: " << pivotIndex << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int Pivot_elem(int arr[], int n) {
//     int start = 0, end = n - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         // Check which half to search
//         if (arr[mid] > arr[end]) {
//             start = mid + 1; // Pivot is in the right half
//         } else {
//             end = mid-1; // Pivot is in the left half
//         }
//     }

//     // At the end, `start` points to the smallest element.
//     // The largest (pivot) is one step back, modulo n to handle array rotation.
//    // return (start - 1 + n) % n;
//    return start;
// }
// int Pivot_elem(int arr[],int n){
//   int start = 0, end = n - 1;
//   int ans=0;
//   while(start<=end){
//     int mid=start+(end-start)/2;
//     if(arr[mid]>arr[start]){
//       start=mid+1;
//     }else if(arr[mid]<arr[start]){
//       ans=mid;
//       end=mid-1;
//     }else{
//       start++;
//     }
//   }
//   return ans;
// }
// int main() {
//     int arr[] = {1,0,1,1,1};
//     // int arr[]={3,3,1,3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int pivotIndex = Pivot_elem(arr, n);
//     cout << "Pivot element is: " << arr[pivotIndex] << " at index: " << pivotIndex << endl;
//     return 0;
// }
// int main(){
//   int arr[3][3]={1,2,3,4,5,6,7,8,9};
//   int n=3,m=3;
//   //transpose
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<m;j++){
//       swap(arr[i][j],arr[j][i]);
//       }
//       }
//       ///reverse
//       for(int i=0;i<n;i++){
//         int start=0,end=n-1;
//         while(start<=end){
//           swap(arr[start][i],arr[end][i]);
//           start++;end--;
//         }
//       }
//       //print out
//       for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//           cout<<arr[i][j];
//         }
//         cout<<endl;
//       }
// }
//print all the subarray of a given array
// int main(){
//   int arr[]={4,7,8,2};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   // for(int i=0;i<n;i++){
//   //   for(int j=i;j<n;j++){
  //     for(int k=i;k<=j;k++){
  //       cout<<arr[k]<<" ";
  //       }
  //       cout<<endl;
  //       }
  //       }
  //       return 0;

// }
// int main(){
//   // int arr[8]={9,5,8,12,2,3,7,4};
//   int arr[10]={10,7,8,5,1,4,12,1,5,0};
//   int n=10;
//   vector<int>suffix(n);
//   suffix[n-1]=arr[n-1];
//   for(int i=n-2;i>=0;i--){
//     int maxi=max(suffix[i+1],arr[i]);
//     suffix[i]=maxi;
//   }  int ansi=0;
//   for(int i=0;i<n;i++){
//    ansi=max(ansi,suffix[i]-arr[i]);
//   }
//   cout<<ansi;
// }
// int main(){
//   // int arr=5;
//   // int *ptr=&arr;
//   // cout<<ptr<<endl;
//   // cout<<*ptr<<endl;
//   // cout<<&ptr<<endl;
//   // cout<<&arr<<endl;
//   int arr[5]={1,2,3,4,5};
//   char ch[6]="Abcde";
//   // cout<<arr<<endl;
//   // cout<<&arr<<endl;
//   // cout<<&ch<<endl;//address
//   int *pi=&arr[0];
//   char *pc=&ch[0];
//   cout<<*pc<<endl;
// }
// void update(int ** p){
//   p=p+1;
//   *p=*p+1;
//   **p=**p+1;
// }
// int main(){
//   int i=5;
//   int *p1=&i;
//   int **p2=&p1;
//   cout<<"before "<<i<<endl;
//   cout<<"before "<<p1<<endl;
// cout<<"before "<<p2<<endl;
// update(p2);
//   cout<<"after "<<i<<endl;
//   cout<<"after "<<p1<<endl;
// cout<<"after "<<p2<<endl;
// }
//N-BIT BINARY NUMBERS
// string find(int n,vector<string>&ans,string &temp,int zero,int one){
//   if(temp.size()==n){
// ans.push_back(temp);
// return;
//   }
//   temp.push_back('1');
//   find(n,ans,temp,zero,one+1);
//   temp.pop_back();
//   if(zero<one){
//      temp.push_back('0');
//   find(n,ans,temp,zero+1,one);
//   temp.pop_back();
//   }
//   return ans;
// }
// int main(){
//   int n=4;
//   vector<string>ans;
//   vector<int>temp;
//   int zero;int one;
// find(n,ans,temp,zero,one);
// auto(int i:ans){
//   cout<<i<<endl;
// }
// }
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void find(int n, vector<string> &ans, string temp, int zero, int one) {
//     if (temp.size() == n) {
//         ans.push_back(temp);
//         return;
//     }
//     // Add '1' to the current sequence
//     temp.push_back('1');
//     find(n, ans, temp, zero, one + 1);
//     temp.pop_back();

//     // Add '0' to the current sequence if the count of '0's is less than '1's
//     if (zero < one) {
//         temp.push_back('0');
//         find(n, ans, temp, zero + 1, one);
//         temp.pop_back();
//     }
// }

// int main() {
//     int n = 4; // Length of the binary string
//     vector<string> ans;
//     string temp = ""; // Temporary string to hold the current sequence
//     int zero = 0, one = 0; // Counters for '0' and '1'

//     // Generate all valid binary strings
//     find(n, ans, temp, zero, one);

//     // Print the results
//     for (const auto &i : ans) {
//         cout << i << endl;
//     }

//     return 0;
// }

// int main(){
//   int len=0;
//   char arr[]={'a','b','a','b','c'};
//   int n=sizeof(arr)/sizeof(arr[0]);
  
//   for(int i=0;i<n;i++){
//     vector<int>temp(26,0);
//     for(int j=i;j<n;j++){
//       for(int k=i;k<=j;k++){
//         int c=arr[k]-'a';
//         temp[c]++;
//         cout<<arr[k]<<" ";
// if(temp[c]>1)break;
// len=max(len,k-i+1);
//         }
//         cout<<endl;
//       }}
//       cout<<len;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm> // For max()
// using namespace std;

// int main() {
//     int len = 0; // To store the length of the longest substring
//     char arr[] = {'a', 'p', 'a', 'b', 'c'};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++) {
//         vector<int> temp(26, 0); // Frequency array for characters 'a' to 'z'
//         for (int j = i; j < n; j++) {
//             int c = arr[j] - 'a'; // Map character to index
//             temp[c]++;
//             cout<<arr[j];
//             // If the character repeats, break the loop
//             if (temp[c] > 1) break;

//             // Calculate the length of the current substring
//             len = max(len, j - i + 1);
//         }
//         cout<<endl;
//     }

//     cout << "Longest substring without repeating characters: " << len << endl;
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm> // For max()
// using namespace std;

// int main() {
//     int len = 0; // To store the length of the longest substring
//     char arr[] = {'a', 'b', 'a', 'b', 'c'};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             vector<int> freq(26, 0); // Frequency array for characters 'a' to 'z'
//             bool unique = true; // Flag to check uniqueness

//             // Check all characters in the current substring
//             for (int k = i; k <= j; k++) {
//                 int c = arr[k] - 'a';
//                 freq[c]++;
//                 if (freq[c] > 1) { // If a character repeats
//                     unique = false;
//                     break;
//                 }
//             }

//             // If all characters are unique, update the length
//             if (unique) {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }

//     cout << "Longest substring without repeating characters: " << len << endl;
//     return 0;
// }
// int main(){
//   char arr[]={'A','A','B','B','B','C','B','B','A','C'};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int len=0,diff=0;
//   vector<int>count(256,0);
//   for(int i=0;i<n;i++){
//     if(count[s[i]]==0){
// diff++;
// count[s[i]]++;
//     }
//     count[s[i]]++;
//   }
//   for(int i=0;i<n;i++){
//     count[i]=0;
//   }
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       for(int k=i;k<=j;k++){
//         int c=arr[k]-'A';
//         if(count[c]==0){
//           diff--;
//         }
//       count[c]++;
//       if(diff==0){bool small=1;
//         break;
        
//       }
//     }

//     }
// }
// cout<<len;
// }

// int main() {
//     char arr[] = {'A', 'A', 'B', 'B', 'B', 'C', 'B', 'B', 'A', 'C'};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Step 1: Find the number of distinct characters
//     vector<int> globalCount(256, 0);
//     int distinctCount = 0;

//     for (int i = 0; i < n; i++) {
//         if (globalCount[arr[i]] == 0) {
//             distinctCount++;
//         }
//         globalCount[arr[i]]++;
//     }

//     // Step 2: Initialize variables
//     int minLength = INT_MAX;

//     // Step 3: Generate all substrings
//     for (int i = 0; i < n; i++) {
//         vector<int> localCount(256, 0);
//         int currentDistinct = 0;

//         for (int j = i; j < n; j++) {
//             char c = arr[j];
//             localCount[c]++;
//             if (localCount[c] == 1) {
//                 currentDistinct++;
//             }

//             // If all distinct characters are found
//             if (currentDistinct == distinctCount) {
//                 minLength = min(minLength, j - i + 1);
//                 break; // No need to expand further
//             }
//         }
//     }

//     // Step 4: Output the result
//     cout << "Length of the smallest distinct window: " << minLength << endl;
//     return 0;
// }
// int main() {
//     char arr[] = {'A', 'A', 'B', 'B', 'B', 'C', 'B', 'B', 'A', 'C'};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     }
//kmp alogritm
// int main(){
//   // char s[]={'A','B','C','A','B','D','A','B','C','A','B','D','A','B','D','A','B'};
//   char s[]={'A','B','C','D','A','B','C','D','A','B','C','D'};
//    int n = sizeof(arr) / sizeof(arr[0]);
//   vector<int>lps(n,0);
//   int prefix=0;int suffix=0;
//   while(suffix<n){
//     if(s[prefix]==s[suffix]){
//       lps[suffix]=prefix+1;
//       prefix++;
//       suffix++;

//   }
// else{
//   if(prefix==0){
//     lps[suffix]=0;
//     suffix++;

// }else{
//   prefix=lps[prefix-1];
// }
// }}
// cout<<lps[n-1];
// }
// void lps_find(vector<int>lps,char needle[],int n){
//   int prefix=0;int suffix=0;
//   while(suffix<n){
//     if(needle[prefix]==needle[suffix]){
//       lps[suffix]=prefix+1;
//       prefix++;
//       suffix++;
//       }
//       else{
//         if(prefix==0){
//           lps[suffix]=0;
//           suffix++;
//           }
//           else{
//             prefix=lps[prefix-1];
//             }
//             }
// }}
// int main(){
//   char haystack[]={'A','B','C','A','B','D','E','F'};
//   char needle[]={'D','E','F'};
//   // int m=haystack.size();
//   // int n=needle.size();
//   int n = sizeof(needle) / sizeof(needle[0]);
//   int m = sizeof(haystack) / sizeof(haystack[0]);
//   vector<int>lps(n,0);
//   lps_find(lps,needle,n);

// int first=0;int second=0;
// while(first && second<n){
//   if(haystack[first]==needle[second]){
//     first++;second++;
//   }
//   else{
//     if(second==0){
//       first++;
//     }
//     else{
//       second=lps[second-1];
//     }
//   }
//   if(second==n){
//     cout<< first-second<<endl;
//   }else{
//     cout<<"hjl";
//   }
// }
// }
//count pair with given sum
// int main(){
//     int arr[]={1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10};

//    int target = 11;
//     sort(arr.begin(),arr.end());
//     int n = sizeof(arr) / sizeof(arr[0]);
//   int count=0;
//   int first=0;
//   int firstpos=0;
//   int second=n-1;
//   int secondpos=0;
//   while(first<second){
// if(arr[first]+arr[second]==target){
//   count++;
//   firstpos=first;
//   secondpos=second;
//   if(arr[firstpos+1]+arr[secondpos-1]==target){
//     first++,second--;
//   }else if(arr[firstpos+1]+arr[secondpos-1]<target){
//     first++;
//   }else{
//     second--;
//   }
// }
// else if(arr[first]+arr[second]<target){
//   first++;
// }else{
//   second--;
// }
//   }
//   cout<<count;
// }
// #include <iostream>
// #include <algorithm> // For sort
// using namespace std;

// int countPairs(int arr[], int n, int target) {
//     // Sort the array
//     sort(arr, arr + n);

//     int count = 0;
//     int left = 0;
//     int right = n - 1;

//     // Two-pointer traversal
//     while (left < right) {
//         int sum = arr[left] + arr[right];
//         if (sum == target) {
//             count++;
//             left++;
//             right--;
//         } else if (sum < target) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return count;
// }

// int main() {
//     int arr[] = {1, 5, 7, -1, 5};
//     int target = 6;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int result = countPairs(arr, n, target);

//     cout << "Number of pairs with sum " << target << ": " << result << endl;
//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int countPairs(int arr[], int n, int target) {
//     // Sort the array
//     sort(arr, arr + n);

//     int count = 0;
//     int left = 0, right = n - 1;

//     while (left < right) {
//         int sum = arr[left] + arr[right];

//         if (sum == target) {
//             // Count pairs considering duplicates
//             int leftVal = arr[left], rightVal = arr[right];
//             int leftCount = 1, rightCount = 1;

//             // Count duplicates of the left value
//             while (left + 1 < right && arr[left] == arr[left + 1]) {
//                 left++;
//                 leftCount++;
//             }

//             // Count duplicates of the right value
//             while (right - 1 > left && arr[right] == arr[right - 1]) {
//                 right--;
//                 rightCount++;
//             }

//             // Add all combinations of duplicates
//             count += leftCount * rightCount;

//             // Move both pointers
//             left++;
//             right--;
//         } else if (sum < target) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return count;
// }

// int main() {
//     int arr[] = {1, 5, 7, -1, 5};
//     int target = 6;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int result = countPairs(arr, n, target);

//     cout << "Number of pairs with sum " << target << ": " << result << endl;
//     return 0;
// }
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int countPairs(int arr[], int n, int target) {
//     unordered_map<int, int> freq; // Frequency map to store occurrences of elements
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         int complement = target - arr[i];

//         // Check if complement exists in the map
//         if (freq[complement] > 0) {
//             count += freq[complement]; // Add the number of times the complement has appeared
//         }

//         // Add the current element to the map
//         freq[arr[i]]++;
//     }

//     return count;
// }

// int main() {
//     int arr[] = {1, 5, 7, -1, 5};
//     int target = 6;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int result = countPairs(arr, n, target);

//     cout << "Number of pairs with sum " << target << ": " << result << endl;
//     return 0;
// }
// int main(){
//   //longest suffix prefix
//   // char str[]={'A','B','C','D','E','A','B','C'};
//   char str[]={'a','b','c','a','b','d','a','b','c','a','b','d','a','b','d','a','b'};
//   int n=sizeof(str)/sizeof(str[0]);
//   int count=0;
//   int first=0;
//   int second=1;
//   while(second<n){
//     if(str[first]==str[second]){
//       count++;
//       second++;
//       first++;
//     }
//     else{
//       first=0;
//       count=0;
//       second++;
//     }
//   }
// cout<<count;
// // }
// int main(){
//   // char arr[]={'r','o','o','r','s','p'};t
//   // char arr[]={'a','a','a','o','t','c','a','a','k','r'};
//   char arr[]={'m','b','a','d','m'};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int count=0;
//   int first=0;
//   int matched=0;
//   int second=n-1;
//   while(first<second){
//    if(arr[first]==arr[second]){
//     matched++;
//       first++;second--;
//     }else{
//       if(first>0){
//         first=0;
//         count+=matched;
//         matched=0;
//       }
//         second--;
// count++;
//     }
//   }
//   cout<<count;
// }
// class queue{
//   int * arr;
//   int qfront;
//   int rear;
//   inr size;
//   queue(){
//     size=10001;
//     arr=int new[size];
//     qfront=rear=-1;
//   }
//   void push(int x){
//     if(qfront==rear){
//       cout<<"queue is full"<<endl;
//     }else if(front==-1){
//       qfront=0;
//       rear=0;
//       arr[rear]=x;
//       rear++;

//     }
//     else{
// arr[rear]=x;
// rear++;
//     }
//   }
//   void pop(){
//     if(qfront==-1){
//       cout<<"Queue is full";
//   }
//   else if(qfront==rear){
//     qfront=-1;
//   }else{
//     qfront++;

//   }}
// int front(){
// if(qfront==-1){
//   return -1;
// }
// else if(qfront==rear){
//   cout<<arr[qfront]<<endl;
// }
// }
// bool isempty(){
//   if(qfront==rear){
//     return true;
//   }
//   else{
//     return false;
//   }
// }
// int reverse(){
//   int f1=qfront;
//   int f2=rear;
//   int temp;
//   while(f1!=f2){
//     temp=arr[f1];
//     arr[f1]=arr[f2];
//     arr[f2]=temp;

//   }

// }
// }
// int main(){
//   queue<int>q(5);
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   q.push(4);
//   q.reverse();
//   q.front();
// }
// #include <iostream>
// using namespace std;

// class queue {
//   int *arr;
//   int qfront;
//   int rear;
//   int size;
  
// public:
//   queue() {
//     size = 10001;
//     arr = new int[size];
//     qfront = rear = -1;
//   }

//   void push(int x) {
//     if (rear == size - 1) {
//       cout << "Queue is full" << endl;
//     } else if (qfront == -1) {
//       qfront = 0;
//       rear = 0;
//       arr[rear] = x;
//     } else {
//       rear++;
//       arr[rear] = x;
//     }
//   }

//   void pop() {
//     if (qfront == -1) {
//       cout << "Queue is empty" << endl;
//     } else if (qfront == rear) {
//       qfront = rear = -1;
//     } else {
//       qfront++;
//     }
//   }

//   int front() {
//     if (qfront == -1) {
//       return -1;
//     } else {
//       return arr[qfront];
//     }
//   }

//   bool isempty() {
//     return qfront == -1;
//   }

//   void reverse() {
//     if (qfront == -1) return;  // Queue is empty, nothing to reverse
    
//     int start = qfront;
//     int end = rear;
    
//     while (start < end) {
//       swap(arr[start], arr[end]);
//       start++;
//       end--;
//     }
//   }
// };

// int main() {
//   queue q;
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   q.push(4);
//   q.reverse();
  
//   cout << q.front() << endl;  // Check the front element after reversal
  
//   return 0;
// }

// class queuei {
//   int *arr;
//   int qfront;
//   int rear;
//   int size;
  
// public:
//   queuei() {
//     size = 10001;
//     arr = new int[size];
//     qfront = rear = -1;
//   }

//   void push(int x) {
//     if (rear == size - 1) {
//       cout << "Queue is full" << endl;
//     } else if (qfront == -1) {
//       qfront = 0;
//       rear = 0;
//       arr[rear] = x;
//     } else {
//       rear++;
//       arr[rear] = x;
//     }
//   }

//   void pop() {
//     if (qfront == -1) {
//       cout << "Queue is empty" << endl;
//     } else if (qfront == rear) {
//       qfront = rear = -1;
//     } else {
//       qfront++;
//     }
//   }

//   int front() {
//     if (qfront == -1) {
//       return -1;
//     } else {
//       return arr[qfront];
//     }
//   }

//   bool isempty() {
//     return qfront == -1;
//   }

//   void reverse() {
//     if (qfront == -1) return;  // Queue is empty, nothing to reverse

//     int start = qfront;
//     int end = rear;

//     while (start < end) {
//       swap(arr[start], arr[end]);
//       start++;
//       end--;
//     }

//     // Adjust indices after reversing
//     int temp = qfront;
//     qfront = rear;
//     rear = temp;
//   }
// };

// int main() {
//   queuei q;
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   q.push(4);

//   q.reverse();

//   cout << q.front() << endl;  // Check the front element after reversal

//   q.pop();
//   cout << q.front() << endl;  // Check the new front after popping

//   return 0;
// }
// #include <iostream>
// using namespace std;

// class queuei {
//   int *arr;
//   int qfront;
//   int rear;
//   int size;
  
// public:
//   queuei() {
//     size = 10001;
//     arr = new int[size];
//     qfront = rear = -1;
//   }

//   void push(int x) {
//     if (rear == size - 1) {
//       cout << "Queue is full" << endl;
//     } else if (qfront == -1) {
//       qfront = 0;
//       rear = 0;
//       arr[rear] = x;
//     } else {
//       rear++;
//       arr[rear] = x;
//     }
//   }

//   void pop() {
//     if (qfront == -1) {
//       cout << "Queue is empty" << endl;
//     } else if (qfront == rear) {
//       qfront = rear = -1;
//     } else {
//       qfront++;
//     }
//   }

//   int front() {
//     if (qfront == -1) {
//       return -1;
//     } else {
//       return arr[qfront];
//     }
//   }

//   bool isempty() {
//     return qfront == -1;
//   }

//   void reverse() {
//     if (qfront == -1) return;  // Queue is empty, nothing to reverse

//     int start = qfront;
//     int end = rear;

//     while (start < end) {
//       swap(arr[start], arr[end]);
//       start++;
//       end--;
//     }

//     // Adjust indices after reversing
//     // int temp = qfront;
//     // qfront = rear;
//     // rear = temp;
//   }
// };

// int main() {
//   queuei q;
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   q.push(4);

//   q.reverse();

//   cout << q.front() << endl;  // Check the front element after reversal

//   q.pop();
//   cout << q.front() << endl;  // Check the new front after popping
// q.pop();
//  cout << q.front() << endl;  // Check the new front after popping
// q.pop();
//  cout << q.front() << endl;  // Check the new front after popping
// q.pop();
//   return 0;
// }

// int main(){
// //   queue<int>q;
// //   q.push(1);
// //   q.push(5);
// //   q.push(2);
// // q.push(3);
// int time=0;
// int arr[5]={5,5,5,5,5};
// // q.push(7);
// int k=2;//index value
// while(arr[k]!=0){
//   for(int i=0;i<5;i++){
//     arr[i]--;
//     time++;
//   }
// }
// time=time-k;
// cout<<time;
// }
// int main(){
//   char A[]={'a','b','a','b','d','c'};
//   int n=sizeof(A)/sizeof(A[0]);
//   vector<int>alpha(26,0);
//   string B="";
//   int j=0;
//   for(int i=0;i<n;i++){
//     alpha(A[i]-'a')++;
//     if(alpha(A[j]>1)){
//       B.push_back(A[j]);
//     }else{
//       j++;
//     }
//   }
//   cout<<B<<endl;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void findFirstNonRepeatingChar(const string& stream) {
//     vector<int> charCount(26, 0); // To store the frequency of each character
//     vector<int> charIndex(26, -1); // To store the first index of each character
//     string result = ""; // To store the first non-repeating character at each step

//     for (int i = 0; i < stream.length(); i++) {
//         char ch = stream[i];
//         int index = ch - 'a';

//         // Update the frequency and index
//         charCount[index]++;
//         if (charIndex[index] == -1) {
//             charIndex[index] = i; // Store the first occurrence of the character
//         }

//         // Find the first non-repeating character
//         int firstNonRepeatingIndex = stream.length();
//         char firstNonRepeatingChar = '-';
//         for (int j = 0; j < 26; j++) {
//             if (charCount[j] == 1 && charIndex[j] < firstNonRepeatingIndex) {
//                 firstNonRepeatingIndex = charIndex[j];
//                 firstNonRepeatingChar = stream[firstNonRepeatingIndex];
//             }
//         }

//         // Append the result
//         result += (firstNonRepeatingChar != '-' ? firstNonRepeatingChar : '-');
//     }

//     // Print the result
//     cout << "Stream: " << stream << endl;
//     cout << "First non-repeating characters: ";
//     for (char ch : result) {
//         cout << ch << " ";
//     }
//     cout << endl;
// }

// int main() {
//     string stream = "abcacdbd";
//     findFirstNonRepeatingChar(stream);
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void findFirstNonRepeatingChar(const string& stream) {
//     vector<int> charCount(26, 0); // To store the frequency of each character
//     string result = ""; // To store the first non-repeating character at each step

//     for (int i = 0; i < stream.length(); i++) {
//         charCount[stream[i] - 'a']++; // Update the frequency of the current character

//         // Find the first non-repeating character
//         char firstNonRepeating = '-';
//         for (int j = 0; j <= i; j++) {
//             if (charCount[stream[j] - 'a'] == 1) {
//                 firstNonRepeating = stream[j];
//                 break;
//             }
//         }

//         result += firstNonRepeating; // Append the result
//     }

//     // Print the results
//     cout << "Stream: " << stream << endl;
//     cout << "First non-repeating characters: ";
//     for (char ch : result) {
//         cout << ch << " ";
//     }
//     cout << endl;
// }

// int main() {
//     string stream = "abcacdbd";
//     findFirstNonRepeatingChar(stream);
//     return 0;
// }
// class node{
//   public:
//   int data;
//   node* left;
//   node* right;
//   node(int value){
//     data=value;
//     left=right=nullptr;
//   }
// };
// node*  binary_tree(){
//   cout<<"enter your root no:"<<endl;
//   int x;
//   cin>>x;
//   if (x == -1) return nullptr; 
//   node* root=new node(x);
//   queue<node*>q;
//   q.push(root);
//   while(!q.empty()){
//     int first,second;
//    node*temp=q.front();
//     cout<<"enter left child of :"<<temp->data<<endl;
//     cin>>first;
//     while(first!=-1){
//       temp->left=new node(first);
//       q.push(temp->left);
//     }
//     cout<<"enter right child of :"<<temp->data<<endl;
//     cin>>second;
//     while(second!=-1){
//       temp->right=new node(second);
//       q.push(temp->right);
//     }
//   }
//   return root;
// }
// int main(){
//   cout<<binary_tree()<<endl;
//   return 0;
// }
// #include <iostream>
// #include <queue>
// using namespace std;

// class node {
// public:
//     int data;
//     node* left;
//     node* right;

//     node(int value) {
//         data = value;
//         left = right = nullptr;
//     }
// };

// node* binary_tree() {
//     cout << "Enter root value: ";
//     int x;
//     cin >> x;
//     if (x == -1) return nullptr;

//     node* root = new node(x);
//     queue<node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         int first, second;
//         cout << "Enter left child of " << temp->data << " (-1 for NULL): ";
//         cin >> first;
//         if (first != -1) {
//             temp->left = new node(first);
//             q.push(temp->left);
//         }

//         cout << "Enter right child of " << temp->data << " (-1 for NULL): ";
//         cin >> second;
//         if (second != -1) {
//             temp->right = new node(second);
//             q.push(temp->right);
//         }
//     }
//     return root;
// }

// // Function to print the tree in level-order
// void levelOrderTraversal(node* root) {
//     if (!root) return;
    
//     queue<node*> q;
//     q.push(root);
    
//     while (!q.empty()) {
//         node* temp = q.front();
//         q.pop();
        
//         cout << temp->data << " ";
        
//         if (temp->left) q.push(temp->left);
//         if (temp->right) q.push(temp->right);
//     }
//     cout << endl;
// }

// int main() {
//     node* root = binary_tree();
    cout << "Level-order traversal of the tree: ";
//     levelOrderTraversal(root);
//     return 0;
// }

int main(){
  cout<<"enter the root :";
  int x;
  cin>>x;
  queue<node *>q;
  node* root=new node(x);
  q.push(root);
  while(!q.empty()){
    int first,second;
    node*temp=q.front();
    q.pop();
    cout<<"enter left child of :"<<temp->data<<endl;
    cin>>first;
    if(first!=-1){
      temp->left=new node(first);
      q.push(temp->left);
    }
    cout<<"enter right child of :"<<temp->data<<endl;
    cin>>second;
    if(second!=-1){
      temp->right=new node(second);
      q.push(temp->right);
    }
  }
  return 0;
}
node* binary_tree(){
  int x;
  cin>>x;
  if(x==-1){
    return NULL;
  }
  node* temp=new node(x);
  cout<<"left child"<<temp->data<<endl;
  temp->left=binary_tree();
  cout<<"right child"<<temp->data<<endl;
  temp->right=binary_tree();
  return temp;
}
// int main(){
//   cout<<"enter the root :";
//   node* root=binary_tree();
//   levelOrderTraversal(root);
// }
int main(){
  int count=0;
node* root=binary_tree();
  total(root,count);
}
// void total(node* root, int &count){
//   if(root==NULL){
//     return;
//   }
//   count++;
//   total(root->left,count);
//   total(root->right,count);
// }
// void total(node* root){
//   int count;
//   queue<node*>q;
//   q.push(root);
//   while(!q.empty()){
//     node* temp=q.front();
//     q.pop();
//     if(temp->left){
//       count++;
//       q.push(temp->left);
//     }
//     if(temp->right){
//       count++;
//       q.push(temp->right);
//     }
//   }
//   cout<<count;
// }
void total(node* root) {
  if (!root) {
      cout << "Total number of nodes: 0" << endl;
      return;
  }

  int count = 0; // Initialize count
  queue<node*> q;
  q.push(root);

  while (!q.empty()) {
      node* temp = q.front();
      q.pop();
      count++; // Count the current node

      if (temp->left) q.push(temp->left);
      if (temp->right) q.push(temp->right);
  }

  cout << "Total number of nodes: " << count << endl;
}
// void sum_nodex(node* root, int &sum) {
//   if (root == NULL) {
//       return;
//   }

//   sum += root->data;  // Add current node's data

//   // Recursive Calls
//   sum_nodex(root->left, sum);
//   sum_nodex(root->right, sum);

//   // Print the final sum only in the last recursive call
//   if (root->left == NULL && root->right == NULL) {
//       cout << "Sum of nodes: " << sum << endl;
//   }
// }

void countleaf(node* root, int &summ){
  if(root==NULL){
    summ++;
    return;
  }

countleaf(root->left,summ);
countleaf(root->right,summ);
}
void countleaf(node* root, int &summ) {
    if (root == NULL) {
        return;  // Do not count NULL nodes
    }

    // If node is a leaf (both children NULL), increase count
    if (root->left == NULL && root->right == NULL) {
        summ++;
    }

    // Recur for left and right children
    countleaf(root->left, summ);
    countleaf(root->right, summ);
}

int sum_nodex(node* root,int &sum){
  
  if(root==NULL){
    return 0;
  }
  sum+=root->data;
  sum_nodex(root->left,sum);
  sum_nodex(root->right,sum);
  if(root->left==NULL && root->right==NULL){
    cout<<"sum of nodes "<<sum<<endl;
  }
}
// int main() {
//     node* root = buildTree();
//     int sum=0;
//     int summ=0;
//     total(root);
//     sum_nodex(root,sum);
//     cout<<sum<<endl;
// countleaf(root,summ);
//     cout<<summ;
//     return 0;
class node {
  public:
      int data;
      node* left;
      node* right;
  
      node(int value) {
          data = value;
          left = right = nullptr;
      }
  };
  
  node* buildTree() {
    cout << "Enter the root: ";
    int x;
    cin >> x;

    if (x == 0) return nullptr; // If the user enters -1, return NULL

    node* root = new node(x);
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        int first, second;
        cout << "Enter left child of " << temp->data << " (-1 for NULL): ";
        cin >> first;
        if (first != 0) {
            temp->left = new node(first);
            q.push(temp->left);
        }

        cout << "Enter right child of " << temp->data << " (-1 for NULL): ";
        cin >> second;
        if (second != 0) {
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
    return root;
}
  void nono_leaf(node* root,int &count){
    if(root==NULL){
      return;
    }
    count++;
    if(root->left==NULL && root->right==NULL){
      count--;
      return;
    }
    nono_leaf(root->left,count);
    nono_leaf(root->right,count);
  }
int main(){
  node* root = buildTree();
  int count=0;
  // int summ=0;
  // cout<<sum_nodex(root,sum);
  // countleaf(root,summ);
  // cout<<summ;
  nono_leaf(root,count);
  cout<<count;
}
