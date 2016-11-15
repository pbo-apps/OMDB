/* 
 * File:   films.h
 * Author: Michael
 *
 * Created on November 12, 2016, 1:40 PM
 */

#ifndef FILMS_H
#define FILMS_H

typedef struct film{
    
    char title[255];
    int released;
    char ageRating[255];
    char genre[255];
    int length;
    float rating;
    
}film;

#endif

