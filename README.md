
Question 1:https://onlinegdb.com/X4mzWw7YU



# Railway Reservation System (C++)

## Project Description

The **Railway Reservation System** is a simple console-based C++ project that demonstrates the use of **Object-Oriented Programming (OOP)** concepts. It allows users to add train records, display all train records, and search for a train by its number. The project also demonstrates constructors, copy constructors, destructors, static members, and the use of vectors.

---

## Features

* Add new train records.
* Display all train records.
* Search train by train number.
* Count total train objects using a static data member.
* Demonstrates default, parameterized, and copy constructors.
* Uses vectors for dynamic storage of train records.

---

## OOP Concepts Used

* Class and Object
* Encapsulation
* Constructors

  * Default Constructor
  * Parameterized Constructor
  * Copy Constructor
* Destructor
* Static Data Member
* Static Member Function
* Vector (Dynamic Array)
* Function Overloading (Constructors)

---

## Classes

### 1. Train Class

Stores information about a train.

**Data Members**

* Train Number
* Train Name
* Source
* Destination
* Train Time
* Static Train Count

**Member Functions**

* Input Train Details
* Display Train Details
* Get Train Number
* Get Train Count

---

### 2. RailwaySystem Class

Manages all train records using a vector.

**Functions**

* Add Train
* Display All Trains
* Search Train by Number

---

## Menu Options

1. Add Train Record
2. Display All Train Records
3. Search Train By Number
4. Exit

---

## Sample Output

```
===== Railway Reservation System =====
1. Add Train Record
2. Display All Train Records
3. Search Train By Number
4. Exit

Enter Your Choice: 1

Enter Train Number : 101
Enter Train Name : Rajdhani Express
Enter Source : Delhi
Enter Destination : Mumbai
Enter Train Time : 08:30 PM

Train Record Added Successfully.
```

---

## Advantages

* Simple and user-friendly interface.
* Demonstrates important OOP concepts.
* Dynamic storage using vector.
* Easy to modify and extend.

---

## Limitations

* Data is stored temporarily (no file handling).
* No passenger reservation feature.
* No ticket booking or cancellation.
* No seat availability management.

---

## Future Enhancements

* Add passenger details.
* Ticket booking and cancellation.
* Seat availability checking.
* File handling for permanent storage.
* Admin login system.
* Fare calculation.
* Train update and delete options.

---

## Conclusion

This Railway Reservation System is a beginner-friendly C++ project that effectively demonstrates the fundamentals of Object-Oriented Programming. It provides a basic framework for train record management and can be expanded into a complete railway reservation application by adding advanced features such as file handling, passenger management, ticket booking, and database connectivity.
