#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
/*
   Developer: Kain Mason
   Date: January 28, 2024
   Purpose: Project one Module 3 :Clock
*/

// Class for 12-hour clock
class TwelveHourClock {
private:
    int hour; // Hour in 12-hour format
    int minute; // Minute
    int seconds; // Second
    string meridian; // AM/PM indicator for 12-hour clock

public:
    // Constructor to initialize the 12-hour clock
    TwelveHourClock() {
        updateTime(); // Updating time when an object is created
    }

    // Method to add hours to the clock
    void addHour(int h) {
        hour += h; // Adding hours
        normalizeTime(); // Normalizing time after addition
    }

    // Method to add minutes to the clock
    void addMinute(int m) {
        minute += m; // Adding minutes
        normalizeTime(); // Normalizing time after addition
    }

    // Method to add seconds to the clock
    void addSecond(int s) {
        seconds += s; // Adding seconds
        normalizeTime(); // Normalizing time after addition
    }

    // Method to display the time in 12-hour format
    void displayTime() const {
        cout << "12-Hour Clock: " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << seconds << " " << meridian;
    }

private:
    // Method to update time based on current system time
    void updateTime() {
        time_t now = time(0); // Getting current time in seconds since epoch
        tm* ltm = localtime(&now); // Converting time_t to tm structure
        hour = ltm->tm_hour; // Extracting hour from tm structure
        minute = ltm->tm_min; // Extracting minute from tm structure
        seconds = ltm->tm_sec; // Extracting second from tm structure

        // Determining meridian (AM/PM) based on hour
        if (hour >= 12) {
            meridian = "PM";
            hour -= 12;
        }
        else {
            meridian = "AM";
        }
    }

    // Method to normalize time (handling rollover)
    void normalizeTime() {
        if (seconds >= 60) {
            minute += seconds / 60;
            seconds %= 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 12) {
            hour %= 12;
        }
    }
};

// Class for 24-hour clock
class TwentyFourHourClock {
private:
    int hour; // Hour in 24-hour format
    int minute; // Minute
    int seconds; // Second

public:
    // Constructor to initialize the 24-hour clock
    TwentyFourHourClock() {
        updateTime(); // Updating time when an object is created
    }

    // Method to add hours to the clock
    void addHour(int h) {
        hour += h; // Adding hours
        normalizeTime(); // Normalizing time after addition
    }

    // Method to add minutes to the clock
    void addMinute(int m) {
        minute += m; // Adding minutes
        normalizeTime(); // Normalizing time after addition
    }

    // Method to add seconds to the clock
    void addSecond(int s) {
        seconds += s; // Adding seconds
        normalizeTime(); // Normalizing time after addition
    }

    // Method to display the time in 24-hour format
    void displayTime() const {
        cout << " | 24-Hour Clock: " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << seconds;
    }

private:
    // Method to update time based on current system time
    void updateTime() {
        time_t now = time(0); // Getting current time in seconds since epoch
        tm* ltm = localtime(&now); // Converting time_t to tm structure
        hour = ltm->tm_hour; // Extracting hour from tm structure
        minute = ltm->tm_min; // Extracting minute from tm structure
        seconds = ltm->tm_sec; // Extracting second from tm structure
    }

    // Method to normalize time (handling rollover)
    void normalizeTime() {
        if (seconds >= 60) {
            minute += seconds / 60;
            seconds %= 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
    }
};

// Function to display both 12-hour and 24-hour clocks
void display(const TwelveHourClock& twelveHourClock, const TwentyFourHourClock& twentyFourHourClock) {
    twelveHourClock.displayTime(); // Displaying 12-hour clock time
    twentyFourHourClock.displayTime(); // Displaying 24-hour clock time
}

int main() {
    TwelveHourClock twelveHourClock; // Creating an instance of the 12-hour clock
    TwentyFourHourClock twentyFourHourClock; // Creating an instance of the 24-hour clock
    int choice = 0;

    while (choice != 4) { // Loop until user chooses to exit
        display(twelveHourClock, twentyFourHourClock); // Displaying both clocks
        cout << endl;
        cout << "Options: 1. Add One Hour   2. Add One Minute   3. Add One Second   4. Exit Program" << endl; // Displaying menu options
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) { // Switch statement to handle user choices
        case 1:
            twelveHourClock.addHour(1); // Adding one hour to 12-hour clock
            twentyFourHourClock.addHour(1); // Adding one hour to 24-hour clock
            break;
        case 2:
            twelveHourClock.addMinute(1); // Adding one minute to 12-hour clock
            twentyFourHourClock.addMinute(1); // Adding one minute to 24-hour clock
            break;
        case 3:
            twelveHourClock.addSecond(1); // Adding one second to 12-hour clock
            twentyFourHourClock.addSecond(1); // Adding one second to 24-hour clock
            break;
        case 4:
            cout << "Exiting program..." << endl; // Exiting program
            break;
        default:
            cout << "Invalid choice! Please enter a valid option." << endl; // Handling invalid input
            break;
        }
    }

    return 0;
}
