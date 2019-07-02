#include<stdio.h>
  #include<stdlib.h>

  struct node {
        int data;
        struct node *prev, *next;
  };

  struct node *head = NULL, *tail = NULL;

  struct node *createNode(int);
  void insertNode(int);
  void deleteNode(int);
  void display();

  struct node* createNode(int data) {
        struct node *ptr = (struct node *)malloc(sizeof (struct node));
        ptr->data = data;
        ptr->prev = NULL;
        ptr->next = NULL;
        return (ptr);
  }


   /* insertion in circular linked list */
  void insertNode(int data) {
        struct node *temp, *ptr = createNode(data);
        /* list is empty */
        if (!head) {
                head = ptr;
                head->next = head;
                head->prev = head;
                tail = head;
                return;
        } else {
                /* only one node present in list */
                if (head->next == head && head->prev == head) {
                        temp = head;
                        ptr->next = temp;
                        ptr->prev = temp->prev;
                        temp->prev = ptr;
                        temp->next = ptr;
                        tail = ptr;
                } else {
                        /* do insertion next to head */
                        temp = head->next;
                        ptr->next = temp;
                        ptr->prev = temp->prev;
                        temp->prev->next = ptr;
                        temp->prev = ptr;
                }
        }
  }


  void deleteNode(int data) {
        struct node *ptr, *temp = head;
        /* if list is not present */
        if (head == NULL) {
                printf("Data unavailable\n");
                return;
        } else if (temp->data == data) {
                /* deleting head node */
                if (head == tail) {
                        temp->prev = NULL;
                        temp->next = NULL;
                        free(temp);
                        head = tail = NULL;
                } else {
                        temp->next->prev = tail;
                        tail->next = temp->next;
                        head = temp->next;
                        temp->next = temp->prev = NULL;
                        free(temp);
                }
        } else {
                while (temp->next != head && temp->data != data) {
                        ptr = temp;
                        temp = temp->next;
                }
                if (temp->next == head && temp->data != data) {
                        printf("Given data unvavailable in list\n");
                        return;
                } else if (temp->next != head && temp->data == data) {
                        /* deleting any node in between head & tail */
                        ptr->next = temp->next;
                        temp->next->prev = temp->prev;
                        temp->next = NULL;
                        temp->prev = NULL;
                        free(temp);
                        printf("Data deleted successfully\n");
                } else if (temp->next == head && temp->data == data) {
                        /* deleting the tail node */
                        ptr->next = temp->next;
                        temp->next->prev = ptr;
                        tail = ptr;
                        free(temp);
                        printf("Data deleted successfully\n");
                }
        }
  }

  /* traversing the list */
  void display() {
        struct node *ptr = head;
        int i = 0;
        while (ptr) {
                printf("%-3d\t", ptr->data);
                if (ptr->next == head)
                        break;
                ptr = ptr->next;
                i++;
        }
        printf("\n");
  }

  int main() {
        int ch, data;
        printf("\nMohini Vaish\n");
   printf("\n doubly circular linked list  Implementation \n");

        while (1) {printf("\n************************ MENU *******************************\n");
                     printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");

                scanf("%d", &ch);
                switch (ch) {
                        case 1:
                                printf("Enter data to insert:");
                                scanf("%d", &data);
                                insertNode(data);
                                break;
                        case 2:
                                printf("Enter data to delete:");
                                scanf("%d", &data);
                                deleteNode(data);
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(0);
                        default:
                                printf("please enter right option\n");
                                break;
                }
        }
        return 0;
  }
