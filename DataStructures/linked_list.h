

typedef struct Person {
	int id;
	char[100] name;
};

typedef struct ListItem {
	struct Person person;
	struct ListItem* next;
	struct ListItem* prev;
};


typedef struct LinkedList {
	ListItem* first;
	ListItem* last;
	int size;
};

Person createPerson(int id, char[100] name) {

}

ListItem* allocateNewItem(Person person) {


}

void add(ListItem* item) {

}

void remove(ListItem* item) {

}

void sortById() {

}






