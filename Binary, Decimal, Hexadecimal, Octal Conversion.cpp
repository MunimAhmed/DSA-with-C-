#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n/=10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n/=10;
    }
    return ans;
}

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for(int i=s-1; i>=0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}


void decimalToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
    /*int x = 1;
    int ans = 0;
    while(x <= n)
       x *= 2;
    x/=2;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}*/

void decimalToOctal(int n) 
{ 
    // array to store binary number 
    int OctalNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        OctalNum[i] = n % 8; 
        n = n / 8; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout <<OctalNum[j]; 
} 

void decimalToHexadecimal(int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];
 
    // counter for hexadecimal number array
    int i = 0;
    while (n != 0) {
        // temporary variable to store remainder
        int temp = 0;
 
        // storing remainder in temp variable.
        temp = n % 16;
 
        // check if temp < 10
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48; //48=0, 49=1, 50=2, 51=3...55
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55; //65=A. 66=B
            i++;
        }
 
        n = n / 16;
    }
 
    // printing hexadecimal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
 
int32_t main()
{
    int n;
    cin>>n;
    //decimalToBinary(n);
    //decimalToOctal(n);
    decimalToHexadecimal(n);

    return 0;
    
}
