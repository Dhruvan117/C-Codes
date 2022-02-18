#include<stdio.h>

void find_class(int first_byte, int sec_byte, int third_byte, int forth_byte);     //function declaration

int main()
{
	int first_byte, sec_byte, third_byte, forth_byte; 
	printf("\n\nPlease input your Ipv4 adress in Decimal format\n\n");
	printf("Please enter your 1st Byte out of 4 (Range 0 to 255):\n");
	scanf("%d",&first_byte);                                           //getting first byte of IPV4
	printf("Please enter your 2nd Byte out of 4 (Range 0 to 255):\n");
	scanf("%d",&sec_byte);                                              //getting second byte of IPV4                       
	printf("Please enter your 3rd Byte out of 4 (Range 0 to 255):\n");
	scanf("%d",&third_byte);                                            //getting third byte of IPV4
	printf("Please enter your 4th Byte out of 4 (Range 0 to 255):\n");
	scanf("%d",&forth_byte);                                            //getting fourth byte of IPV4

	printf("Your given IP adress is %d.%d.%d.%d \n",first_byte, sec_byte, third_byte, forth_byte);
	find_class(first_byte,sec_byte,third_byte,forth_byte);               // function call
	return 0;

}

void find_class(int first_byte, int sec_byte, int third_byte, int forth_byte)                //function for checking the class of IP adress
{
	if(first_byte<128)
	{
		printf("\nYour IP adress belongs to class A\n");
		printf("\nYour default subnet mask is 255.0.0.0\n");
		printf("\nYour Network ID is %d and Host id is %d.%d.%d\n\n",first_byte, sec_byte, third_byte, forth_byte);
	}
	else if(128<=first_byte<192)
	{
		printf("\nYour IP adress belongs to class B\n");
		printf("\nYour default subnet mask is 255.255.0.0\n");
		printf("\nYour Network ID is %d.%d and Host id is %d.%d\n\n",first_byte, sec_byte, third_byte, forth_byte);
	}
	else if(192<=first_byte<224)
	{
		printf("\nYour IP adress belongs to class C\n");
		printf("\nYour default subnet mask is 255.255.255.0\n");
		printf("\nYour Network ID is %d.%d.%d and Host id is %d\n\n",first_byte, sec_byte, third_byte, forth_byte);
	}
	else if(224<=first_byte<240)
	{
		printf("\nYour IP adress belongs to class D\n");
		printf("\nReserved for multicasting\n\n");
	}
	else if(240<=first_byte<256)
	{
		printf("\nyour IP adress belongs to class E\n\n");
		printf("\nExperimental");
	}
}