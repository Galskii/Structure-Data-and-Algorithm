#include <iostream>
using namespace std;

int binarySearch(int arr[], int a, int b) 
{
    int l = 0, r = a - 1;
    while (l <= r) 
	{
        int mid = l + (r - l) / 2;
        if (arr[mid] == b) 
		{
            return mid;
        }
        if (arr[mid] < b) 
		{
            l = mid + 1;
        } else 
		{
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[1000];
    for (int i = 0; i < 1000; i++) 
	{
        arr[i] = i + 1;
    }
    int c = sizeof(arr) / sizeof(arr[0]);
    //user memasukan inputan
    int d;
    cout << "Masukkan halaman yang ingin dicari: ";
    cin >> d;
    int result = binarySearch(arr, c, d);
    //jika inputan tidak ditemukan dalam array
    if (result == -1) 
    {
        cout << "Halaman " << d << " tidak ditemukan." << endl;
    } 
    //jika inputan ditemukan dalam array
	else 
    {
        cout << "Halaman " << d << " ditemukan pada indeks ke-" << result << "." << endl;
    }
    return 0;
}