#include <iostream>
using namespace std;

class NumberArray {
private:
    float numbers[100];
    int count;

public:
    NumberArray() {
        count = 0;
    }

    void getInput() {
        cout << "Enter the number of values: ";
        cin >> count;

        cout << "Enter " << count << " float values:\n";
        for (int i = 0; i < count; i++) {
            cin >> numbers[i];
        }
    }
    float calculateSum() {
        float sum = 0;
        for (int i = 0; i < count; i++) {
            sum += numbers[i];
        }
        return sum;
    }
    void displayAverage() {
        if (count == 0) {
            cout << "No numbers entered.\n";
            return;
        }
        float avg = calculateSum() / count;
        cout << "Average of the entered numbers: " << avg << endl;
    }
    void displayNumbers() {
        cout << "Numbers entered: ";
        for (int i = 0; i < count; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    NumberArray obj;
    obj.getInput();
    obj.displayNumbers();
    obj.displayAverage();
    return 0;
}
