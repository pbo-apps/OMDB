/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

#include <stdio.h>
#include <stdlib.h>
#include "moviedatabase.h"

database *pFirstNode = NULL;
database *pLastNode = NULL;

void createNewMovieDatabase(film *newFilm) {
	// PBO: Not sure how this was compiling before, but in Visual Studio I had to change this to be a type name
	database *filmDatabase = (database*)malloc(sizeof(database));
	filmDatabase->nextFilm = NULL;
	filmDatabase->film = newFilm;
	pFirstNode = pLastNode = filmDatabase;

}

void inputData(film *newFilm) {


	// Create a list if one doesn't exist
	if (pFirstNode == NULL) {
		createNewMovieDatabase(newFilm);
	}
	else {

		// Set aside enough space in memory for this struct
		// PBO: Don't need the struct keyword here, database is a struct as defined in the header
		database *filmDatabase = (database *)malloc(sizeof(database));

		filmDatabase->film = newFilm;

		// PBO: Moved this initialisation of nextFilm to NULL up here
		// because I think you'll want this regardless of the current number
		// of items in the list. Another option is to point it at pFirstNode
		// instead so the list loops over the top - not sure if you'll need that or not though
		// Since this will be the last struct in the list it has
		// NULL stored in its next

		filmDatabase->nextFilm = NULL;

		// If the first and last struct are equal we know this
		// is the second struct in the list

		// PBO: You had the right idea here, but we actually want to compare addresses to see if there
		// really is just one item in the list (not just two films with the same name)

		if (pFirstNode == pLastNode) {

			// Assign the value of next for the first struct to
			// this new one since the new one is the second struct

			pFirstNode->nextFilm = filmDatabase;

			// Since this is the second struct we know the last
			// struct is equal to this new one

			// PBO: This was the real crux of the problem - you were setting one of the
			// members of pLastNode instead of changing what pLastNode points to
			// That means pLastNode still pointed to the same address as pFirstNode, and
			// when you set pLastNode->film to something, that also set pFirstNode->film
			// because they point to the same thing

			pLastNode = filmDatabase;

			/*pFirstNode->film->title = "Spiel";
			pLastNode->film->title = "Nein";*/

			//printf("%s, %s, %s\n", pFirstNode->film->title, filmDatabase->film->title, pLastNode->film->title);


		}
		else {


			// We know that this is at least the third struct in the
			// list so we don't need to touch the pFirstNode.
			// We instead just change the pLastNode value for next
			// from NULL to our new struct

			pLastNode->nextFilm = filmDatabase;

			pLastNode = filmDatabase;

			//printf("%s", pLastNode->film->title);



		}

	}

	//printf("%s, %s\n", pFirstNode->film->title, pLastNode->film->title);
	printFilms();
}

// PBO: Helper function to print out list of films when debugging
void printFilms()
{
	if (pFirstNode != NULL)
	{
		int first = 1;
		database *database = pFirstNode;
		while (database != NULL)
		{
			if (first)
			{
				printf("\n\n");
				first = 0;
			}

			if (database->film != NULL)
                        {
                            printf("Title: %s\nReleased in: %d\nRating: %s\nGenre: %s\nLength: %d\nRating: %.1f\n", 
            database->film->title, database->film->released, database->film->ageRating, database->film->genre, database->film->length, database->film->rating);
				//printf("%s\n", database->film->title);
                        }

			if (database != database->nextFilm)
				database = database->nextFilm;
			else
				database = NULL;
		}
	}
}