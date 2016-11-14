/* 
 * File:   films.h
 * Author: Michael
 *
 * Created on November 12, 2016, 1:40 PM
 */

#ifndef FILMS_H
#define FILMS_H

typedef struct film{
    
    char *title;
    int released;
    char *ageRating;
    char *genre;
    int length;
    float rating;
    
    struct film *next;
    
       
}film;

#endif

