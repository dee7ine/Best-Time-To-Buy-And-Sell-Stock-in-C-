#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

void buyStock(int arr[], int n)
{
	int index = -1;
	int buyPrice = 3; 
	int sellPrice = 3; 
	
	unsigned int buyDay, sellDay;
	
	for(int i=1; i<n; i++)
	{
		if(arr[i]<buyPrice)
		{
			buyPrice = arr [i];
			buyDay = i+1;
		} 
		for(int j=1; j<n; j++)
		{
			if(arr[j]>sellPrice)
		{
			// sellPrice = arr [i];
				sellPrice = arr [j];
				sellDay = j+1;	
		}
		}
		
	}
	
	if(buyDay > sellDay)
	{
		cout << "No transactions can be done" << endl;
	}
	
	else
	{
		
	int profit = sellPrice - buyPrice;
	cout << "Buy for " << buyPrice << " and sell for " << sellPrice << endl;
	cout << "Buy on day " << buyDay << " and sell on day " << sellDay << endl;
	cout << "A total profit would be " << profit << endl;
	}
	//cout << sellPrice << endl;
	//cout << buyPrice << endl;
	//cout << sellDay << endl;
	//cout << buyDay << endl;
	
}


int main(int argc, char** argv) 
{
	int arr[] = { 3,6,4,3,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
	
	buyStock(arr, n);
	
	return 0;
}
