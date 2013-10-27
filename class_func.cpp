//Souriya Khaosanga
//CS162 HW#5
//class_func.cpp
//This file is to keep track of all the functions
//related to the classes.  It also includes
//some prototype functions used within the 
//classes.

//include the class.h file here
#include "class.h"


void read(char phrase[],int size, char input[]);
//function reads in an array given a prompt and 
//char size

void display(char phrase[],char output[]);
//function displays the phrase and the associated
//output

void disp_animal_list(node_pet * head);
//Function uses traversal to display each
//member of the pet node.

bool again();
//function returns true or false

void build_host_list(node_host * & head, int &number_host);
//This function is used to build up the host linked list list.

void disp_host_list(node_host * head);
//this function is used to display the host_list

             

node_host::~node_host()//node_host destructor
{

     delete adopt;
     delete next;
     next = NULL;//set the next pointer to NULL
     adopt = NULL;          
}


node_pet::~node_pet()//node_pet destructor
{

     delete next;
     next = NULL;              
}


host::host()
{
     //sets all the initial values to
     //null    
     name[0]='\0';
     address[0]='\0';
     num_pet = 0;
     comment[0]='\0';
}

    
//this function is the add/input function
//The function has only one argument which 
//is the record number of the data.
void host::add(int rec_num)
{
     int num; 
     num = rec_num +1;
     //initializes a num to offset the value
     //of the host record being added.
     cout<<"\t--------------Family Information----------"
     <<"------"<<endl<<endl;
     cout<<"\t                  Number"<<num<<"        "
     "       "<<endl;
     read("\tName: ",SIZE,name);
     read("\tAddress: ",SIZE,address);
     read("\tComment: ",SIZE2,comment);
     cout<<"\tNumber of pets: ";
     cin>>num_pet;//Input for the number of pets
                  //a host.
     cin.clear();//Clear the input.
     cin.ignore(100,'\n');        
     //The statements above are inputing the information
}

//Function displays the host information
//that was input by the user. There are
//no arguments
void host::disp()
{
     cout<<endl;
     cout<<"\t---------------Family Information-----------"
     "-----"<<endl<<endl;
     display("\tHost name: ", name);
     display("\tAddress: ", address);
     display("\tPersonality traits: ", comment);
     cout<<"\tNumber of pets: "<<num_pet;
     cout<<endl;
 
}

//This is the constructor for the
//pet function.  It sets the values of 
//each member to null.
pet::pet()
{
     name[0]='\0';
     id='\0';
     age='\0';
     weight;
     breed[0]='\0';
     comment[0]='\0';
     reason[0]='\0';
     length[0]='\0';
     date[0]='\0';

          
}

//This function displays the members of 
//the pet class. There are no arguments.
void pet::disp()
{
     //This function displlays each the pet information.
     //Each member is displayed.
     cout<<endl;
     cout<<"\t---------------Animal Information-----------"
     "------"<<endl<<endl;
     display("\tPet name: ", name);
     display("\tBreed : ", breed);
     display("\tBreed2: ", breed2);
     cout<<"\tAge: "<<age<<endl;
     cout<<"\tWeight: "<<weight<<endl;
     cout<<"\tPersonality traits: "<<comment<<endl;
     cout<<"\t-----------------historical info------------"
     "----"<<endl;
     display("\tReason in shelter: ", reason);
     display("\tLength in shelter: ", length);
     display("\tDate available for adoption: ", date);
}

//This function prompts &
//inputs the pet information.
//The argument is the record number being
//added.
void pet::get(int rec_num)
{
     int num = rec_num+1;
     //Num is used to offset the data since
     //0 is not considered to be a record.
     //Below is prompting the user and 
     //inputting the information for each pet 
     //member.
     cout<<endl;
     cout<<"\t---------------Animal Information-----------"
     "-----"<<endl<<endl;
     cout<<"\t               Pet ID #: "<<num<<"            "
     "    "<<endl;
     read("\tName: ",SIZE, name);
     read("\tBreed: ",SIZE, breed);
     read("\tBreed2: ",SIZE,breed2);
     read("\tPersonality traits: ",SIZE2,comment);
     cout<<"\tAge: ";
     cin>>age;
     cout<<"\tWeight: ";
     cin>>weight;
     cout<<endl;
     cin.clear();//clear the input prompt
     cin.ignore(100,'\n');
      
}

//This function is used to access the private 
//members of the pet class.  There are no arguments
//in this fucntion.
void pet::hist()
{
     //Displays information regarding the historical
     //info.
     cout<<endl;
     cout<<"\t-----------------Historical Info-------------"
     "----"<<endl;
     read("\tReason in shelter: ",SIZE2, reason);
     read("\tLength in shelter: ",SIZE, length);
     read("\tDate available for adoption : ",SIZE, date);
}
