//This is a c program demonstrating creation and operations on array
#include<stdio.h>
#define SIZE 40

int arr[SIZE];
int n;
// create an array of size n.
void create()
{
    printf("Enter the size of Array: \n");
    scanf("%d",&n);
    printf("Enter Data into Array one by one: \n");
    for(int i=0;i<=(n-1);i++)
    {
        scanf("%d",&arr[i]);
    }
}
// function to display array
void display()
{
    printf("The Array is: \n");
    for (int i = 0; i <=n-1; i++)
    {
        printf("%d  ",arr[i]);
    }
}

// insert element at end
void l_insert()
{
    printf("Enter Data to be inserted: \n");
    int data;
    scanf("%d",&data);
    arr[n]=data;
    n++;
}
// insert element at start
void f_insert()
{
    printf("Enter Data you want to insert: \n");
    int data;
    scanf("%d",&data);
    int i;
    for ( i = n;i>= 1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=data;
    n++;
}

//insert element at users choice loaction
void i_insert()
{
    printf("Enter Data you want to insert: \n");
    int data;
    scanf("%d",&data);
    printf("Enter the index where  you want to insert: \n");
    int index;
    scanf("%d",&index);
    int i;
    for ( i = n;i>= index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=data;
    n++;
}
//function to delete an element from the array
void delete()
{
    printf("\nEnter loc of element to be deleted ");
    int loc;
    scanf("%d",&loc);
    int i;
    for (i = loc-1;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }   
    n--; 
}
// function to search an element in an array using linear search
void l_search()
{
    printf("Enter element to be searched \n");
    int item;
    scanf("%d",&item);
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==item)
            printf("Element found at location %d \n",i+1);
    }
    
}
void main()
{
    create();
    l_search();
    display();
    f_insert();
    l_insert();
    i_insert();
    delete();
}
