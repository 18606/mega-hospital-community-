#include <iostream>
#include <stdlib.h>
 
using namespace std;

int main(){
	setlocale(0, "");
	int r = 0; 		// ������� ���������� r
	int k = 0;		// ������� ���������� k
	int m = 0;		// ������� ���������� m 
	int h = 0;		// ������� ���������� h 
	int j = 0;			// ������� ���������� j 
  bool b1 = true;
  bool b2 = false;
      int a;			// ������� ���������� � 
      int u;			// ������� ���������� u 
      int c; 
      int o = 0;			// ������� ���������� o 
      int n = 0;			// ������� ���������� n 
      u = 1;				
  	 while(u == 1) {
    cout << "������� ��� ��������:";				// ������ �� ����� ����� "������� ��� �������� ��� 91111 �� ��� ��������� ���� ��� 911111 �� ��� ���������� ����� "
    cin >> a;
    if (a == 91111){
    cout << "18+ :" << k << endl;						// ������� info
    cout << "1 - 17 :" << m << endl;				// ������� info
    cout << "������:" << h << endl;					// ������� info
    cout << "������:" << j << endl;
    cout << "�� ���������������:" << n << endl;				// ������� info
    cout << "�� �������������� ������������:" << o << endl;				// ������� info
    cout << "������� ��� ��������:";							// ������ �� ����� ����� "������� ��� ��������"
    cin >> a;
	}
	    if (a == 911111){
	cout << "������� ��������� ������:";				// ������ �� ����� ����� "������� 26649"
    cin >> c;	
    if (c == 26649){
    cout << "������ 1.0" << endl;  							// ������� info
    cout << "��������:mega hospital (community)" << endl; 				// ������� info
    cout << "�������: 08.04.2020" << endl; 					// ������� info
    cout << "��������� ����������:��� ������ community" << endl; 			// ������� info
    cout << "�����������1: �������� ����" << endl; 			// ������� info
    cout << "�����������2: ..." << endl; 			// ������� info
    cout << "�����������3: ..." << endl; 			// ������� info
    cout << "�����������4:..." << endl; 			// ������� info
    cout << "�����������5: ..." << endl; 			// ������� info
	cout << "�����������6: ..." << endl; 			// ������� info
    cout << "�����������7: ..." << endl; 			// ������� info
    cout << "�����������8:..." << endl; 			// ������� info
    cout << "�����������9: ..." << endl; 			// ������� info
    cout << "�����������10: ..." << endl; 			// ������� info
    cout << "�����������11: ..." << endl; 			// ������� info
    cout << "�����������12:..." << endl; 			// ������� info
    cout << "�����������13: ..." << endl; 			// ������� info
     cout << "�������: ���� ����������" << endl; 			// ������� info
    cout << "�������� ��� ������� ��������� �������� ����������� ������:" << endl;						// ������� info
	exit(1)	;		
	}
}
    if (a >= 2020){
    cout << "��������, ��� ������� �������. ����� �� 1 �� 2019" << endl;				//���� ������ 2020 ���
    cout << "������� ��� ��������:";
    cin >> a;
	}
	a = 2020 - a;						//��������� 2020 �� a
	if (a >= 18 ){				//�������� �� ������� � 18 �� 64
	if (a <= 64 ){						// �� �� ����� � ||
	if (a != 35 ){
	if (a != 32 ){	
	if (a !=29 ){
	if (a != 26 ){
    cout << "�� �������� � �������� �����" << endl;				// ������� �����
    k += 1;
	}
}
}
}
}
}
  	if (a <= 17 ){						//�������� �� ������� � 1 �� 17
    cout << "�� �������� � ������� �����" << endl;			// ������� �����
    m += 1;
}
  	if (a == 35 ||a == 32 ||a == 29 ||a == 26){
    cout << "�� �������� �� ���������������" << endl;			// ������� �����
    n += 1;
}  
if (a >= 65 ){						//�������� �� ������� � 65 �� 2019 ���
    cout << "�� �������� �� �������������� ������������" << endl;				// ������� �����
    o += 1;
}
   cout << "������ ��� �������� (1) ���� ������� (2) ���� �������:";				// ������ �� ����� ����� "������� ��� �� "
   cin >> r;
   	if (r == 1){
    h += 1;
}
   	if (r == 2){
    j += 1;
}
cout << " �� �������� ��: " << 1 + rand() % 30 << endl;
}
}

