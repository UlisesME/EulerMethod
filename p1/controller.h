//
//  controller.h
//  
//
//  Created by Ulises Magaña on 09/22/20
//

#ifndef controller_h
#define controller_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include "model.h"

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef controller_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* Types declarations. */


/* Global variables declarations. */


/* Function prototypes. */

/*
 *
 * The function  ...
 *
 * @params
 *       ():
            
        
 * @returns
        
*/

EXTERN void predict_trajectory(EQ_VARS *vars, FILE *file);



#undef controller_IMPORT
#undef EXTERN

#endif /* controller_h */