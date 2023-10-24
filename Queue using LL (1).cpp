  #include <stdio.h>
  #include <stdlib.h>

  struct node {
        int data;
        struct node *next;
  };

  struct node *front = NULL, *rear = NULL;

  struct node * createNode(int data) 
  {
        struct node *newnode = (struct node *)malloc(sizeof (struct node));
        newnode->data = data;
        newnode->next = NULL;
        return (newnode);
  }

  void enqueue(int data) 
  {
        struct node *ptr = createNode(data);
  
        if (rear==NULL) // rear==NULL is it this the very first element in Queue
         {
                front = rear = ptr;
                return;
        }
        rear->next = ptr;
        rear = ptr;
  }


  void dequeue() 
        struct node *tmp; 
		  
  
        if (front==NULL) // (front==NULL) -EMPTY QUEUE
        {
                printf("Queue is empty\n");
                return;
        } 
        else if (front == rear) // ONLY ONE NODE IN QUEUE
         {
                tmp = front;
                front = rear = NULL;
         }
         else  //MORE THAN ONE NODE IN QUEUE
         {
                tmp = front;
                front = front->next;
         }
        free(tmp);
  
        return;
  }


  void display()
 {
        struct node *tmp;

        if (front==NULL) // is front NULL
        {
                printf("Queue is empty\n");
        }
        else  // there are elements in the Queue
        {
                tmp = front;
        
                while (tmp!=NULL)
                {
                        printf("%3d", tmp->data);
                        tmp = tmp->next;
                }
                printf("\n");
        }
        return;
  } // END OF THE FUNCTION DISPLAY

  int main()
   {
        int data, ch;
  
        while (1)
         {
                printf("1. Enqueue\n2. Dequeue\n");
                printf("3. Display\n4. Exit\n");
                printf("Enter your choice:");
                scanf("%d", &ch);
        
                switch (ch) 
                {
                        case 1:
                                printf("Enter ur i/p to insert:");
                                scanf("%d", &data);
                                enqueue(data);
                                break;
                        case 2:
                                dequeue();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(0);
                        default:
                                printf("Please enter correct option\n");
                                break;
                } //END SWITCH
        }//END WHILE
        return 0;
  } //END MAIN

