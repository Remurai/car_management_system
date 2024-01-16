#include <iostream>                                                                                                                     
#include <string>                                      
#include "Cars.h"   //Import the definition of the functions and the variables from the header file called Cars.h
int main()                                                
{
	const int SIZE = 80;                                 //Make the integer called SIZE fix to 80
	Cars list[SIZE];                                     //Open the array of Cars list to store 80 car details
	string manufacturer, model, numberPlate, type, num;  //Declaration of variables
	int mac, seatNumber,count=0,count1=0,count2=0;       
	char edit, create;                                   
	
	cout << "________________________________________________________________________________\n\n"; //It is the output that used for decoration
	cout << "WELCOME TO CAR STORAGE SYSTEM!!! \n";                                                  
	cout << "\n";                                                                                   
	while(true){                                                                                    
	cout << "1. Key in the car detail. \n";              //Display the output that allow users to choose to command the program.
	cout << "2. Print the details for all cars. \n";                                                
	cout << "3. Search for the details for a car. \n";                                             
	cout << "4. Edit the details for a car. \n";                                                                                           
	cout << "5. Quit program. \n";                                                                  
	cout << "Input: ";                                   //Ask user to choose from 1 to 5.
	cin >> mac;                                          //User input their choice                                           
	cin.ignore();                                                                                  
	cout << "________________________________________________________________________________\n\n"; 

	if(mac==1){  //Prompt the user to key in the car details to store it.
	for (int i=0; i<SIZE; i++){                        
		if (list[i].getNumberPlate()=="XXX"){          
		cout<<"Please key in manufacturer: ";          
		getline (cin, manufacturer);                   

		cout<<"Please key in type: ";                 
		getline (cin, type);                           
			
		cout<<"Please key in model: ";                 
		getline (cin, model);                          
				
		cout<<"Please key in car plate number: ";      
		getline (cin, numberPlate);                    
			
		cout<<"Please key in seat number: ";           
		cin>>seatNumber;                               
		cin.ignore();                                  
		while(true){   //If the user input is not an integer, ask the user to key in again
			if(cin.fail()){                            
		    cin.clear();                               
		    cin.ignore();                              
		    cout << "\nInvalid input." << endl;        
		    cout<<"Please enter an integer. ";       //Remind user input must be an integer  
		    cin>>seatNumber;                           
		    cin.ignore();                              
		}
		else break;   
	}
		cout<<"Car details of car "<<i+1<<" have been updated. "<<endl<<endl; //The new car will store in the array 
		list[i]=Cars(manufacturer, model, numberPlate, type , seatNumber);    
	
		cout<<"Do you still want to enter a new car details? y/n "; //Ask the user that they still want to enter a new car details or not
		cin>>create;                                                     
		cin.ignore();                                                      
			while(create!='y'&&create!='n'){ //If user input anything else that is not y or n, it tells the user to key in again
			cout<<"Invalid input.\n";                                   
			cout<<"Please key in y or n to continue.\n";               
			cin>>create;                                                
			cin.ignore();                                               
			}
			if (create=='y')                           // if user key in y, they can enter a new car details
			continue;                                                  
			else if (create=='n')                      // if user key in n, it will break the loop, system will stop asking user to enter
			break;                                     // a new car detail                
		}   		 
	}
}
	else if(mac==2){ //Let the user to see how many cars that he/she had created
	for(int i=0; i<SIZE; i++){                                              
		if (list[i].getNumberPlate()!="XXX"){                               
		list[i].display();                                                
		count++;}                          
		
		else continue;                                                    
	cout << "________________________________________________________________________________\n\n";  
	}

		if(count<1){ //If the user didn't key in anything, program will tell the user there are no car details.                                                                                       
		cout << "________________________________________________________________________________\n\n";  
		cout<<"No car details has been entered.\n";                                                      
		cout << "________________________________________________________________________________\n\n";  
	}
}
	else if(mac==3){                                             //Let the user to search a car detail by using plate number.                                             
	cout << "Enter the car plate number to find car details: ";  //Prompt the user to key in car plate number to print the car details
	getline(cin,num);                                             
		for(int i=0; i<SIZE; i++){                                
			if(num==list[i].getNumberPlate()){                        
			cout << "________________________________________________________________________________\n\n";  
			list[i].display();                                                                               
			cout << "________________________________________________________________________________\n\n";  
			count1++;                                                                                        
			}
		}
		if(count1<1){  //Display text if the plate number that is entered is not found.                        
		cout << "________________________________________________________________________________\n\n";  
		cout<<"The car plate number that you have entered is not available. Please try again.\n";        
		cout << "________________________________________________________________________________\n\n";  
		}
	}

	else if(mac==4){                                            //Let the user to search and update the car details by using plate number.
	cout << "Enter the car plate number to find car details: "; //Prompt the user to key in car plate number to print the car details
	getline(cin,num);                                          
		for(int i=0; i<SIZE; i++){                                               
			if(num==list[i].getNumberPlate()){                      
			cout << "________________________________________________________________________________\n\n";
			list[i].display();                                                                             
			cout << "________________________________________________________________________________\n\n"; 
			count2++;                                                                                       
		}
	}
	if(count2<1){ //Display text if the plate number that is entered is not found.                                                                                       
	cout << "________________________________________________________________________________\n\n";  
	cout<<"The car plate number that you have entered is not available. Please try again.\n\n";      
	cout << "________________________________________________________________________________\n\n";  
	}
	
	do{                                                             
	if(count2<1) break;                                        
	cout << "Do you want to update this car details? y/n"<<endl;    //Ask the user want to update the car details or not.
	cin >> edit;                                            
	cin.ignore();                                                   
	if(edit=='y'){                                                 
	for(int i=0; i<SIZE;i++){ //Prompt the user to update car details for the car with that number plate
		if(num==list[i].getNumberPlate()){                     
		 
		cout<<"Please key in manufacturer: ";                       
		getline (cin, manufacturer);                                

		cout<<"Please key in type: ";                              
		getline (cin, type);                                        
			
		cout<<"Please key in model: ";                             
		getline (cin, model);                                      
			
		cout<<"Please key in seat number: ";                        
		cin>>seatNumber;                                            
		cin.ignore();                                             
		while(true){                                              
	if(cin.fail()){  //If user input is not an integer, it tells the user to key in again
    cin.clear();    
    cin.ignore();                                                 
    cout << "\nInvalid input." << endl;                            
    cout<<"Please enter an integer. ";      //Remind user input must be an integer                         
    cin>>seatNumber;                                                
    cin.ignore();                                                   
	} 
	else break;                                                     
	}
		cout<<"Car details of car "<<i+1<<" have been updated. "<<endl<<endl; //Display the car details of (number) have been updated 
		cout<<"The new car details of car "<<i+1<<" is: \n";                  //Remind the user that the updated car details 
		list[i]=Cars(manufacturer, model, numberPlate, type , seatNumber);     
		list[i].display();                                                    
		cout<<endl;}                                                          
		}
	}
else if (edit=='n') //If the user input is n, means that they do not want to update the car details, system continue to run.
continue;                                                                 

else cout<<"Invalid input. "<<endl;  //If the user input is not y or n, it tells the user to key in again 

}while(edit!='y'&&edit!='n');                                                               
}

	else if(mac==5)  //It let the user to quit the program.
		break;                                                               
			
else if(cin.fail()){ //If the user input is not an integer from 1 to 5, it tells the user to key in again
     cin.clear();    //Remind user that input must be an integer that is range from 1 to 5
     cin.ignore();                                                          
    cout << "\nInvalid input." << endl;                                     
    cout<<"Please key in an integer from 1 to 5: ";                        
    cin>>mac;                                                               
    cin.ignore();                                                       
}

else if(mac<1||mac>5){ //If user enter any number that is not 1 to 5, will tell user to enter an integer that is from 1 to 5
	cout<<"\nInvalid input.\n"; 
	cout<<"Please key in an integer from 1 to 5\n\n ";
	}
}
    system("pause");                                                     
	return 0;                                                               
}


