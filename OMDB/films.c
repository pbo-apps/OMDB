#include <stdio.h>
#include <stdlib.h>
#include "moviedatabase.h"
#include "films.h"

film* createNewFilm(char *title, int released, char *ageRating, char *genre, int length, float rating){
    
    film *newFilm = malloc(sizeof(film));
    
    newFilm->title = title;
    newFilm->released = released;
    newFilm->ageRating = ageRating;
    newFilm->genre = genre;
    newFilm->length = length;
    newFilm->rating = rating;
    
    printf("Title: %s\nReleased in: %d\nRating: %s\nGenre: %s\nLength: %d\nRating: %.1f\n", 
            newFilm->title, newFilm->released, newFilm->ageRating, newFilm->genre, newFilm->length, newFilm->rating);
    
    return newFilm;
    
}

film allocateFilm(){
    
    
    
    
    
    
}

void changeFilmTitlePtr(film *Film, char *newTitle){
    
    (*Film).title = newTitle;
    printf("%s", (*Film).title);
    
}