// arrayLinearsearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int linearSearch(int arr[],  int key) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >>arr[i];
    }
    int key;
    cin >> key;
    cout << linearSearch(arr,  key);
        return 0;
}

