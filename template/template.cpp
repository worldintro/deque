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
	Deque<int> deq;
	deq.PushFront(1);
	deq.PushFront(2);
	deq.PushFront(33);
	deq.PushFront(22);

	int d = deq.PopFront();

	system("pause");
    return 0;
} 

