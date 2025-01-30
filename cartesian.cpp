#include<iostream>
using namespace std;
int i,j;
 void cartesian(int set1[], int set2[], int m, int n)
{
    cout<<"\n cartesian product of the two set :\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<set1[i]<<set2[j]<<" ";
        }
    }
}
int main()
{
   int set1[100], set2[100], m, n,k;
   cout<<"\nEnter the set 1 size\n";
   cin>>m;
   cout<<"\n Enter the element of set 1\n";
   for(k=0;k<m;k++)
   {
       cin>>set1[k];
   }
   cout<<"\nEnter the set 2 size\n";
   cin>>n;
   cout<<"\n Enter the element of set 2\n";
   for(k=0;k<n;k++)
   {
       cin>>set2[k];
   }
   
   cartesian(set1,set2,m,n);
    return 0;
}