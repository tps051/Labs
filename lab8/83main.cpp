#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int main() {
  queue <string> avtomoika;  // создание очереди
  int k=0;
  cout << "Input the nubmer of people: " << endl;
  cin>>k;
  cout << "Input names of people from 1st to last: " << endl;
  for (int i = 0; i < k; i++) {
    string s;
	scanf("%s", s);
    avtomoika.push(s);  // добавляем в очередь элементы
  }
  int minuti,wait;
  cout << "Input the time of washing car: " << endl;
  cin>>minuti;
  cout << "Input the time of waiting: " << endl;
  cin>>wait;
  int itog=1;
  itog=minuti*k;
  for (int i =wait;i>0;i-=minuti){
      if (wait-minuti>=0)  avtomoika.pop();  // удаляем элемент из очереди
  }
  if(itog<wait) cout << "Empty";
  else  cout << "The first in queue: ";
  printf("%s", avtomoika.front());
  return 0;
}