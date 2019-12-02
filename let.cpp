    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t,i;
    	cin>>t;
    	for(i=1;i<=t;i++)
    	{
    		int n;
    		long long ans=1;
    		cin>>n;
    		char str1[n],str2[n],str3[n];
    		scanf("%s",str1);
    		scanf("%s",str2);
    		scanf("%s",str3);
    		int j;
    		if((n%2)==0)
    		{
    			if((str1[0]=='#')||(str2[0]=='#')||(str3[n-1]=='#')||(str2[n-1]=='#'))
    			ans=0;
    			for(j=1;j<n-2;j=j+2)
    			{
    				int x=1,y=1;
    				if((str2[j]=='#')||(str2[j+1]=='#'))
    				{
    					ans=0;
    					break;
    				}
    				if((str1[j]=='#')||(str1[j+1]=='#'))
    				x=0;
    				if((str3[j]=='#')||(str3[j+1]=='#'))
    				y=0;
    				if((x==0)&&(y==0))
    				{
    					ans=0;
    					break;
    				}
    				if((x==1)&&(y==1))
    				ans=(ans*2)%1000000007;
     
    			}
     
     
    		}
    		else
    		ans=0;
    		cout<<"Case #"<<i<<": "<<ans<<"\n";
    	}
    	return 0;
    }