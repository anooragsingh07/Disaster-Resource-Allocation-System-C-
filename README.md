# Disaster Resource Allocation System (C++)

The Disaster Resource Allocation System is a console-based C++ application designed to manage and prioritize disaster-affected locations for efficient resource distribution. The system uses Linked Lists to store affected locations and applies searching and sorting algorithms to ensure that resources are allocated to the most critical areas first.

## Features

- **Add Disaster Location**: Register new disaster-affected locations with severity levels and required supplies
- **Display Locations**: View all registered disaster locations
- **Search Location**: Find specific locations by their ID
- **Sort by Severity**: Prioritize locations using Merge Sort algorithm (highest severity first)
- **Allocate Resources**: Generate resource allocation orders based on severity priority

## Data Structures & Algorithms Used

- **Linked List**: Dynamic storage of disaster locations
- **Merge Sort**: O(n log n) sorting algorithm for prioritizing locations by severity
- **Linear Search**: Finding specific locations by ID

## How to Compile and Run

```bash
g++ disaster_resource_allocation.cpp.cpp -o disaster_system
./disaster_system
```

## Usage

1. Run the program
2. Use the menu to add disaster locations with:
   - Location ID
   - Severity Level (1-10)
   - Required Supplies
3. Sort locations by severity to prioritize critical areas
4. Generate resource allocation orders

## Example

```
===== Disaster Resource Allocation System =====
1. Add Disaster Location
2. Display Locations
3. Search Location
4. Sort Locations by Severity
5. Allocate Resources
6. Exit

Enter your choice: 1
Enter Location ID: LOC001
Enter Severity Level (1-10): 8
Enter Required Supplies: Food,Water,Medicine
```

## Author

Anoorag Singh
