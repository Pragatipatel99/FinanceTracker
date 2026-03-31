#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Transaction {
private:
    int id;
    string date;
    string type;
    double amount;
    string category;
    string description;

public:
    Transaction(int id, const string& date, const string& type,
                double amount, const string& category, const string& description)
        : id(id), date(date), type(type), amount(amount),
          category(category), description(description) {}

    int getID() const { return id; }
    string getDate() const { return date; }
    string getType() const { return type; }
    double getAmount() const { return amount; }
    string getCategory() const { return category; }
    string getDescription() const { return description; }

    void display() const {
        cout << "-----------------------------" << endl;
        cout << "ID: " << getID() << endl;
        cout << "Date: " << getDate() << endl;
        cout << "Type: " << getType() << endl;
        cout << "Amount: " << fixed << setprecision(2) << getAmount() << endl;
        cout << "Category: " << getCategory() << endl;
        cout << "Description: " << getDescription() << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Transaction t1(1, "2024-03-31", "expense", 250.5, "Food", "Lunch");

    t1.display();

    return 0;
}