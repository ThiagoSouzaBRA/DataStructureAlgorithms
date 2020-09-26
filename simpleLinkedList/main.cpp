#include <iostream>
#include <stdlib.h>
#include <string>
#include "linkedList.cpp"


using namespace std;



void message(string text){
	cout << "\n" << text;
}

int main(){

  linkedList list;

   int op = -1, value;
   
   message("Welcome friend, this is a simple program created by Thiago Souza.");
   		
   	
   	while(op != 0)
	{
		message("=================================================================");
   		message("(1) - Insert node.");
   		message("(2) - Remove node.");
   		message("(3) - Verify empty list.");
   		message("(4) - Print list.");
   		message("(5) - Count number of nodes.");
   		message("(0) - Exit");
   		message("=================================================================");	
   		message("\nEnter the operation: ");
		
		cin >> op;
		
		
		switch(op){
			case 0:
        system("clear");
				message("Bye :)");
				break;

			case 1:
        system("clear");
        message("Please, insert the node value: ");
        cin >> value;
        list.insertNode(value);
        break;

			case 2:
        system("clear");
        cout << ((list.removeNode()) ? "Node removed successfully." : "Failed to remove node, please try again.") << endl ;
				break;

			case 3:
        system("clear");
        if(list.isEmpty())
          message("List is empty.");
        else
          message("List is not empty.");
        break;

			case 4:
        system("clear");
        if(list.isEmpty())
          message("List is empty.");
        else
          list.print();
				break;

			case 5:
        system("clear");
        cout << "\nNumber of Nodes : " << list.countNodes() << endl;
				break;

			default:
        system("clear");
				message("[SYSTEM] Operation not found.");
				break;
		}		
				
	}

}
