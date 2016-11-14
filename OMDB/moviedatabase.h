/* 
 * File:   moviedatabase.h
 * Author: michael
 *
 * Created on November 12, 2016, 2:21 PM
 */

#ifndef MOVIEDATABASE_H
#define MOVIEDATABASE_H
#include "films.h"

typedef struct database{
    
    struct film *film;
    struct database *nextFilm;
    
}database;

#endif /* MOVIEDATABASE_H */

