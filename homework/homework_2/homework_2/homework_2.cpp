#include <iostream>
using namespace std;

int count_odd(int arr[], int size);
int main()
{
    int size;
    do {
        cout << "Enter a size: ";
        cin >> size;
    } while (size <= 0 || size > 100);

    int arr[100];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << count_odd(arr, size) << endl;

    system("pause");
    return 0;

}

int count_odd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }
    return -1;
}