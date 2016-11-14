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

void createNewMovieDatabase(film *newFilm){
   
   database *filmDatabase = (database*) malloc(sizeof(filmDatabase));
   filmDatabase->nextFilm = NULL;
   filmDatabase->film = newFilm;
   pFirstNode = pLastNode = filmDatabase;
   
}

void inputData(film* newFilm){
    

    // Create a list if one doesn't exist
	if(pFirstNode == NULL){
		createNewMovieDatabase(newFilm);
	} 
        else {

		// Set aside enough space in memory for this struct

		struct database *filmDatabase = (struct database *) malloc(sizeof(struct database));
                
                filmDatabase->film = newFilm;
                

		// If the first and last struct are equal we know this
		// is the second struct in the list
                
		if(pFirstNode->film->title == pLastNode->film->title){
                    
			// Assign the value of next for the first struct to
			// this new one since the new one is the second struct
                    
			pFirstNode->nextFilm = filmDatabase;

			// Since this is the second struct we know the last
			// struct is equal to this new one
                    
			pLastNode->film = filmDatabase->film;

			// Since this is the last struct in the list it has
			// NULL stored in its next

			filmDatabase->nextFilm = NULL;
                        pFirstNode->film->title = "Spiel";
                        pLastNode->film->title = "Nein";
                        
                        printf("%s, %s, %s\n", pFirstNode->film->title, filmDatabase->film->title, pLastNode->film->title);
                        

		} else {
                    

			// We know that this is at least the third struct in the
			// list so we don't need to touch the pFirstNode.
			// We instead just change the pLastNode value for next
			// from NULL to our new struct

			pLastNode->nextFilm = filmDatabase;

			filmDatabase->nextFilm = NULL;

			pLastNode = filmDatabase;
                        
                        //printf("%s", pLastNode->film->title);
                        
                        

		}

	}
        
        //printf("%s, %s\n", pFirstNode->film->title, pLastNode->film->title);

}