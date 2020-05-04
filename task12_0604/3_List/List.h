#ifndef LIST_H
#define LIST_H

class List
{
public:
	List();
	~List();
	//Метод добавления элемента в конец списка
	void add_end(int data);
	//Чтение количества элементов в списке
	int getSize() { return size; };
	//Оператор квадратные скобки
	int& operator[](const int index);
	//Метод удаления элемента из начала списка
	void del_front();
	//Освобождение памяти
	void clear();
	//Метод удаления дубликатов из списка
	void del_dups();

private:
	class Node
	{
	public:
		Node* nextNode;
		int data;

		Node(int data = int(), Node* nextNode = nullptr)
		{
			this->data = data;
			this->nextNode = nextNode;
		}
	};

	int size;
	Node* head;
};


List::List()
{
	size = 0;
	head = nullptr;
}

List::~List()
{
	clear();
}

void List::add_end(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = this->head;
		while (current->nextNode != nullptr) {
			current = current->nextNode;
		}
		current->nextNode = new Node(data);
	}
	size++;
}


int& List::operator[](const int index)
{
	int counter = 0;
	Node* current = this->head;
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

void List::del_front()
{
	Node* temp = head;
	head = temp->nextNode;
	delete temp;
	size--;
}

void List::clear()
{
	while (size)
	{
		del_front();
	}
}

void List::del_dups()
{
	Node* current = head;
	while (current != nullptr) {
		Node* checker = current;
		while (checker->nextNode != nullptr) {
			if (checker->nextNode->data == current->data) {
				Node* toDelete = checker->nextNode;
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
