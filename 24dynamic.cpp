#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the size" << endl;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    delete[] arr;

    return 0;
}