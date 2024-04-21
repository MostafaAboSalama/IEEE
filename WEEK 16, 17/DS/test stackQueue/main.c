#include <stdio.h>
#include "Stack.h"
#include "Queue.h"
#include "Global.h"

void DisplayCustomer(ElementType customer) {
    printf("Name: %s\n", customer.Name);
    printf("ID: %d\n", customer.ID);
    printf("Model Year: %d\n", customer.modelYear);
    printf("------------------\n");
}


void DisplayCustomersInMostRecentOrder(Queue* pq) { // need edit
    Stack tempStack;
    InitializeStack(&tempStack);
    int pos = pq->front;
    for (int s = 0; s < pq->size; s++) {
        Push(pq->entry[pos],&tempStack);
        pos = (pos + 1) % MAX_QUEUE_SIZE;
    }
    TraverseStack(&tempStack, DisplayCustomer);
}

int main() {
    Queue customerQueue;
    InitializeQueue(&customerQueue);

    int choice;
    ElementType customer;

    do {
        printf("1. Add a New Customer.\n");
        printf("2. Serve a Customer.\n");
        printf("3. How many Customers are waiting?\n");
        printf("4. Display Customers Information.\n");
        printf("5. Display Customers information in a 'most-recent' Order.\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter customername: ");
                scanf("%s", customer.Name);
                printf("Enter customer ID: ");
                scanf("%d", &customer.ID);
                printf("Enter customer model year: ");
                scanf("%d", &customer.modelYear);
                Enqueue(customer, &customerQueue);
                break;
            case 2:
                if (!QueueEmpty(&customerQueue)) {
                    Dequeue(&customer, &customerQueue);
                    printf("Serving customer:\n");
                    DisplayCustomer(customer);

                } else {
                    printf("No customers to serve.\n");
                }
                break;
            case 3:
                printf("Number of customers waiting: %d\n", QueueSize(&customerQueue));
                break;
            case 4:
                printf("Customers Information:\n");
                TraverseQueue(&customerQueue, DisplayCustomer);
                break;
            case 5:
                printf("Customers Information in most-recent order:\n");
                DisplayCustomersInMostRecentOrder(&customerQueue);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 6);

    return 0;
}
