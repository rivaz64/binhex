#include<iostream>
#include<string>
using namespace std;
int main() {
	int a;
	string s,ans,out;
	cout << "hab 1, bah 2" << endl;
	cin >> a;
	cin >> s;
	int n;
	if (a == 1) {
		for (char i : s) {
			switch (i)
			{
			case '0':
				out+="0000";
				break;
			case '1':
				out+="0001";
				break;
			case '2':
				out+="0010";
				break;
			case '3':
				out+="0011";
			case '4':
				out+="0100";
				break;
			case '5':
				out+="0101";
				break;
			case '6':
				out+="0110";
				break;
			case '7':
				out+="0111";
				break;
			case '8':
				out+="0000";
				break;
			case '9':
				out+="0001";
				break;
			case 'A':
			case 'a':
				out+="1010";
				break;
			case 'B':
			case 'b':
				out+="1011";
				break;
			case 'C':
			case 'c':
				out+="1100";
				break;
			case 'D':
			case 'd':
				out+="1101";
				break;
			case 'e':
			case 'E':
				out+="1110";
				break;
			case 'F':
			case 'f':
				out+="1111";
				break;
			default:

				cout<<"error"<<endl;
				system("pause");
				return 0;
			}
		}
		cout << out;
	}
	if (a == 2) {
		n = s.size()%4;
		for (int i = 0; i < 4-n; i++) {
			s = '0' + s;
		}
		for (int i = 0; i < s.size(); i += 4) {
			if (s[i] == '0') {
				if (s[i + 1] == '0') {
					if (s[i + 2] == '0') {
						if (s[i + 3] == '0') {
							out+= '0';
						}
						else if(s[i+3]=='1') {
							out+= '1';
						}
					}
					else if(s[i+2]=='1') {
						if (s[i + 3] == '0') {
							out+= '2';
						}
						else if(s[i+3]=='1') {
							out+= '3';
						}
					}
				}
				else if(s[i+1]=='1') {
					if (s[i + 2] == '0') {
						if (s[i + 3] == '0') {
							out+= '4';
						}
						else if(s[i+3]=='1') {
							out+= '5';
						}
					}
					else if(s[i+2]=='1') {
						if (s[i + 3] == '0') {
							out+= '6';
						}
						else if(s[i+3]=='1') {
							out+= '7';
						}
					}
				}
				
			}
			else if(s[i]=='1') {
				if (s[i + 1] == '0') {
					if (s[i + 2] == '0') {
						if (s[i + 3] == '0') {
							out+= '8';
						}
						else if(s[i+3]=='1') {
							out+= '9';
						}
					}
					else if(s[i+2]=='1') {
						if (s[i + 3] == '0') {
							out+= 'A';
						}
						else if(s[i+3]=='1') {
							out+= 'B';
						}
					}
				}
				else if (s[i + 1] == '0') {
					if (s[i + 2] == '0') {
						if (s[i + 3] == '0') {
							out += 'C';
						}
						else if (s[i + 3] == '1') {
							out += 'D';
						}
					}
					else if (s[i + 2] == '1') {
						if (s[i + 3] == '0') {
							out += 'E';
						}
						else if (s[i + 3] == '1') {
							out += 'F';
						}
					}
				}
				
			}
		}
		cout << out;
	}
	cout << endl;
	system("pause");
}