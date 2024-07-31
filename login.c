#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){


char username[50];
char password[50];

char CorrectUSername[]="Anas";
char CorrectPassword[]="admin";

  printf("\nEnter the username: ");
 scanf("%49s",username);

  printf("\nEnter the password: ");
 scanf("%49s",password);

while(1){


if (strcmp(username,CorrectUSername)==0 &&strcmp(password,CorrectPassword)==0){

  printf("\nYour informations are correct");
  break;


}else{

printf("\nYour informations are incorrect");
}
break;




}



return 0;
}


