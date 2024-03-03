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

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


<h2 style="color:red;">Dual Clock System Project Reflection</h2>


## Overview

I developed a C++ program that displays time in both 12-hour and 24-hour formats. This project is really handy for those who want to understand time in different formats, are involved in software testing, or just prefer having both options available. It's designed to be interactive, allowing users to add time increments easily.

## Achievements

### Things I Did Well

- **Class Usage:** I effectively utilized classes to structure my code, making it more organized and reusable.
- **User Interface:** I implemented an easy-to-follow menu system that makes the program accessible to all users.
- **Time Management:** Ensuring the clock always displays the correct time, especially through day changes, was a key focus and something I achieved well.

### Opportunities for Improvement

- **Input Validation:** Implementing additional checks to prevent crashes from unexpected inputs would enhance the program's robustness.
- **AM/PM Logic:** Refining the logic for transitioning between AM and PM would improve accuracy.
- **Code Optimization:** Eliminating redundant code could streamline operations and facilitate future modifications.
- **Comprehensive Testing:** Incorporating thorough testing would ensure consistent program performance under various scenarios.

## Challenges and Solutions

Dealing with time normalization was complex, especially ensuring proper transitions from minutes to hours and handling AM/PM changes. I tackled these challenges by thoroughly planning, conducting extensive testing, and seeking solutions through C++ documentation and community resources like Stack Overflow.

## Helpful Resources

Throughout this project, I relied on:
- C++ guides and documentation for technical understanding,
- Online forums like Stack Overflow for community advice,
- Git for version control,
- An IDE for efficient coding and debugging.

## Transferable Skills

This project helped me hone several skills applicable to future endeavors:
- **Object-Oriented Programming (OOP):** A fundamental skill across many programming tasks.
- **Error Handling and Input Validation:** Crucial for building reliable software.
- **Time Management Logic:** Useful in any project involving scheduling or timing functions.

## Ensuring Maintainability and Adaptability

To make the program user-friendly for future developers, I focused on:
- Clear code organization and comments explaining the purpose and functionality of code segments,
- Adherence to consistent coding standards and naming conventions,
- A modular design approach allowing for easy updates and modifications without impacting the entire system.

By emphasizing these aspects, I've created not just a functional tool but also a project that's maintainable, readable, and adaptable for future needs.


This project is open-source and available under the [MIT License](LICENSE.md).
