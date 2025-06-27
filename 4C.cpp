#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> database;

    while (n--) {
        string name;
        cin >> name;

        if (database.find(name) == database.end()) {
            // First time seeing this name
            database[name] = 0;
            cout << "OK" << endl;
        } else {
            // Name already exists, suggest a new one
            database[name]++;
            string newName = name + to_string(database[name]);
            while (database.find(newName) != database.end()) {
                database[name]++;
                newName = name + to_string(database[name]);
            }
            database[newName] = 0;  // Register the new name
            cout << newName << endl;
        }
    }

    return 0;
}
