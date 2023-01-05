#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    cout<<"Enter number of elements: ";
    cin>>N;
	int arr[N]; 
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

	for (int i = 0; i < N - 1; i++)
	    for (int j = 0; j < N - i - 1; j++)
		    if (arr[j] > arr[j + 1])
			    swap(arr[j], arr[j + 1]);

	cout << "Sorted array: \n";

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}

