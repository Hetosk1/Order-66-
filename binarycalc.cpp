#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
/*done*/void dtob(){
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
/*done*/void dtoo(){
	
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
/*done*/void dtoh(){
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
/*done*/void btod(){
	system("cls");
	cout<<"So you have selected to convert a bianry code to decimal code"<<endl;
	int decimal=0,binary,remainder,b=1;
	cout<<"Enter the Binary Code : ";
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
	system("cls");
	cout<<"So you hace selected to convert a binary code to octal code"<<endl;
	int octalNumber = 0, decimalNumber = 0, i = 0;
	long long binaryNumber;
	cout<<"Enter the Binary Code: ";
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
    cout<<endl<<"the converted number is : "<<octalNumber<<endl;
	
    
}
/*done*/void btoh(){
	system("cls");
	long int binary;
	int decimal=0,hexadecimal[32];
	int i=0;
	cout<<"So you have selected to convert binary code to hexadecimal code"<<endl;
	cout<<"Enter the Binary Code :";
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
	cout<<endl;
}
/*done*/void otod(){
	
    system("cls");
    int octal,decimal=0,b=1,i=0;
	cout<<"So you have selected to convert octal code to decimal code"<<endl;
	cout<<"Enter the Octal Code :";
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
    system("cls"); 
	cout<<"So you have selected to convert octal code to binary code"<<endl;
	int octal,decimal=0,i=0;
	int binary[32];
	cout<<"enter a octal code";
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
    for (int j =i; j >= 0; j--)
		cout << binary[j];
    cout<<endl;	
}
/*done*/void otoh(){
    system("cls");
	cout<<"So you have selected to convert Octal code to hexadecimal code"<<endl;
	int octal,decimal=0,hexadecimal[32],i=0;
	cout<<"Enter the Octal Code :";
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
    system("cls");
    char hexadecimal[32];
	cout<<"So you have selected to convert hexadecimal code to decimal code"<<endl;
	cout<<"Enter the Hexadecimal Code :";
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
    system("cls");
    int binary[32];
    char hexadecimal[32];
    cout<<"So you have selected to convert hexadecimal code to decimal code"<<endl;
	cout<<"Enter the Hexadecimal Code :";
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
    system("cls");
    char hexadecimal[32];
	cout<<"So you have selected to convert hexadecimal code to decimal code"<<endl;
	cout<<"Enter the Hexadecimal Code :";
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
    cout<<"\n11 for Hexadecimal to Binary";
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
