#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0; i < n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
    }
    return true;
}
}

int allocateBooks(vector<int> arr, int n, int m) {
    
}

int main() {
    int n, m;
    cout << "Enter the number of books (n): ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of students (m): ";
    cin >> m;

    int result = allocateBooks(arr, n, m);
    cout << "Minimum number of pages a student must read: " << result << endl;
    
    return 0;
}

