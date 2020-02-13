// A C++ program to illustrate Caesar Cipher Technique 
#include <iostream> 
using namespace std; 
string encrypt(string text, int s) 
{ 
	string result = ""; 
	// traverse text 
	for (int i=0;i<text.length();i++) 
	{ 
		// ubah masing masing karakter
		// huruf kapital
		if (isupper(text[i])) 
			result += char(int(text[i]+s-65)%26 +65); 
	// bukan huruf kapital 
	else
		result += char(int(text[i]+s-97)%26 +97); 
	} 
	// return hasil enkripsi 
	return result; 
} 
// Driver program to test the above function 
int main()
{ 
	string text; int s,c;
	cout<<"Menu :\n1.Encrypt\n2.Decrypt"<<endl;
	cout<<"Your choice: "; cin>>c;
	if(c==1){
		cout<<"Input the text you want encrypted: ";
    	cin>>text; 
		cout<<"Shift: "; cin>>s;
		cout << "Text : " << text; 
		cout << "\nShift: " << s; 
		cout << "\nCipher: " << encrypt(text, s)<<endl;
	}
	else if(c==2){
		cout<<"Input the text you want encrypted: ";
    	cin>>text; 
		cout<<"Shift: "; cin>>s;
		s=s%26;
		cout << "Text : " << text; 
		cout << "\nShift: " << s; 
		cout << "\nCipher: " << encrypt(text, 26-s)<<endl;
	}
	return 0; 
} 
