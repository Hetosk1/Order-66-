#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
/*done*/void dtob(){
	int decimal;
    int binary[32];
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
/*done*/void dtoo(){
	int decimal;
    int octal[32];
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
/*done*/void dtoh(){
	int decimal;
	int hexadecimal[32];
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
/*done*/void btod(){
	int decimal=0,binary,remainder,b=1;
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
/*done*/void btoo(){
		int octalNumber = 0, decimalNumber = 0, i = 0;
		long long binaryNumber;
		cin>>binaryNumber;
    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    cout<<octalNumber;
	
}
/*done*/void btoh(){
	long int binary;
	int decimal=0,hexadecimal[32];
	int i=0;
	cin>>binary;
	while(binary != 0)
    {
        decimal += (binary%10) * pow(2,i);
        ++i;
        binary/=10;
	}
	i=1;
	while(decimal>0)
	{
		hexadecimal[i] = decimal % 16;
		decimal = decimal / 16;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		if(hexadecimal[j]>9)
		{
			if(hexadecimal[j]==10)
			{
				cout<<'A';
			}
			else if(hexadecimal[j]==11)
			{
				cout<<'B';
			}
			else if(hexadecimal[j]==12)
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
			else if(hexadecimal[j]==15)
			{
				cout<<'F';
			}
		}
		else
		{
			cout<<hexadecimal[j];
		}
	}
	
}
/*done*/void otod(){
	int octal,decimal=0,b=1,i=0;
	cin>>octal;
	while(octal>0)
	{
		decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
	
	}
	cout<<decimal;
	cout<<endl;
}
/*done*/void otob(){
	int octal,decimal=0,i=0;
	int binary[32];
	cin>>octal;
	while(octal>0)
	{
		decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
	}
	i=0;
	while (decimal> 0) {
 
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    for (int j =i-1; j >= 0; j--)
		cout << binary[j];
    cout<<endl;	
}
/*done*/void otoh(){
	int octal,decimal=0,hexadecimal[32],i=0;
	cin>>octal;
	while(octal>0)
	{
		decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
	}
	i=0;
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
/*done*/void htod(){
	char hexadecimal[32];
		cin>>hexadecimal;
	int length = strlen(hexadecimal);
	int base = 1;
	int i=0;
	int decimal=0;
	for(i=length-1;i>=0;i--)
	{
		if(hexadecimal[i]>='0' && hexadecimal[i]<='9')
		{
			decimal = decimal + (hexadecimal[i]-48)*base;
			base = base * 16;
		}
		else if(hexadecimal[i]>='A' && hexadecimal[i]<='F')
		{
			decimal = decimal + (hexadecimal[i]-55)*base;
			base = base * 16;
		}
	}
	cout<<decimal;
}
/*done*/void htob(){
	 int binary[32];
    char hexadecimal[32];
    cin>>hexadecimal;
	int length = strlen(hexadecimal);
	int base = 1;
	int i=0;
	int decimal=0;
	for(i=length-1;i>=0;i--)
	{
		if(hexadecimal[i]>='0' && hexadecimal[i]<='9')
		{
			decimal = decimal + (hexadecimal[i]-48)*base;
			base = base * 16;
		}
		else if(hexadecimal[i]>='A' && hexadecimal[i]<='F')
		{
			decimal = decimal + (hexadecimal[i]-55)*base;
			base = base * 16;
		}
	}
	//decimal conversion done....
	i=0;
	 while (decimal> 0) {
 
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
    cout<<endl;
}
/*done*/void htoo(){
	char hexadecimal[32];
	cin>>hexadecimal;
	int length = strlen(hexadecimal);
	int base = 1;
	int i=0;
	int decimal=0;
	for(i=length-1;i>=0;i--)
	{
		if(hexadecimal[i]>='0' && hexadecimal[i]<='9')
		{
			decimal = decimal + (hexadecimal[i]-48)*base;
			base = base * 16;
		}
		else if(hexadecimal[i]>='A' && hexadecimal[i]<='F')
		{
			decimal = decimal + (hexadecimal[i]-55)*base;
			base = base * 16;
		}
	}
	int octal[32];
	i=0;
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
int main()
{
	int i=1;
	char decimaltobinary[50]="/convert:decimal:binary";
	char decimaltooctal[50]="/convert:decimal:octal";
	char decimaltohexadecimal[50]="/convert:decimal:hexadecimal";
	char binarytodecimal[50]="/convert:binary:decimal";
	char binarytooctal[50]="/convert:binary:octal";
	char binarytohexadecimal[50]="/convert:binary:hexadecimal";
	char octaltodecimal[50]="/convert:octal:decimal";
	char octaltobinary[50]="/convert:octal:binary";
	char octaltohexadecimal[50]="/convert:octal:hexadecimal";
	char hexadecimaltodecimal[50]="/convert:hexadecimal:decimal";
	char hexadecimaltobinary[50]="/convert:hexadecimal:binary";
	char hexadecimaltooctal[50]="/convert:hexadecimal:octal";
	char help[10]="/help";
	char quit[50]="/quit";
	char clear[50]="/clear";
	char input[50]="";
	cout<<"type '/help' to begin"<<endl;
	while(1)
	{	
		newscreen:
		cout<<"BooleanBros>"<<i<<" : ";
		cin>>input;
		cout<<endl;
		if(strcmp(input,decimaltobinary)==0)
		{
			cout<<"conversion_element__";
			dtob();
		}
		if(strcmp(input,decimaltooctal)==0)
		{
			cout<<"conversion_element__";
			dtoo();
		}
		if (strcmp(input,decimaltohexadecimal)==0)
		{
			cout<<"conversion_element__";
			dtoh();
		}
		if (strcmp(input,binarytodecimal)==0)
		{
			cout<<"conversion_element__";
			btod();
		}
		if (strcmp(input,binarytooctal)==0)
		{
			cout<<"conversion_element__";
			btoo();
		}
		if (strcmp(input,binarytohexadecimal)==0)
		{
			cout<<"conversion_element__";
			btoh();
			cout<<endl;
		}
		if (strcmp(input,octaltodecimal)==0)
		{
			cout<<"conversion_element__";
			otod();
			cout<<endl;
		}
		if (strcmp(input,octaltobinary)==0)
		{
			cout<<"conversion_element__";
			otob();
			cout<<endl;
		}
		if (strcmp(input,octaltohexadecimal)==0)
		{
			cout<<"conversion_element__";
			otoh();
			cout<<endl;
		}
		if (strcmp(input,hexadecimaltodecimal)==0)
		{
			cout<<"conversion_element__";
			htod();
			cout<<endl;
		}
		if (strcmp(input,hexadecimaltobinary)==0)
		{
			cout<<"conversion_element__";
			htob();
			cout<<endl;
		}
		if (strcmp(input,hexadecimaltooctal)==0)
		{
			cout<<"conversion_element__";
			htoo();
			cout<<endl;
		}
		if (strcmp(input,help)==0)//help block....................................
		{
			cout<<endl<<"Welcome to the BooleanBros"<<endl;
			cout<<"The BooleanBros is a free converter used by enginners"<<endl;
			cout<<"Our converter does not provide the faciality to perform calcutation with decimal points (eg.1212.212)"<<endl;
			cout<<"Our converter has a very user friendly interface as explained below : "<<endl<<endl;
			cout<<"To perform a coversion you have to use the input format"<<endl;
			cout<<"-->'/convert:a:b'"<<endl;
			cout<<"where, a is the type of the number you have to be converted"<<endl;
			cout<<"\tb is the type of the number you want as the result"<<endl<<endl;
			cout<<"To close the program one must write the following command:"<<endl;
			cout<<"-->/quit"<<endl<<endl;
			cout<<"this program is brought by :"<<endl;
			cout<<"1.HET JASANI - 216250307027"<<endl;
			cout<<"2.MOKSH DOSHI - 216250307047"<<endl;
			cout<<"3.JAY PANDYA - 216250307058"<<endl;
		}
		if (strcmp(input,clear)==0)
		{
			system("cls");
			i=1;
			goto newscreen;
		}	
		if(strcmp(quit,input)==0)//quit block..................................
		{
			break;
		}
		i++;
	}
	return 0;
}
