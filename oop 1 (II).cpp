#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }
    void setX(int xVal) { x = xVal; }
    void setY(int yVal) { y = yVal; }
    int getX() { return x; }
    int getY() { return y; }
    int Add() {
        return x + y;
    }
    void print() {
        cout << "X: " << x << ", Y: " << y << endl;
        cout << "Sum of X and Y: " << Add() << endl;
    }
};
int main() {
    Point p1;
    cout << "Default Constructor Values:\n";
    p1.print();
    Point p2(5, 8);
    cout << "\nParameterized Constructor Values:\n";
    p2.print();
    cout << "\nUpdating Values Using Setters:\n";
    p2.setX(10);
    p2.setY(15);
    p2.print();
    return 0;
}
