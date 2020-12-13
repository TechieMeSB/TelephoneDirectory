#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int i=0,j;
struct person{          //Stucture defination to hold subscriber's name and phone number
     char name[20];
     long telno;
};
struct person obj[50];


void appendData()     // Add subscriber to an Array
{
      printf("*****Add Record****\n");
      printf("Enter Name : ");
      scanf("%s",obj[i].name);
      printf("Enter Telephone No. : ");
      scanf("%ld",&obj[i].telno);
      i++;
}
void showAllData()    //Display all records
{
      printf("\n*****Display All Records*****\n");
      printf("\n\n\t\tName\t\t\tTelephone No.");
      printf("\n\t\t=====\t\t\t===============\n\n");
    for(j=0;j<i;j++)    
      {
      
      printf("%20s\t %30ld\n",obj[j].name,obj[j].telno);
      }
    printf("Records found %d",j);
}
void findData()  //Finds particular subscriber by name
{
      char name[20];
      int flag=0;
      printf("\n*****Display Specific Records*****\n");
      printf("\nEnter Name : ");
      scanf("%s",name);
      for(j=0;j<i;j++)
      {
          if(strcmp(obj[j].name,name)==0)
         {
	          flag=1;
            printf("\n\nName   :  %s",obj[j].name);
            printf("\n Telephone No : %ld",obj[j].telno);
         }
      }
 
    if(i==j&&flag==0)
         printf("\n\n No Data Found");          
}
void sedit()   // Searches and Edit subscribers detail
{
     findData();
     if(i==j&&flag==0)
         printf("\n No Data Found\n\n\n");
   else
  {  
 printf("/n Enter New number:");
 	 scanf("%ld",&obj[key].telno);
   }
}



int main()      //Begins main function
{
      char choice;
      while(1)
      {

          printf("\n*****TELEPHONE DIRECTORY*****\n\n");  //Displays Menu for subscriber to choose
          printf("1) Append Record\n");
          printf("2) Find Record\n");
          printf("3) Read all record\n");
          printf("4) Edit a record\n");
          printf("5)exit\n");
          printf("Enter your choice : ");
          scanf("%s",&choice);

          switch(choice)
          {
               case'1' : //call append record
                      appendData();
                      break;
               case'2' : //call find record
                      findData();
                      break;
               case'3' : //Read all record
                      showAllData();
                      break;
               case'4' ://Edit record
  		                sedit();
                      break;
  	           case '5':exit(0);
          }
      }
}


