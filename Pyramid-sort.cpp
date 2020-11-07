#include <pch.h>
#include <iostream>
#include <stdio.h>
#include <locale.h> / Khasanov A
#define MAXL 500
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;}
int main(){
  setlocale(LC_ALL, "Rus");
  int a[MAXL], n, i, sh = 0, b;
  cout << "Введите кол-во эл-тов: ";
  cin >> n;
  cout << "Введите эл-ты: ";
  for (i = 0; i < n; i++) {
    cin >> a[i];}     // Khasanov Ainurs
  while (1){
    b = 0;
    for (i = 0; i < n; i++){
      if (i * 2 + 2 + sh < n){
        if (a[i + sh] > a[i * 2 + 1 + sh] || a[i + sh] > a[i * 2 + 2 + sh]){
          if (a[i * 2 + 1 + sh] < a[i * 2 + 2 + sh])
          {
            swap(&a[i + sh], &a[i * 2 + 1 + sh]);
            b = 1;
          }
          else if (a[i * 2 + 2 + sh] < a[i * 2 + 1 + sh])
          {
            swap(&a[i + sh], &a[i * 2 + 2 + sh]);
            b = 1;
          }
        }
      }
      else if (i * 2 + 1 + sh < n)
      {
        if (a[i + sh] > a[i * 2 + 1 + sh])
        {
          swap(&a[i + sh], &a[i * 2 + 1 + sh]);
          b = 1;
        }}}
    if (!b) sh++;
    if (sh + 2 == n)
      break;}
  cout << "Отсортированный массив: ";
  for (i = 0; i < n; i++){
    cout << a[i]<< ";";}
  return 0;}
