// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct student s1;
//     s1.roll=23;
//     s1.cgpa=9;
//     //s1 name= "rahul";
//     strcpy(s1.name,"Rahul");

//     printf("student name=%s\n",s1.name);
//     printf("student rollno=%d\n",s1.roll);
//     printf("student cgpa=%f\n",s1.cgpa);
//     struct student s2;
//     s2.roll=23;
//     s2.cgpa=9;
//     //s1 name= "rahul";
//     strcpy(s2.name,"Rahul");

//     printf("student name=%s\n",s2.name);
//     printf("student rollno=%d\n",s2.roll);
//     printf("student cgpa=%f\n",s2.cgpa);


//     struct student s3;
//     s3.roll=33;
//     s3.cgpa=34.5;
//     //s1 name= "rahul";
//     strcpy(s3.name,"Rohit");

//     printf("student name=%s\n",s3.name);
//     printf("student rollno=%d\n",s3.roll);
//     printf("student cgpa=%f\n",s3.cgpa);
    
    
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// struct student{
//     char name[100];
//     int rollno;
//     float cgpa;
// };
// int main(){
//     struct student s1 =  {"shradha",1664,9.2};
//     printf("student roll=%d",s1.rollno);

//     struct student *ptr=&s1;
//     printf("student roll with ptr=%d\n1",(*ptr).rollno);
//     printf("student->rollno = %d\n",ptr->rollno);
//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// struct student{
//     char name[100];
//     int rollno;
//     float cgpa;
// };
// void printinfo(struct student s1);
// int main(){
//     struct student s1 =  {"shradha",1664,9.2};
//     printinfo(s1);

    
//     return 0;

// }
// void printinfo(struct student s1){
//     printf("student information:\n");
//     printf("student roll with ptr=%d\n",s1.rollno);
//     printf("student->rollno = %d\n",s1.rollno);
// }
 
// #include<stdio.h>
// #include<string.h>
// //use defined
// typedef struct student{
//     char name[100];
//     int rollno;
//     float cgpa;
// } stu;
// typedef struct computerengeneringstudent {

//     char name[100];
//     int rollno;
//     float cgpa;
// }coe;
// int main(){
//     coe s1;
//     strcpy(s1.name,"shradha");
//     s1.rollno=1667;
//     s1.cgpa=9.7;
//     printf("student name  is:%s\n", s1. name);

    
//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// typedef struct address{
//    int house_no;
//    int block;
//    char city [100];
//    char state[100];

// }adds;

// void printAdd(struct address adds);

// int main(){
//     struct address adds[5];
//     // input
//     printf(" enter info for person 1:");
//     scanf("%d",&adds[0].house_no);
//     scanf("%d",&adds[0].block);
//     scanf("%s",&adds[0].city);
//     scanf("%s",&adds[0].state);
    
//     printf(" enter info for person 2:");
//     scanf("%d",&adds[1].house_no);
//     scanf("%d",&adds[1].block);
//     scanf("%s",&adds[1].city);
//     scanf("%s",&adds[1].state);

//     printf(" enter info for person 3:");
//     scanf("%d",&adds[2].house_no);
//     scanf("%d",&adds[2].block);
//     scanf("%s",&adds[2].city);
//     scanf("%s",&adds[2].state);

//     printf(" enter info for person 4:");
//     scanf("%d",&adds[3].house_no);
//     scanf("%d",&adds[3].block);
//     scanf("%s",&adds[3].city);
//     scanf("%s",&adds[3].state);

//     printf(" enter info for person 5:");
//     scanf("%d",&adds[4].house_no);
//     scanf("%d",&adds[4].block);
//     scanf("%s",&adds[4].city);
//     scanf("%s",&adds[4].state);

//     printAdd(adds[0]);
//     printAdd(adds[1]);
//     printAdd(adds[2]);
//     printAdd(adds[3]);
//     printAdd(adds[4]);
     
//     return 0;
// } 
// void printAdd(struct address adds)
// {
//     printf("address is: %d ,%d,%s,%s",adds.house_no,adds.block,adds.city,adds.state);
// }
// #include<stdio.h>
// #include<string.h>
// struct vector{
//     int x;
//     int y;

// };
// void calculatesum( struct vector v1,  struct vector v2, struct vector sum );
// int main()
// {
//     struct vector v1={5,10};
//     struct vector v2={3,7};
//     struct  vector sum = {0};
//     calculatesum(v1,v2, sum);
//     return 0;
    
// }
// void calculatesum( struct vector v1,  struct vector v2, struct vector sum )
// {
//     sum.x=v1.x+v2.x;
//     sum.y=v1.y+v2.y;

//     printf("sum of x is:%d\n",sum.x);
//     printf("sum of y is:%d\n",sum.y);
// }

// #include<stdio.h>
// #include<string.h>
// struct complex{
//     int real;
//     int img;
// };
// int main()
// {
//     struct complex number1={5,8};
//     struct complex *ptr=&number1;
//     printf("real part:%d\n",ptr->real);
//     printf("img part:%d\n",ptr->img);

//     return 0;
// }