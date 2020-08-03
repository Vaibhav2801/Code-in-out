#include<bits/stdc++.h>
 using namespace std;
//  #define int long long
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
 #define sv() sort(a.begin(),a.end())
 #define vp vector<pair<int, int>> a(n)
  int32_t main()
  {
 T{
     int n,x,y,p=0,q=0,r=0;
     cin>>n;
     string s="";
    map<int, vector<int> > a;
    for(int i=0;i<n;i++)
    {
     cin>>x>>y;
     a[x].pb(y);    
    }
   for(auto i=a.begin();i!=a.end();++i)
   {
     sort(i->second.begin(),i->second.end());
    }
x=0,y=0;
for(auto i=a.begin();i!=a.end();++i)
{
  
for(auto j=i->second.begin();j!=i->second.end();++j)
{
  // cout<<*j<<endl;
  int c=i->first,d=0;
  d=*j;
  p=c-x;
  q=d-y;
  if(p<0 || q<0)
  {
    r=1;
    break;
  }
  else
  {
    x=c;
    y=d;
   while(p--)
   s+='R';
   while(q--)
   s+='U';
  }
}
 if(r==1)
  break;
}
if(r==1)
cout<<"NO"<<endl;
else
{
  cout<<"YES"<<endl;
  cout<<s<<endl;
}
 }
  }
