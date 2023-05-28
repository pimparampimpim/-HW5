#include <stdio.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя
};

float averageAge(struct Person arr[], int n) {//функция
    float vozrast=0;//обозначаем переменную
    for (int i=0;i<n;i++) {//условие ФОР
        vozrast+=arr[i].age;//делаем общий возраст ЧЕРЕЗ ТОЧКУ ПОКАХЫВАЯ ПРИНАДЛЕЖНОСТЬ ВОЗРАСТ ИЛИ ИМЯ
    }
    return vozrast/n;
}

int main() {
    struct Person arr[]= {
        {45,"nika"},
        {36,"olga"},
        {76,"ivan"},
        {80,"pivasik"},
        {61,"kumarow"},
        {9,"agronom"},
    };
    printf("%f", averageAge(arr,6));
}