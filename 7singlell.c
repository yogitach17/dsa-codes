//program 7  create a single linked list.
#include<stdio.h>
#include<stdlib.h>
struct stud
{
 int roll;
 char name[30];
 int age;
 struct stud *next;
 };
  int main()
 {
    struct stud n1,n2,n3;
    struct stud *p;
    printf("enter the details of 1st student");
    printf("\nEnter roll number, name and age: ");
    scanf("%d %s %d",&n1.roll,&n1.name,&n1.age);
    
    printf("enter the details of 2nd student");
    printf("\nEnter roll number, name and age: ");
    scanf("%d %s %d",&n2.roll,&n2.name,&n2.age);
    printf("enter the details of 3rd student");
    printf("\nEnter roll number, name and age: ");
    scanf("%d %s %d",&n3.roll,&n3.name,&n3.age);
    n1.next=&n2;
     n2.next=&n3;
      n3.next=NULL;
      /*transverse the list and print the element*/
      p=&n1;  /*point to 1st element */
      while(p!=NULL)
      {
        printf("\n%d %s %d",p->roll,p->name,p->age);
        p=p->next;
      }
      return 0;}


      /*enter the details of 1st student
Enter roll number, name and age: 189
yogita
18
enter the details of 2nd student 
Enter roll number, name and age: 189
yashavi
19
enter the details of 3rd student
Enter roll number, name and age: 175
vanshika
20

189 yogita 18
189 yashavi 19
175 vanshika 20*/