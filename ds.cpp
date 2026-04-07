#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Event {
    string name;
    string time;
    string description;
};

map<string, vector<Event>> calendar;

void addEvent() {
    string date;
    Event e;

    cout << "Enter date (YYYY-MM-DD): ";
    cin >> date;

    cout << "Enter event name: ";
    cin >> e.name;

    cout << "Enter time: ";
    cin >> e.time;

    cout << "Enter description: ";
    cin >> e.description;

    calendar[date].push_back(e);
    cout << "Event added successfully!\n";
}

void viewEvents() {
    string date;
    cout << "Enter date: ";
    cin >> date;

    if (calendar.find(date) != calendar.end()) {
        for (auto &e : calendar[date]) {
            cout << "\nName: " << e.name;
            cout << "\nTime: " << e.time;
            cout << "\nDescription: " << e.description << endl;
        }
    } else {
        cout << "No events found.\n";
    }
}

void deleteEvent() {
    string date;
    cout << "Enter date: ";
    cin >> date;

    if (calendar.find(date) != calendar.end()) {
        calendar.erase(date);
        cout << "Events deleted for this date.\n";
    } else {
        cout << "No events found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n1. Add Event\n2. View Events\n3. Delete Events\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: addEvent(); break;
            case 2: viewEvents(); break;
            case 3: deleteEvent(); break;
            case 4: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}