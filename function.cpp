//Souriya Khaosanga
//CS162 HW#5
//function.cpp
//This file contains the functions
//used through out the program.

#include "class.h"

//Prototype functions here.
void read(char phrase[],int size, char input[]);
//function reads in an array given a prompt and 
//char size
void display(char phrase[],char output[]);
//function displays the phrase and the associated
//output

void disp_animal_list(node_pet * head);
//This function displays the animal list.

bool again();
//function returns true or false

bool again2();
//This function asks the user if they would
//liked to adopt a pet.

void build_host_list(node_host * & head, int &number_host);
//This function is used to build a host linked list.

void disp_host_list(node_host * head);
//This function is used to display the host linked list.

void adopt(node_pet * head, node_host *&head_host, int id);
//Function is used to adopt and link a host to a pet.






//Functions begin here.
//This function is the adopt function.  The arguments are
//first the pointer to a pet_node, second a pointer
//to a host_node by reference, third the id number of
//the pet being adopted.

void adopt(node_pet * head, node_host *&head_host, int id)
{
     node_pet * current= head; //current points to head
     
     while (current!=NULL) //while current not null.
     {
     
           if(current->pet_num==id)
           //if ID# matches the input of the user
           {
               head_host->adopt=current;
               //set the head host adopt pointer to 
               //the current.
               current = NULL;
               //Set the current to null for
               //stopping condition.
           }
           else
           {
               current = current->next; 
               //continute to traverse.                
           }
     }        
}

//Welcome function takes no arguments.  It displays
//information for the prototype Humane Society 
//program.
void welcome()
{
     cout<<endl;
     cout<<"\tWelcome to the Prototype Humane Society "
     "adoption info."<<endl;
     cout<<"\tIt stores information regarding pets and "
     "host families."<<endl;
     cout<<endl;
}


//This function displays an input and outputs a member.
//The arguments are the phrase array, and member 
//array that is being output.
void display(char phrase[],char output[])
{
     cout<<phrase<<output<<endl;
}

//This function prompts the user to see if
//they would like go continue.  There are no
//arguments in the function.
bool again()
{
    char response;
    cout <<"\tDo you want another? y/n ";
    cin >>response;
    cin.ignore(100,'\n');
    if (response == 'y' || response =='Y')
    {
           cout<<endl;          
           return true;
    }
    return false;
}


//This function asks the user if they want to 
//add another host family. It has no argments
//and returns a true or false value.
bool again2()
{
    char response;
    cout <<endl;
    cout <<"\tDo you want another host family? y/n ";
    cin >>response;
    cin.ignore(100,'\n');
    if (response == 'y' || response =='Y')
    {
           cout<<endl;          
           return true;
    }
    return false;
}


//This function reads in to an input. 
//The arguments are the prompt, size of the input
//and the array where the user is inputing.
void read(char phrase[],int size, char input[])
{
    cout<<phrase;
    cin.get(input, size,'\n');
    cin.ignore(100,'\n');
}

//This function builds the animal list.
//It's arguments are first a pointer by
//reference to a pet node.  Second, the
//animal number (ID);
void build_animal_list(node_pet * & head, 
int &number_animal)
{
    if (head==NULL) //if no set exists.
    {
        head = new node_pet;//create a head ptr.
        head->next= NULL;//Set head to null
        head->head.get(number_animal);
        //input the information
        head->head.hist();
        //input the second half of info.
        number_animal++;
        //incrememnt the number of animals.
        head->pet_num=number_animal;
        //Set the pet id number.
    }
    else
    {
        node_pet * current = head; 
        //make a current pointer
        while (current->next)//traverse TO last node
           current= current->next;
        current->next = new node_pet; 
        //Connect the pointer up.
        current= current->next; //travel TO new last 
        current->head.get(number_animal); 
        //input the data.
        current->head.hist();
        current->next = NULL;
        //set the last node to null.
        number_animal++;
        current->pet_num=number_animal;
        //set the pet ID number
     }
}


//This function displays the animal list via 
//iteration method. The argument is the 
//pointer to a pet node. 
void disp_animal_list(node_pet * head)
{
     cout<<endl;
     while (head != NULL)
     {
        cout<<"------>";
        cout<<"\n\t\t\tPet ID# :"<<head->pet_num;
        head->head.disp(); //output the data
        head = head->next; //traverse to the next
     }
     cout<<endl;
}


//This function is used to build up the host
//list.  The arguments are host node pointer 
//by reference, and the host number by ref.
void build_host_list(node_host * & head, 
int &number_host)
{

     if (head==NULL)
     {
        head = new node_host;
        head->next = NULL;
        head->head.add(number_host);
        number_host++;
     }
     else
     {
        node_host * current = head; 
        //make a current pointer
        while (current->next)//traverse to last node
           current= current->next;
        current->next = new node_host; //connect up
        current= current->next; //travel TO new last 
        current->head.add(number_host);
        //input the data
        current->next = NULL;
        number_host++;
        //increment host number up by one
     }
}

//This function displays the host linked list.
//the arguemtn is a pointer to the head node list.
void disp_host_list(node_host * head)
{
     cout<<"------>";
     cout<<endl;
     cout<<"\tThis is a list of hosts: ";
     cout<<"\n\n\t "<<endl;
     while (head != NULL)
     {
        head->head.disp(); //output the data
        head = head->next; //traverse to the next
     }
}

//These are directions.  No arugments.
void instructions_pet()
{

     cout<<endl;
     cout<<"Type->";
     cout<<"\tPlease enter all the animals that";
     cout<<endl;
     cout<<"\tare available in the animal shelter: ";
     cout<<endl;
     cout<<endl;
}

//These are directions.  No arugments.
void instructions_host()
{
     cout<<endl;
     cout<<"Type->";
     cout<<"\tNow please enter a host that would"
     " like"<<endl;
     cout<<"\tto adopt an animal: "<<endl;
}
 


