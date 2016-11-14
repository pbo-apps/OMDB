/* 
 * File:   main.c
 * Author: michael
 *
 * Created on November 12, 2016, 1:37 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "films.h"
#include "moviedatabase.h"

int main(int argc, char** argv){
    

    film NewFilm2 = {"Terminator", 1934, "PG-13", "Action", 140, 4.5};
    film NewFilm3 = {"Hook", 1934, "PG-13", "Action", 140, 4.5};
    film NewFilm4 = {"Avengers", 1934, "PG-13", "Action", 140, 4.5};
    film NewFilm5 = {"SSSS", 1934, "PG-13", "Action", 140, 4.5};
    film NewFilm6 = {"jiwo", 1934, "PG-13", "Action", 140, 4.5};
    film NewFilm7 = {"DPDPPD", 1934, "PG-13", "Action", 140, 4.5};
    inputData(NewFilm2);
    inputData(NewFilm3);
    inputData(NewFilm4);
    inputData(NewFilm5);
    inputData(NewFilm6);
    inputData(NewFilm7);
    
    
            
    /*
    int released = atoi(strtok(NULL, " ,"));
    char *ageRating = strtok(NULL, " ,");
    char *genre = strtok(NULL, " ,");
    int length = atoi(strtok(NULL, ", "));
    float rating = atof(strtok(NULL, ", "));*/
    // adds the values to the structs for an item
    //film *newFilm = createNewFilm(title, released, ageRating, genre, length, rating);
    // adds the item to the inventory linkedlist
    //database *filmDatabase = inputData(newFilm);
    
    /*
    
    while (fgets(buff, 255, filmf) != NULL){
        
        char *title = strtok(buff, " ,");
        int released = atoi(strtok(NULL, " ,"));
        char *ageRating = strtok(NULL, " ,");
        char *genre = strtok(NULL, " ,");
        int length = atoi(strtok(NULL, ", "));
        float rating = atof(strtok(NULL, ", "));
        // adds the values to the structs for an item
        film *newFilm = createNewFilm(title, released, ageRating, genre, length, rating);
        // adds the item to the inventory linkedlist
        database *filmDatabase = inputData(newFilm);
        //outputData();
    }
    */
    
    
    char stri[255];
     // gathering the information for the sales
    /*
    while (fgets(stri, 255, salesf) != NULL){

        char *date = strtok(stri, " ,");
        char *stockCode = strtok(NULL, " ,");
        int numOfItems = atoi(strtok(NULL, " "));


        // checks whether a sale can be made
        if(makeSale(stockCode,numOfItems)==1){
            // store in the sales linked list
            stockItem *thisSale = salesInputData(date, stockCode, numOfItems);
        }

    }
    */
    //film NewFilm2 = {"Peter Pan", 1934, "PG-13", "Action", 140, 4.5};
    //createNewFilm("Peter Pan", 1934, "PG-13", "Action", 140, 4.5);
    //createNewMovieDatabase(NewFilm2);
    
    //changeFilmTitlePtr(&NewFilm2, "Hook");
    //film NewFilm2 = {"Peter Pan", 1934, "PG-13", "Action", 140, 4.5};
    
    return (EXIT_SUCCESS);
}
