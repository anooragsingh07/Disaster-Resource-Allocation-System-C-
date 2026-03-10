#include <iostream>
using namespace std;

struct Node {
    string locationID;
    int severity;
    string supplies;
    Node* next;

    Node(string id, int sev, string sup) {
        locationID = id;
        severity = sev;
        supplies = sup;
        next = NULL;
    }
};

Node* head = NULL;

void addLocation() {

    string id, supplies;
    int severity;

    cout << "\nEnter Location ID: ";
    cin >> id;

    cout << "Enter Severity Level (1-10): ";
    cin >> severity;

    cout << "Enter Required Supplies: ";
    cin >> supplies;

    Node* temp = head;

    // Check if location already exists
    while(temp != NULL) {

        if(temp->locationID == id) {

            cout << "\nLocation already exists.\n";
            cout << "Updating severity and supplies...\n";

            temp->severity = severity;
            temp->supplies = supplies;

            return;
        }

        temp = temp->next;
    }

    // Create new node if not found
    Node* newNode = new Node(id, severity, supplies);

    if(head == NULL) {
        head = newNode;
        return;
    }

    temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    cout << "\nNew location added successfully.\n";
}

void displayLocations() {
    if(head == NULL) {
        cout << "\nNo locations available.\n";
        return;
    }

    Node* temp = head;

    cout << "\nLocations List\n";
    cout << "-----------------------------\n";

    while(temp != NULL) {
        cout << "Location ID: " << temp->locationID << endl;
        cout << "Severity: " << temp->severity << endl;
        cout << "Supplies: " << temp->supplies << endl;
        cout << "-----------------------------\n";

        temp = temp->next;
    }
}

void searchLocation() {

    string id;
    cout << "\nEnter Location ID to search: ";
    cin >> id;

    Node* temp = head;

    while(temp != NULL) {
        if(temp->locationID == id) {
            cout << "\nLocation Found\n";
            cout << "Severity: " << temp->severity << endl;
            cout << "Supplies Needed: " << temp->supplies << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Location not found.\n";
}

Node* merge(Node* a, Node* b) {

    if(!a) return b;
    if(!b) return a;

    Node* result;

    if(a->severity > b->severity) {
        result = a;
        result->next = merge(a->next, b);
    }
    else {
        result = b;
        result->next = merge(a, b->next);
    }

    return result;
}

void split(Node* source, Node** front, Node** back) {

    Node* slow = source;
    Node* fast = source->next;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

Node* mergeSort(Node* headRef) {

    if(headRef == NULL || headRef->next == NULL)
        return headRef;

    Node* a;
    Node* b;

    split(headRef, &a, &b);

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a, b);
}

void sortLocations() {
    head = mergeSort(head);
    cout << "\nLocations sorted by severity (Highest first).\n";
}

void allocateResources() {

    if(head == NULL) {
        cout << "\nNo locations available.\n";
        return;
    }

    cout << "\nResource Allocation Order\n";
    cout << "-----------------------------\n";

    Node* temp = head;

    while(temp != NULL) {

        cout << "Send supplies to Location: " << temp->locationID << endl;
        cout << "Severity: " << temp->severity << endl;
        cout << "Supplies: " << temp->supplies << endl;
        cout << "-----------------------------\n";

        temp = temp->next;
    }
}

int main() {

    int choice;

    while(true) {

        cout << "\n===== Disaster Resource Allocation System =====\n";
        cout << "1. Add Disaster Location\n";
        cout << "2. Display Locations\n";
        cout << "3. Search Location\n";
        cout << "4. Sort Locations by Severity\n";
        cout << "5. Allocate Resources\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addLocation();
                break;

            case 2:
                displayLocations();
                break;

            case 3:
                searchLocation();
                break;

            case 4:
                sortLocations();
                break;

            case 5:
                allocateResources();
                break;

            case 6:
                cout << "\nProgram terminated.\n";
                return 0;

            default:
                cout << "\nInvalid choice.\n";
        }
    }
}