//Souriya Khaosanga
//CS162 HW#5
//class.h
//This program is designed to incorporate
//linked list to the previous assignment.
//The difference between the two are the 
//use of linked list.  This creates a link
//between two different types of data which
//is something that was unable to be done
//without linked list.  The program allows
//for a user to create host and attach a pet 
//using the adopt option.
//Algorithm (see attached pdf)
//1.Program prompts the user and displays 
//  information about the program.
//2.Ask the user to enter in the animal 
//  information. 
//  a.If the user wants to input more animals
//    then repeat step 2. 
//3.Ask the user to input family/host data.
//4.Adopt a pet by linking the host to the pet.
//  a.Repeat step 3-4 until complete.
//5.Display the host.
//6.End program.

//This file contains all the class, struct and
//constants used in the program.  


//The program begins here!
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;


//Constants are located here.
const int SIZE = 25; //size of information arrays
const int SIZE2 = 40; //size of comment arrays




//Class definitiions begin here.
//This is the specification class pet data 
//and class host data type.
class host
{
      public:
              host(); //constructor
              void add(int rec_num); 
              //reads in all the members of host data type
              void disp();
              //read in the class members
             
      private:
              char name[SIZE];
              //name of the host family
              char address[SIZE];
              //address of the host family
              int num_pet;
              //number of pets the host family
              //already has at home.
              char comment[SIZE2];
              //any other additional information
              
};


//This is the pet class.  It is the specification
//of the pet class.
class pet
{
      public:
              pet(); //constructor
              void get(int rec_num);
              //inputs the information for the pet data type
              void disp();
              //displays the information in the pet public 
              //data type
              void hist();
              //displays the private members from the pet 
              //data type
              char name[SIZE];
              //array for the name of the pet
              int id, age;
              //stores int value for the age and id number
              double weight;
              //stores the weight as a decimal number
              char breed[SIZE];
              //stores the breed type
              char breed2[SIZE];
              //stores another category for breed
              char comment[SIZE2];
              //stores comments for the pet
      private:
              char reason[SIZE2];
              //stores the reason why animal is in 
              //shelter
              char length[SIZE];
              //stores the length the animal has been
              //in the shelter
              char date[SIZE];
              //array for the date available for
              //adoption
};

//This is the first node for the pet data 
//type.  It is just attached node.
struct node_pet
{
      ~node_pet();//destructor
      pet head; //Uses the pet data type.
      int pet_num;//pet record number
      node_pet * next;//pointer to the next
};

//This is the second data with a two nodes.
//One node linkes the list together, 
//while the other is used to link for an
//adoption
struct node_host
{
      ~node_host();//destructor
      host head;//Uses the host data type
      int host_num;//Host record  number
      node_host * next; //Pointer to the next
                        //data
      node_pet * adopt; //Points to adoption
};
