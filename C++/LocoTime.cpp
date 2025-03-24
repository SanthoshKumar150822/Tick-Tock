#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int sec=0, min=0, hr=0, i=0, correct=0;
    while(correct==0)
    {
    	//Railway time (24-hour) format as Hr:Min:Sec, ranging from 00:00:00 to 23:59:59.
    	
    	//User input.
        cout<<"Enter an hour:"; cin>>hr;
    	cout<<"Enter minute:"; cin>>min;
    	cout<<"Enter second:"; cin>>sec;
    	
    	//Validating input.
		if((hr<24 && hr>=0) && (min<60 && min>=0) && (sec<60 && sec>=0)) 
		{
			correct++;	 
		}
		system("cls"); 	
	}

    while(true)
    {
    	
    	if(sec>59)
    	{
    		sec=0; //reset sec to 0
        	min++; //counting minutes
        	
    	}
    	if(min>59)
    	{
    		min=0; //reset min to 0
        	hr++; //counting hours.
        	
    	}
    	if(hr>23)
    	{
        	hr=0; //reset hr to 0
    	}
    	
    	//Clearing all the previous lines and Displaying the time.
    	system("cls");
    	cout<<hr<<":"<<min<<":"<<sec;
    	Sleep(1000); //delay for a second.
    	sec++; //counting seconds
    	
	}

    return 0;
}
