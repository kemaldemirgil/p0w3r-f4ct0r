/*name: Kemal Demirgil
End Of Semester Project
Power Factor Correction Software
date:August 14,2017
abstract:
*/
//gam3fac3

#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265359
	/////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////
double reactancelol(double w, double e){
	double q=(2*PI)*w*e;
	return q;
}
double VAlol(double w, double e){
	double q=w*e;
	return q;
}
	/////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////
int main() {
	cout<<"Welcome to the Power Factor Correction Software\n";
	cout<<"Please enter the following to find the Power Factor\n";
	///////////ARRAY///////////////////////////////////////////////////////////////////////////////
	double dolphin[5];
	cout<<"Voltage(V)------->";
	double volts;
	cin>>volts;
	while (volts == 0){
	cout<<"Please enter a new value\n";
	cout<<"--->";
	cin>>volts;
	}
	dolphin[0]=volts;
	cout<<"Resistance(ohms)->";
	double resistance;
	cin>>resistance;
	while (resistance == 0){
	cout<<"Please enter a new value\n";
	cout<<"--->";
	cin>>resistance;
	}
	dolphin[1]=resistance;
	cout<<"Frequency(Hz)---->";
	double frequency;
	cin>>frequency;
	while (frequency == 0){
	cout<<"Please enter a new value\n";
	cout<<"--->";
	cin>>frequency;
	}
	dolphin[2]=frequency;
	cout<<"Capacitance(F)--->";
	double cap;
	cin>>cap;
	while (cap == 0){
	cout<<"Please enter a new value\n";
	cout<<"--->";
	cin>>cap;
	}
	dolphin[3]=cap;
	cout<<"Inductance(H)---->";
	double ind;
	cin>>ind;
	while (ind == 0){
	cout<<"Please enter a new value\n";
	cout<<"--->";
	cin>>ind;
	}
	dolphin[4]=ind;
	cout<<"Calculated values are below\n";
	cout<<"             |             \n";
	cout<<"             |             \n";
	cout<<"             |             \n";
	cout<<"             |             \n";
	cout<<"             |             \n";
	cout<<"             |             \n";
	cout<<"             V             \n";
	///////////CALCULATIONS////////////////////////////////////////////////////////////////////////  
	double reactance;                                                
	reactance=reactancelol(frequency,ind);								   
	double CR;															   
	CR=(1/(2*PI))*frequency*cap;										   
	double impedance;													   
	impedance=sqrt(pow(resistance,2)+(pow(reactance,2))-(pow(CR,2)));      
	double current;																		
	current=volts/impedance;
	double watts;
	watts=(current*current)*resistance;
	double VARS;
	VARS=(current*current)*reactance;
	double VA;
	VA=VAlol(volts,current);
	double PF;
	PF=watts/VA;
	double PA;
	PA=atan(watts/VARS);
	///////////CALCULATIONS////////////////////////////////////////////////////////////////////////
	cout<<"Current----------->"<<current<<"(I)\n";
	cout<<"Impedance--------->"<<impedance<<"(ohms)\n";
	cout<<"Apparent Power---->"<<VA<<"(VA)\n";
	cout<<"Reactance Power--->"<<VARS<<"(VARS)\n";
	cout<<"Power in Watts---->"<<watts<<"(W)\n";
	cout<<"Power Factor------>"<<PF<<"\n";
	cout<<"Phase Angle------->"<<PA<<"\n\n\n";
	cout<<"Enter 1 to continue the program\n";
	cout<<"--->";
	double o;
	cin>>o;
	if (o==1){
	cout<<"Enter a new Power Factor between 0.01-0.99\n";
	cout<<"New Power Factor-->";
    }
	//THE NEW POWER FACTOR PROGRAM STARTS FROM HERE////////////////////////////////////////////////
	double npf;
	cin>>npf;
	while (npf!=PF){
		cout<<npf;
		npf++;
	}



	
	
	

	   									
	   									
	   									
	
	
	
	
	
	
	
	
	
	
	   									
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"gam3fac3";













	return 0;


}
