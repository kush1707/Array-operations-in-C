#include<stdio.h>
#define SIZE 40

int arr[SIZE];
int n;

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
void display()
{
    printf("The Array is: \n");
    for (int i = 0; i <=n-1; i++)
    {
        printf("%d  ",arr[i]);
    }
}
void l_insert()
{
    printf("Enter Data to be inserted: \n");
    int data;
    scanf("%d",&data);
    arr[n]=data;
    n++;
}
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
void main()
{
    create();
    i_insert();
    display();
}

