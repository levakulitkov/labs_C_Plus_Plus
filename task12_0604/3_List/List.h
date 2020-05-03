#ifndef LIST_H
#define LIST_H

template<typename T>
class List
{
public:
	List();
	~List();
	//Метод добавления элемента в конец списка
	void add_end(T data);
	//Чтение количества элементов в списке
	int getSize() { return size; };
	//Оператор квадратные скобки
	T& operator[](const int index);
	//Метод удаления элемента из начала списка
	void del_front();
	//Освобождение памяти
	void clear();
	//Метод удаления дубликатов из списка
	void del_dups();

private:
	template<typename T>
	class Node
	{
	public:
		Node* nextNode;
		T data;

		Node(T data = T(), Node* nextNode = nullptr)
		{
			this->data = data;
			this->nextNode = nextNode;
		}
	};

	int size;
	Node<T>* head;
};


template<typename T>
List<T>::List()
{
	size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::add_end(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->nextNode != nullptr) {
			current = current->nextNode;
		}
		current->nextNode = new Node<T>(data);
	}
	size++;
}


template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->nextNode;
		counter++;
	}
}

template<typename T>
void List<T>::del_front()
{
	Node<T>* temp = head;
	head = temp->nextNode;
	delete temp;
	size--;
}

template<typename T>
void List<T>::clear()
{
	while (size)
	{
		del_front();
	}
}

template<typename T>
void List<T>::del_dups()
{
	Node<T>* current = head;
	while (current != nullptr) {
		Node<T>* checker = current;
		while (checker->nextNode != nullptr) {
			if (checker->nextNode->data == current->data) {
				Node<T>* toDelete = checker->nextNode;
				checker->nextNode = toDelete->nextNode;
				delete toDelete;
				size--;
			}
			else {
				checker = checker->nextNode;
			}
		}
		current = current->nextNode;
	}
}

#endif
