#ifndef VEHICLE_H                                                                      
#define VEHICLE_H                                                                        
#include <iostream>                                                                    
#include <string>                                                                       
using namespace std;                                                                    
class Vehicle{                                                                          
	private:																			 //Private class
		string manufacturer;                                                            
		string type;                                                                      
		int seatNumber;                                                             
	public:																				 //Public class
	     Vehicle(){                                                                      //Default constructor
	     	manufacturer = "XXX";                                                        
	     	type = "Hatchback";                                                      
	     	seatNumber = 1;                                                            
		 } 
		 Vehicle(string ma,string ty,int se){                                            //Default constructor with parameter
		 	manufacturer = ma;                                                           
		 	type = ty;                                                             
		 	seatNumber = se;                                                             
		 }
		 void setManufacturer(string ma){                                                //Mutator method for car manufacturer
		 	manufacturer = ma;                                                                     
		 }
		 void setType(string ty){                                                        //Mutator method for car type
		 	type = ty;                                                                  
		 }
		 void setSeatNumber(int se){                                                     //Mutator method for car seat number
		 	seatNumber = se;                                                             
		 }
		 string getManufacturer(){                                                       //Accessor method for car manufacturer
		 	return manufacturer;                                                        
		 }
		 string getType(){                                                               //Accessor method for car type
		 	return type;                                                                
		 }
		 int getSeatNumber(){                                                            //Accessor method for car seat number
		 	return seatNumber;                                                          
		 }
		 void display(){                                                                 //Display method
		 	cout << "Manufacturer: " << manufacturer << endl                             
		 	     << "Type: " << type << endl                                           
		 	     << "Seat Number: " << seatNumber << endl;                               
		 }
};
#endif                                                                               

