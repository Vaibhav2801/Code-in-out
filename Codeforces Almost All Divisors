 #include<bits/stdc++.h>
 #include <string>
 using namespace std;
 #define int long long
 #define endl "\n"
 const int mod=1e9+7;
 #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 #define clr(a,x) memset(a,x,sizeof(a))
 #define T int t;cin>>t; while(t--)
 #define vll vector<int>
  #define pb push_back
 #define sz size
 #define str to_string
 #define intt stoll
 int32_t main()
{
 fast_io;
T
{
  int n,b=0,j=2;
  cin>>n;
  int a[n];
  vll v;
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  b=a[0]*a[n-1];
  // cout<<b<<endl;
   int d=b;
   //cout<<d<<endl;
   while(j*j<=d)
   {
     if(d%j==0)
     {
     v.pb(j);
     if(d/j!=j)
     v.pb(d/j);
     }
     j++;
   }
  sort(v.begin(),v.end());
  //for(int i=0;i<v.size();i++)
  //cout<<v[i]<<endl;
 int c=b;
  b=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=v[i])
    {b=1;
    break;}
  }
  if(b==0)
  cout<<c<<endl;
  else
  cout<<-1<<endl;
}
}
