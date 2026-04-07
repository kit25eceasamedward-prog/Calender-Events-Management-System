📅 Simple Calendar Event Manager (C++)

A simple command-line calendar application built using C++ that helps users manage daily events efficiently. This project demonstrates the use of basic programming concepts and STL containers like map and vector.

🚀 Features
➕ Add events with date, name, time, and description
📖 View events for a specific date
❌ Delete all events for a selected date
🧭 Easy-to-use menu-driven interface
🛠️ Technologies Used
C++
Standard Template Library (STL)
map
vector
📂 Project Structure
Event structure to store event details
map<string, vector<Event>> to store events by date
Functions:
addEvent() – Adds a new event
viewEvents() – Displays events
deleteEvent() – Deletes events
▶️ How to Run

Save the code in a file:

calendar.cpp

Compile the program:

g++ calendar.cpp -o calendar

Run the program:

./calendar
📌 Example Menu
1. Add Event
2. View Events
3. Delete Events
4. Exit
⚠️ Limitations
Does not support multi-word input (uses cin)
No data persistence (events are lost after exit)
Deletes all events for a date instead of individual ones
🔮 Future Improvements
Use getline() for better input handling
Add file storage (save/load events)
Edit or delete individual events
Sort events by time
Add search functionality
