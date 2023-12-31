#include<iostream>
#include<vector>
using namespace std;

template<typename T>
T add(const vector<T>& numbers) {
    T sum = 0;
    for (const T& num : numbers) {
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    cout << "ENTER \n'input how many numbers you want to add': for addition of 'n' numbers \n0: for exiting the program \n";
    
    while (true) {
        cout << "Enter your choice: ";
        cin >> n;

        if (n == 0) {
            cout << "Exiting..." << endl;
            break;
        }

        if (n < 1) {
            cout << "Invalid input" << endl;
            continue;
        }

        vector<int> numbers(n);
        cout << "Enter " << n << " numbers: ";
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        cout << "Sum of " << n << " numbers is: " << add(numbers) << endl;
    }

    return 0;
}
