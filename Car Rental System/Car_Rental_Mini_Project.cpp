#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
#include <math.h>
#include <malloc.h>
//Brought To You by code-projects
// included required library files


using namespace std;
class customer // customer class
{
	private:
	public:
	    string customer_name;
        string car_model;
        string car_number;
    char data;        // variables defined in this class in public mode.
};

class rent : public customer // inherited class from customer class
{
	public:
	int days=0, rentalfee=0; // additional int variables defined
	void data()
	{
		int login();

	    login();
	        cout << "\t\t\t\t\t Please Enter your Name: "; //taking data from the c.user
            cin >> customer_name;
            cout << endl;
    do
    {
        cout << "\t\t\t\t\t Please Select a Car" << endl;       //giving user  choice to select among  different models
        cout << "\t\t\t\t\t Enter X for Tesla 20011." << endl;
        cout << "\t\t\t\t\t Enter Y for Hyundai 2014." << endl;
        cout << "\t\t\t\t\t Enter Z for Ford 2019." << endl;
        cout << endl;
        cout <<"\t\t\t\t\t Choose a Car from this options: ";
        cin >> car_model;
        cout << endl;

 cout << "--------------------------------------------------------------------" << endl;

 if(car_model=="X")
 {
 	system("CLS");

		cout<<"You have cosed Tesla model 2011"<<endl;
		 ifstream inX("X.text"); //displaying details of model A
         char str[300];
         while(inX)
            {
               inX.getline(str, 300);
               if(inX) cout << str << endl;
            }
  }
  if(car_model=="Y")
  {
  	system("CLS");

		cout<<"You have cosed Hyundai model 2014"<<endl;
		 ifstream inY("Y.text"); //displaying details of model B
         char str[300];
         while(inY)
            {
               inY.getline(str, 300);
               if(inY) cout << str << endl;
           }
 }
 if(car_model=="Z")
 {
 	system("CLS");
	     cout<<"You have cosed Ford model 2019"<<endl;
		 ifstream inZ("Z.text"); //displaying details of model C
         char str[300];
         while(inZ)
     {
         inZ.getline(str, 300);
         if(inZ) cout << str << endl;
     }
}

if(car_model !="X" && car_model !="Y" &&  car_model !="Z" )

      cout << "Invalid Car Model. Please try again!" << endl;
        }
while(car_model !="X" && car_model !="Y" &&  car_model !="Z" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: " << endl;
	//getting data from user related to rental service
    cout << "Please select a Car No. : ";
    cin >> car_number;
    cout << "Number of days you wish to rent the car : ";
    cin >> days;
    cout << endl;
	}

	void calculate()
	{
		system ("CLS");
		cout << "Calculating rent. Please wait......" << endl;

		if(car_model == "X"||car_model=="x")
        rentalfee = days*50;

        if(car_model == "Y" ||car_model=="y")
        rentalfee = days*70;

        if(car_model == "Z" ||car_model=="z")
        rentalfee = days*90;
    }

void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<car_model<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<car_number<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoice and it does not"<<endl;
    cout << "\t\t	 require an authorized signature #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penalty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thank_you.text");


  char str[400];

  while(inf)
    {
    inf.getline(str, 400);
    if(inf) cout << str << endl;
    }

  inf.close();
	}
};


class welcome //welcome class
{
	public:
	int welcum()
	{
 ifstream in("welcome.text"); //displaying welcome ASCII image text on output screen 1353

  if(!in)
  {
    cout << "Cannot open input file.\n";
  }

  char str[1000];
  while(in)
  {
    in.getline(str, 1000);  // deli defaults to \n
    if(in) cout << str << endl;
  }

  in.close();
  cout << "\nStarting the program please wait....." << endl;
  cout << "\nloading up files....." << endl;//function which waits for (n) seconds
  system ("CLS"); //cleared screen
  }

};


int main()
{
welcome obj1; //object created for welcome c.
obj1.welcum(); //welcome fun.... is called
rent obj2;  //object created for rent class
obj2.data();
obj2.calculate();
obj2.showrent();

return 0; //end of the program
}

int login()
{
   string pass ="";
   char ch;

   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\t    Enter Password: ";

   ch = _getch();

   while(ch != 13)  //character 13 is enter
    {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
    }

   if(pass == "do not copy")
    {
      cout << "\n\n\n\t\t\t\t\t\tCongratulations! \n";
      system("PAUSE");
      system ("CLS");
    }
   else
    {
      cout << "\n\n\t\t\t\t\t\t\tSorry.....\n\t\t\t\t\t\t\tEnter Correct Password & Please Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

//Plz do not copy
