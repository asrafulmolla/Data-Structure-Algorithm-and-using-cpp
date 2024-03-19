#include <iostream>
#include <vector>
using namespace std;
// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choose the first element as the pivot
    int i = low + 1; // Index of the first element after the pivot

    for (int j = low + 1; j <= high; j++) {
        // If current element is smaller than pivot
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++; // Move to the next element
        }
    }
    swap(arr[low], arr[i - 1]); // Swap pivot with the last element smaller than it
    return i - 1; // Return the partitioning index
}

// Function to perform the Quick Sort algorithm
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print an array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout <<endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
