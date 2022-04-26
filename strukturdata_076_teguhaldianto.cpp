#include<iostream>
 
using namespace std;
 
// sebuah fungsi yang mengimplementasikan shellshort.
void ShellSort(int a[], int n)
{
	int i, j, k, temp;
	// celah 'i' antara indeks elemen yang akan dibandingkan awalnya n/2.
	for(i = n/2; i > 0; i = i/2)
	{
		for(j = i; j < n; j++)
		{
			for(k = j-i; k >= 0; k = k-i)
			{
				// jika nilai pada indeks yang lebih tinggi lebih besar, maka putuskan loop.
				if(a[k+i] >= a[k])
				break;
				// ganti nilai sebaliknya.
				else
				{
					temp = a[k];
					a[k] = a[k+i];
					a[k+i] = temp;
				}
			}
		}
	}
}
int main()
{	
	int n, i;
	cout<<"\nmasukkan jumlah elemen data yang akan diurutkan: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"masukkan elemen "<<i+1<<": ";
		cin>>arr[i];
	}
 
	ShellSort(arr, n);
 
	// mencetak data yang diurutkan.
	cout<<"\ndata yang diurutkan ";
	for (i = 0; i < n; i++)
		cout<<"->"<<arr[i];
 
	return 0;
}
