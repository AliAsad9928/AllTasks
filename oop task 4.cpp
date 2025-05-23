#include <iostream>
using namespace std;
class Computer {
public:
    int word_size;
    int memory_size;
    int storage_size;
    int speed;
    Computer(int ws = 0, int mem = 0, int storage = 0, int spd = 0) {
        word_size = ws;
        memory_size = mem;
        storage_size = storage;
        speed = spd;
    }
    void setSpecs(int mem, int spd) {
        memory_size = mem;
        speed = spd;
    }
    void setSpecs(int mem, int spd, int storage) {
        memory_size = mem;
        speed = spd;
        storage_size = storage;
    }
    void display() {
        cout << "Computer Specifications:\n";
        cout << "Word Size: " << word_size << " bits\n";
        cout << "Memory Size: " << memory_size << " MB\n";
        cout << "Storage Size: " << storage_size << " MB\n";
        cout << "Speed: " << speed << " MHz\n";
    }
};
class Laptop : public Computer {
public:
    float length, width, height, weight;
    Laptop(int ws, int mem, int storage, int spd, float l, float w, float h, float wt)
        : Computer(ws, mem, storage, spd) {
        length = l;
        width = w;
        height = h;
        weight = wt;
    }
    void displayLaptop() {
        display();
        cout << "Laptop Dimensions (LxWxH): " << length << " x " << width << " x " << height << " inches\n";
        cout << "Weight: " << weight << " kg\n";
    }
};
int main() {
    Computer pc(32, 8192, 500000, 3500);
    cout << "Displaying Computer Details:\n";
    pc.display();
    cout << "\n";
    Laptop myLaptop(64, 16384, 1000000, 4200, 14.0, 9.5, 0.7, 1.5);
    cout << "Displaying Laptop Details:\n";
    myLaptop.displayLaptop();
    return 0;
}
