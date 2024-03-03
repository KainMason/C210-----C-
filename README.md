# Dual Clock System

This project implements a dual clock system in C++, featuring both 12-hour and 24-hour formats. It allows users to interactively add hours, minutes, or seconds to both clocks and see the updated time immediately. This was my first C++ project my C210 course. This README outlines the project structure, how to run the program, and future enhancement possibilities.

## Developer Information

- **Developer:** Kain Mason
- **Date:** January 28, 2024
- **Purpose:** Project one Module 3: Clock

## Features

- **Two Clock Formats:** The program supports both 12-hour and 24-hour clock formats, displaying the current time in both simultaneously.
- **Interactive Time Updates:** Users can add one hour, one minute, or one second to both clocks through a simple menu-driven interface.
- **Time Normalization:** The program correctly handles time rollover (e.g., 59 minutes to 60, 23 hours to 0).


## Menu Options

Once the program is running, you'll be presented with the following options:

1. **Add One Hour:** Increment the time of both clocks by one hour.
2. **Add One Minute:** Increment the time of both clocks by one minute.
3. **Add One Second:** Increment the time of both clocks by one second.
4. **Exit Program:** Exit the application.

## Future Enhancements

- **Error Handling:** Implement robust input validation to handle non-numeric and out-of-range inputs gracefully.
- **Custom Time Adjustments:** Allow users to add custom amounts of time instead of the fixed increments currently supported.
- **AM/PM Correction:** Improve the 12-hour clock's AM/PM flip logic to correctly handle transitions through midnight and noon.
- **User-Friendly 24-Hour Display:** Enhance the 24-hour clock display to be more intuitive, possibly indicating the start of a new day.
- **Optimization and Refactoring:** Reduce code duplication and improve efficiency where possible, potentially through inheritance or utility functions.
- **Unit Testing:** Develop a comprehensive suite of unit tests to ensure accuracy and reliability, especially for edge cases.

## License

This project is open-source and available under the [MIT License](LICENSE.md).
