#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void QH(int n, int a[])
{
	int b[n][n];
	cout << "In ma tran quan he \n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if((a[i] + a[j]) % 2 == 0)
			{
				b[i][j] = 1;
			}else 
				b[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------------\n";
	
	int ktra = true;
	for(int i = 0; i < n; i++)
	{
		if(b[i][i] * b[i][i] != 1) 
		{
			ktra = false;
		}
	}
	if(ktra)
	{
		cout << "Quan he phan xa\n";
	}else
	{
		cout <<"Quan he khong phan xa\n";
    }
	cout << "---------------------------------------\n";
	
	ktra = true;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(b[i][j] != b[j][i])
			{
				ktra = false;
			}
		}
	}
	if(ktra)
	{
		cout << "Quan he doi xung\n";
	}else
	{
		cout <<"Quan he khong doi xung\n";
	}
	ktra  = true;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(b[i][j] * b[j][i] != 0)
			{
				ktra = false;
			}
		}
	}
	cout << "---------------------------------------\n";
	
	if(ktra){
		cout << "Quan he phan xung \n";
	}else{
		cout <<"Quan he khong phan xung\n";
	}
}

int main() {
	FAST;
	int n = 3;
	int a[n] = {2,5,8};
	QH(n,a);
}

