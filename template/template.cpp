// template.cpp: определяет точку входа для консольного приложения.
//
/*Реализовать шаблон класса (функции), принимающий элементы любого типа и поддерживающий базовые операции в соответствии со своим назначением. 
В качестве внутренней структуры хранения данных можно использовать, например, динамический массив. 
Использование шаблона должно осуществляться из функции main() и содержать примеры работы как минимум с двумя разными типами данных (например, int и string).

7.	Дек (deque, допускает вставку и удаление с обоих концов очереди).

Материалы:
http://cppstudio.com/post/5188/
https://neerc.ifmo.ru/wiki/index.php?title=%D0%94%D0%B5%D0%BA
*/




#include "stdafx.h"
#include <iostream>
#include "Deque.h"

using namespace std;

int main()
{
	/*
	Deque<int> deq;
	deq.PushFront(7);
	deq.PushFront(8);
	deq.PushFront(9);
	deq.PushFront(10);

	deq.PushBack(6);
	deq.PushBack(5);
			
	int d = deq.PopFront();
	*/
	/*
	Deque<const char*> deq;
	deq.PushFront("ccc");
	deq.PushFront("ddd");
	deq.PushBack("bbb");
	deq.PushBack("aaa");

	const char * a = deq.PopFront();
	const char * b = deq.PopBack();
	*/

	Deque<double> deq;
	deq.PushFront(1.2);
	deq.PushFront(1.1);
	deq.PushFront(1.0);
	deq.PushBack(1.3);


	auto it = Deque<double>::Iterator(deq.begin());
	while (it != deq.end())
	{
		cout << (*it).value<< endl;
		it++;
	}

	


	system("pause");
    return 0;
} 

