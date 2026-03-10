# Disaster Resource Allocation System (C++)

## Project Overview

The **Disaster Resource Allocation System** is a console-based C++ application designed to manage and prioritize disaster-affected locations for efficient resource distribution.
The system uses **Linked Lists** to store affected locations and applies **searching and sorting algorithms** to ensure that resources are allocated to the most critical areas first.

This project demonstrates practical use of **data structures and algorithms** for solving real-world disaster management problems.

---

# Problem Statement

During disasters such as floods, earthquakes, or cyclones, relief resources like food, medicine, and water must be delivered to affected locations quickly. However, distributing resources without prioritization can delay help to highly critical areas.

The goal of this system is to:

* Maintain a dynamic list of disaster-affected locations
* Identify critical areas based on severity level
* Sort locations so the most urgent ones receive resources first
* Prevent duplicate entries for the same location

---

# Key Features

### 1. Add Disaster Locations

Users can add new affected locations with:

* Location ID
* Severity level (1–10)
* Required supplies

The system automatically checks for duplicate IDs and updates the existing record instead of inserting duplicates.

---

### 2. Display Locations

Shows all stored disaster locations and their details.

Example output

```
Location ID: L1
Severity: 9
Supplies: Food
```

---

### 3. Search Location

Users can search for a location using **Location ID**.

Algorithm used: **Linear Search**

Example

```
Enter Location ID: L2

Location Found
Severity: 5
Supplies: Water
```

---

### 4. Sort Locations by Severity

Locations are sorted so that **higher severity areas appear first**.

Algorithm used: **Merge Sort**

Before sorting

```
L1 (9) → L2 (5) → L3 (8)
```

After sorting

```
L1 (9) → L3 (8) → L2 (5)
```

---

### 5. Resource Allocation

Resources are distributed based on sorted severity levels.

Allocation example

```
Send supplies to L1
Send supplies to L3
Send supplies to L2
```

This follows a **Greedy Allocation strategy**.

---

# Data Structure Used

## Linked List

Each disaster location is stored as a node.

```
+-------------+-----------+-------------------+--------+
| LocationID  | Severity  | Required Supplies | Next   |
+-------------+-----------+-------------------+--------+
```

Example representation

```
[L1 | 9 | Food] → [L2 | 5 | Water] → [L3 | 8 | Medicine] → NULL
```

Advantages of using Linked Lists

* Dynamic memory allocation
* Efficient insertion
* Flexible data storage during unpredictable disaster situations

---

# Algorithms Used

| Algorithm         | Purpose                            | Time Complexity |
| ----------------- | ---------------------------------- | --------------- |
| Linked List       | Store locations dynamically        | O(n) insertion  |
| Linear Search     | Find a specific location           | O(n)            |
| Merge Sort        | Sort locations by severity         | O(n log n)      |
| Greedy Allocation | Prioritize high severity locations | O(n)            |

---

# System Workflow

```
User Input
    ↓
Add Disaster Location
    ↓
Linked List Storage
    ↓
Search / Display Operations
    ↓
Sort Locations by Severity
    ↓
Allocate Resources (Greedy Strategy)
```

---

# Program Menu

```
===== Disaster Resource Allocation System =====

1. Add Disaster Location
2. Display Locations
3. Search Location
4. Sort Locations by Severity
5. Allocate Resources
6. Exit
```

---

# Example Execution

### Input

```
Add Location
L1 severity 9 Food
L2 severity 5 Water
L3 severity 8 Medicine
```

### After Sorting

```
L1 → L3 → L2
```

### Resource Allocation

```
Send supplies to L1
Send supplies to L3
Send supplies to L2
```

---

# Project Structure

```
Disaster-Resource-Allocation-System
│
├── main.cpp
├── README.md
```

---

# How to Run the Project

### Step 1 — Compile the code

```
g++ main.cpp -o disaster_system
```

### Step 2 — Run the program

```
./disaster_system
```

---

# Future Improvements

* Add **priority queue implementation**
* Build **graph-based route optimization for delivery trucks**
* Add **web-based dashboard for visualization**
* Integrate **map APIs for location tracking**
* Store data in **database instead of memory**

---

# Learning Outcomes

This project helps understand:

* Implementation of **Linked Lists**
* Use of **searching algorithms**
* Efficient **sorting with Merge Sort**
* Applying **greedy strategies for resource allocation**
* Building **real-world problem solving using DSA**

---

# Technologies Used

| Technology    | Purpose                   |
| ------------- | ------------------------- |
| C++           | Core programming language |
| Linked List   | Data storage              |
| Merge Sort    | Priority sorting          |
| Linear Search | Location lookup           |

---

# Author

Anoorag Singh

Focus: Data Structures, Algorithms, and System Design
