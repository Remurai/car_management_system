#ifndef CARS_H                                                             
#define CARS_H                                                                   
#include "Vehicle.h"                                                               	  //imports the definitions of the functions and variables from the Vehicle header file
#include <iostream>                                                                  
#include <string>                                                                     
using namespace std;                                                              	  
class Cars : public Vehicle{                                                          //Inherit the definition of the variables and function from the Vehicle header file
	private:                                                            			  //Private class
		string model;                                                                 
		string numberPlate;                                                           
	public:                                                                           //Public class
		Cars(){                                                                       //Default constructor
			model = "XXX";                                                           
			numberPlate = "XXX";                                                      
		}
		Cars(string ma,string mo, string nu,string ty,int se):Vehicle(ma,ty,se){      //Default constructor with parameter
			model = mo;                                                               
			numberPlate = nu;                                                         
			
		}
		void setModel(string mo){                                                     //Mutator method for car model
			model = mo;                                                               
		}
		void setNumberPlate(string nu){                                               //Mutator method for car plate number
			numberPlate = nu;                                                        
		}  
		
		string getModel(){                                                            //Accessor method for car model
			return model;                                                             
		}
		string getNumberPlate(){                                                      //Accessor method for car plate number
			return numberPlate;                                                       
		}
		void display(){                                                               //Display method
			Vehicle::display();                                                       
			cout << "Model: " << model << endl                                        
			     << "Number Plate: " << numberPlate << endl;                        
		}
		
};
#endif                                                    



