#include <stdio.h>
 // Design a structure to hold the data for a mailing list. Write a function to print out the data.
void list(int book){

	int list_length; // list length 
	int counter;     // used to loop through all list

	struct mailing {
	char firstname[30];
	char lastname[30];
	char gender[10];
	char email[40];
	};

struct mailing list[] = {
	{
	"Manuel",
	"Xoox",
	"Male",
	"manuel@xoox.com"
	},

	{
	"Jacob",
	"Parker",
	"Male",
	"jacob@parker.com",
	},


	};

	list_length = sizeof(list) / sizeof(list[0]);

	for (counter = 0; counter < list_length; ++counter) {
	printf("** Person %d **\n", (counter + 1));
	printf("First name: %s\n", list[counter].firstname);
	printf("Last name: %s\n", list[counter].lastname);
	printf("Gender: %s\n", list[counter].gender);
	printf("Email: %s\n", list[counter].email);

	printf("\n");
	}  

}
int main(){
int book;
list(book);

	return 0;}
