#include <iostream>
using namespace std;
class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    Inventory(int itemNum, int qty, double itemCost) {
        itemNumber = itemNum;
        quantity = qty;
        cost = itemCost;
        setTotalCost();
    }
    void setItemNumber(int itemNum) { itemNumber = itemNum; }
    void setQuantity(int qty) {
        quantity = qty;
        setTotalCost();
    }
    void setCost(double itemCost) {
        cost = itemCost;
        setTotalCost();
    }
    void setTotalCost() {
        totalCost = quantity * cost;
    }
    int getItemNumber() { return itemNumber; }
    int getQuantity() { return quantity; }
    double getCost() { return cost; }
    double getTotalCost() { return totalCost; }
    void displayItemInfo() {
        cout << "Item Number: " << itemNumber << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost per item: $" << cost << endl;
        cout << "Total Cost: $" << totalCost << endl;
    }
};
int main() {
    Inventory item1(101, 5, 20.50);
    cout << "Inventory Item Details:\n";
    item1.displayItemInfo();
    cout << "\nUpdating item details...\n";
    item1.setQuantity(10);
    item1.setCost(18.75);
    cout << "\nUpdated Inventory Item Details:\n";
    item1.displayItemInfo();

    return 0;
}
