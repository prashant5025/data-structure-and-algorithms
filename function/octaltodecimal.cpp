#include<bits/stdc++.h>

using namespace std;


int ocataltodecimal(int n){
	int ans=0;
	int x =1;
	while(n>0){
		int y =n%10;
		ans += x*y;
		x *=8;
		n/=10;
		
	}
	return ans;
}

int hexadcimaltodecimal(string n){
	int ans =0;
	int x =1;
	
	int s =n.size();
	for(int i=s-1; i>=0; i--)
	{
		if(n[i] >='0' && n[i]<='9')
		{
			ans += x*(n[i]-'0');
			
		}
		else if(n[i] >= 'A' && n[i] <= 'F')
		{
			ans += x*(n[i]-'A' + 10);
			
		}
		x *=16;
	}
	return ans;
}

int decimaltobinary(int n)
{
	int x=1;
	int ans =0;
	while(x <=n)
		x*=2;
	x/=2;
	
	while(x>0){
		int lastdigit =n/x;
		n-=lastdigit*x;
		x/=2;
		ans = ans*10 + lastdigit;
	}
	return ans;
}

int decimaltooctal(int n)
{
	int x=1;
	int ans =0;
	while(x <=n)
		x*=8;
	x/=8;
	
	while(x>0){
		int lastdigit =n/x;
		n-=lastdigit*x;
		x/=8;
		ans = ans*10 + lastdigit;
	}
	return ans;
}
string decimaltohexadecimal(int n){
	
	int x =1;
	string ans ="";
	while(x<=n)
		x*=16;
	x/=16;
	
	while(x>0){
		int lastdigit =n/x;
		n -= lastdigit*x;
		x /= 16;
		
		if(lastdigit <=9)
			ans = ans + to_string(lastdigit);
		else{
			char c ='A' + lastdigit - 10;
			ans.push_back(c);
		}
	}
	return ans;
}

int reverse(int n){
	int ans =0;
	while(n>0)
	{
		int lastdigit = n%10;
		ans = ans*10 + lastdigit;
		n /=10;
	}
	return ans;
}

int AddBinary(int a , int b){
	int ans =0;
	int preCarry =0;
	
	while(a>0 && b>0){
		if(a%2 ==0 && b%2 ==0)
        {
			ans = ans*10 + preCarry;
			preCarry = 0;
			
			
		}
		else if((a%2==0 && b%2==1)|| (a%2==1 && b%2 ==0))
        {
			
			if(preCarry == 1){
				ans = ans *10+ 0;
				preCarry = 1;
				
			}
            else
            {
                ans = ans*10 +1;
                preCarry =0;
            }
		}
		else
		{
			ans = ans*10 + preCarry;
			preCarry = 1;
			
			
		}
		a /=10;
		b /= 10;
		
	}
	while(a>0){
		if(preCarry ==1)
		{
			ans = ans*10 + 0;
			preCarry =1;
		}
		else
		{
			ans = ans*10+ 1;
			preCarry =0;
		}
	}
	while(a>0){
		if(preCarry==1)
		{
			if(a%2 == 1)
			{
				ans = ans*10 + 0;
				preCarry =1;
			}
			else
			{
				ans = ans*10 + 1;
				preCarry =0;
			}
		}
		else
		{
			ans = ans*10 + (a%2);
		}
		a/=10;
	}
	while(b>0){
		if(preCarry==1)
		{
			if(b%2 == 1)
			{
				ans = ans*10 + 0;
				preCarry =1;
			}
			else
			{
				ans = ans*10 + 1;
				preCarry =0;
			}
		}
		else
		{
			ans = ans*10 + (a%2);
		}
		b/=10;
	}
	if(preCarry ==1)
	{
		ans = ans*10 + 1;
		
	}
	ans =reverse(ans);
    return ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<AddBinary(a,b)<<endl;
	

}