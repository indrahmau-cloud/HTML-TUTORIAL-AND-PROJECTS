 // #include<stdio.h>
// // // // //  void printstring(char arr[]);
// // // // // int main(){
// // // // //     char firstname[]="Rahul";
// // // // //     char lastname[]="Maurya";
// // // // //     printstring(firstname);
// // // // //     printstring(lastname);
// // // // //     return 0;
// // // // // }
// // // // // void printstring(char arr[]){
// // // // //     for(int i=0;arr[i]!='\0';i++){
// // // // //         printf("%c",arr[i]);
// // // // //     }
// // // // //     printf("\n");
// // // // // }
// // // // #include<stdio.h>
// // // // void printstring(char arr[]);
// // // // int main()
// // // // {
// // // //     char name[50];
// // // //     scanf("%s", name);
// // // //     printf("your name is %s", name);
// // // //     return 0;

// // // // }
// // // // void printstring(char arr[]){
// // // //     for(int i=0;arr[i]!='\0';i++){
// // // //         printf("%c",arr[i]);
// // // //     }
// // // //     printf("\n");
// // // #include<stdio.h>
// // // void printstring(char arr[]);
// // // int main()
// // // {
// // //     char fullname[100];
// // //     scanf("%s", fullname);
// // //     printf("your fullname is %s", fullname);
// // //     return 0;

// // // }
// // // void printstring(char arr[]){
// // //     for(int i=0;arr[i]!='\0';i++){
// // //         printf("%c",arr[i]);
// // //     }
// // //     printf("\n");
// // // }
// // #include<stdio.h>
// // void printstring(char arr[]);
// // int main()
// // {
// //     char str[100];
// //     gets(str);
// //     puts(str);
    
// //     return 0;

// // }
// // void printstring(char arr[]){
// //     for(int i=0;arr[i]!='\0';i++){
// //         printf("%c",arr[i]);
// //     }
// //     printf("\n");
// // }
// #include<stdio.h>
// void printstring(char arr[]);
// int countlength(char name[]);
// int main()
// {
//     char name[100];
//     fgets(name,100,stdin);
//     printf("length is:%d",countlength(name));

//     return 0;

// }
// int countlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//    return count -1;
// }
// void printstring(char arr[]){
//     for(int i=0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
// #include<stdio.h>
// #include<string.h>
// void printstring(char arr[]);
// int countlength(char name[]);
// int main(){
//     char name[]= "rahul";
//     int length = strlen(name);
//     printf("length is : %d",length);
//     return 0;

// }
// int countlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//      }
//     return count -1;
// }
// void printstring(char arr[]){
//     for(int i=0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char oldstr ="oldstr";
//     char newstr ="newstr";
//     strcpy(newstr,oldstr);
//     puts(newstr);
//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char firststr[]="Apple";
//     char secondstr[]="Banana";
//     printf("%d",strcmp(firststr,secondstr));
// }
// #include<stdio.h>
// #include<string.h>
// void salting(char password[]);
// int main()
// {
//     char password[100];
//     scanf("%s",password);
//     salting(password);
// }
// void salting(char password[])
// {
//     char salt[]="123";
//     char newpass[200];
//     strcpy(newpass,password);
//     strcat(newpass,salt);
//     puts(newpass);

// }
// #include<stdio.h>
// #include<stdio.h>
// void slice(char str[],int n ,int m);
// int main()
// {
//     char str[]= "hello world";
//     slice(str,3,6);
// }
// void slice(char str[],int n, int m){
//     char newstr[100];
//     int j =0;
//     for(int i=n;i<=m;i++,j++)
//     {
//         newstr[j]=str[i];
//     }
//     newstr[j]='\0';
//     puts(newstr);
// }
// #include<stdio.h>
// #include<string.h>
// int countvowels(char str[]);
// int main()
// {
//     char str[]="Rahul";
//     printf("vowels are:%d",countvowels(str));

// }
// int countvowels(char str[]){
//     int count = 0;
//     for (int i=0;str[i]!='\0';i++)
//     {
//         if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'||str[i]=='u'){
//             count ++;
//         }
//     }
// }