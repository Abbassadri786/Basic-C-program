//Find minimum sum subarray of given size k
//SLIDING WINDOW TECHNIQUE
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int size,k;
   cin>>size;
   
   int arr[size],i;
   for( i=0; i<size; i++)
   {
       cin>>arr[i];
   }
   
   cin>>k;
   
   int sum=0,res;
   for(i=0; i<k; i++)
   {
       sum +=arr[i];
   }
   res=sum;
   int cur_sum=0,ans;
   
   for(i=1; i<(size-k+1); i++)
   {
       sum -= arr[i-1];
       cur_sum += arr[size+k-1];
       ans= min(res,cur_sum);
   }
   
   cout<<ans<<endl;
   
   
   return 0;
}
