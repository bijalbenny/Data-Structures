#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *head;

void insert_start();
void insert_end();
void insert_anyposition();
void delete_start();
void delete_end();
void delete_anyposition();
void display();

int main() {
    int choice;
    do {
        printf("\nEnter the choice\t1.Insertion at start\t2.Insert at end\t3.Insert at anyposition\t4.Deletion at start\t5.Deletion at end\t6.Deletion at anyposition\t7.Display\t8.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            insert_start();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_anyposition();
            break;
        case 4:
            delete_start();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_anyposition();
            break;
        case 7:
            display();
            break;
        case 8:
            break;
        default:
            printf("\nIncorrect choice\n");
        }
    } while (choice != 8);

    return 0;
}

void insert_start() {
    int item;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data ");
    scanf("%d", &item);

    if (temp == NULL)
        printf("\nno insertion");

    temp->data = item;
    temp->link = head;
    head = temp;
}

void insert_end() {
    int item;
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data ");
    scanf("%d", &item);
    temp->data = item;

    if (head == NULL) {
        head = temp;
        temp->link = NULL;
        return;
    }

    ptr = head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
    temp->link = NULL;
}

void insert_anyposition() {
    int key, item;
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the key");
    scanf("%d", &key);

    if (head == NULL) {
        insert_start();
        return;
    }

    else{
    	    printf("\nenter the data ");
            scanf("%d", &item);
    	    temp->data = item;	
	    ptr = head;
	    while (ptr->data != key && ptr->link != NULL)
		ptr = ptr->link;

	    temp->link = ptr->link;
	    ptr->link = temp;
	}
}

void delete_start() {
    struct node *ptr;

    if (head == NULL) {
        printf("\nList is empty. ");
        return;
    }

    ptr = head;
    head = head->link;
    free(ptr);
}

void delete_end() {
    struct node *temp, *ptr;

    if (head == NULL) {
        printf("\nList is empty.");
        return;
    }

    ptr = head;

    if (head->link == NULL) {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->link != NULL) {
        temp = ptr;
        ptr = ptr->link;
    }

    temp->link = NULL;
    free(ptr);
}

void delete_anyposition() {
    int pos;
    struct node *temp, *ptr;

    if (head == NULL) {
        printf("\nList is empty.");
        return;
    }

    printf("\nenter the pos");
    scanf("%d", &pos);

    ptr = head;

    if (pos == 1) {
        head = head->link;
        free(ptr);
        return;
    }

    for (int i = 1; i < pos && ptr != NULL; i++) {
        temp = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        printf("\nPosition not found.");
        return;
    }

    temp->link = ptr->link;
    free(ptr);
}

void display() {
    struct node *ptr;
    ptr = head;

    if (ptr == NULL) {
        printf("\nList is empty.");
        return;
    }

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

