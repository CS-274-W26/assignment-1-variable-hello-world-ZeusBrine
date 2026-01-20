#include <stdio.h> // Necessary for printf()
#include <stdlib.h> // For rand() and srand()
#include <time.h> // For time()

// Returns a random number between 0 and 10 inclusive
int rand10() {
	return (rand() % 11);
}

// Prints the correct text blurb for the inputed number based on the
// specifications 
void text_blurb_out(int in) {
	if(in >= 0 && in <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if(in <= 9) {
		printf("FRODO LIVES\n");
	} else {
		printf("Larn is the best roguelike\n");
	}
}

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	srand(time(NULL));

	int myrand = rand10();

	text_blurb_out(myrand);
	printf("The random number was: %d\n", myrand);
	return 0;
}
