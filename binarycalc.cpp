#include<iostream>
#include<cmath>
using namespace std;
void dtob(){
    system("cls");
    cout<<endl<<"So you have selected to convert a decimal code to binary code"<<endl;
    int decimal;
    int binary[32];
    cout<<"Enter the Decimal Number :";
    cin>>decimal;
    int i = 0;
    while (decimal> 0) {
 
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
    cout<<endl;
}
void dtoo(){
    system("cls");
    cout<<"So you have selected to convert a decimal code to octal code"<<endl;
    int decimal;
    int octal[32];
    cout<<"Enter the decimal system  :";
    cin>>decimal;
    int i=0;
    while(decimal>0)
    {
    	octal[i] = decimal % 8;
    	decimal = decimal / 8;
    	i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<octal[j];
	}
	cout<<endl;
}
void dtoh(){
	system("cls");
	cout<<"So you have selected to convert a decimal code to hexadecimal code"<<endl;
	int decimal;
	int hexadecimal[32];
	cout<<"Enter the decimal number  :";
	cin>>decimal;
	int i=0;
	while(decimal>0)
	{
		hexadecimal[i] = decimal % 16;
		decimal = decimal / 16;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		if(hexadecimal[j]>=10)
		{
			if(hexadecimal[j]==10)
			{
				cout<<'A';
			}
			else if (hexadecimal[j] == 11)
			{
				cout<<'B';
			}
			else if(hexadecimal[j] == 12)
			{
				cout<<'C';
			}
			else if(hexadecimal[j]==13)
			{
				cout<<'D';
			}
			else if(hexadecimal[j]==14)
			{
				cout<<'E';
			}
			else if(hexadecimal[j] == 15)
			{
				cout<<'F';
			}
		}
		else
		{
			cout<<hexadecimal[j];
		}
	}
	cout<<endl;
}
void btod(){
	system("cls");
	cout<<"So you have selected to convert a decimal code to hexadecimal code"<<endl;
	int decimal=0,binary,remainder,b=1;
	cout<<"Enter the Binary Code : "<<endl;
	cin>>binary;
    int temp =binary;
    while (temp> 0)
    {
        remainder = temp % 10;
        decimal = decimal + remainder * b;
        b *= 2;
        temp /= 10;
    }
    cout<<decimal<<endl;
}
void btoo(){
	system("cls");
	cout<<"So you have selected to convert a binary code to octal code"<<endl;
	
    
}
void btoh(){
    
}
void otod(){
    
}
void otob(){
    
}

void otoh(){
    
}
void htod(){
    
}
void htob(){
    
}
void htoo(){
    
}
int main()
{
	int request;
	cout<<"\nPlease choose the type of the conversion you require to do";
    cout<<"\nenter a number assoiated to the conversion statement ";
    cout<<"\n1 for Decimal to Binary";
    cout<<"\n2 for Decimal to Octal";
    cout<<"\n3 for Decimal to Hexadecimal";
    cout<<"\n4 for Binary to Decimal";
    cout<<"\n5 for Binary to Octal";
    cout<<"\n6 for Binary to Hexadecimal";
    cout<<"\n7 for Octal to Decimal";
    cout<<"\n8 for Octal to Binary";
    cout<<"\n9 for Octal to Hexadecimal";
    cout<<"\n10 for Hexadecimal to Decimal";
    cout<<"\n11 for Hexadecimal to Octal";
   	cout<<"\n12 for Hexadecimal to Octal\n";
    cout<<"Enter the conversion code for further processes : ";
    cin>>request;
    cout<<request;
    if(request==1)
        dtob();
    else if(request==2)
        dtoo();
    else if(request==3)
        dtoh();
    else if(request==4)
        btod();
    else if(request==5)
        btoo();
    else if(request==6)
        btoh();
    else if(request==7)
        otod();
    else if(request==8)
        otob();
    else if(request==9)
        otoh();
    else if(request==10)
        htod();
    else if(request==11)
        htob();
    else if(request==12)
        htoo();
    else
        cout<<"you are requested to enter a proper conversion code"<<endl;
    cout<<"Thankyou for using our calculator";
	return 0;
}
