#include <iostream>
using namespace std;

void printArray(int arr[], int size);
double mid(int arr[], int size);

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
    
    //float middle = mid(arr, size);
    //cout << "Middle: " << middle << endl;

	system("pause");
	return 0;

}


double mid(int arr[], int size)
{
    int sum = 0;
    float mid;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    mid = (float)sum / (float)size;
    return mid;
}

int main_2() {
    int size1;
    int size2;
    cin >> size1;
    cin >> size2;
    int arr1[100];
    int arr2[100];
    int arr3[100];

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[count] = arr1[i];
                count++;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        cout << arr3[i];
    }
    return 0;
}

/* Find two elem in arr1 and arr2 which sum is equal to entered number "a" */ 
int main_1()
{
    int a, n1, n2;
    cin >> a;
    int arr1[100];
    int arr2[100];

    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        arr1[i] = x;
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        arr2[i] = x;
    }

    for (int i = 0; i < n1; i++)
    {
        int x = arr1[i];
        for (int j = 0; j < n2; j++)
        {
            int y = arr2[j];
            if (x + y == a) cout << x << " + " << y << endl;
        }
    }

    return 0;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


