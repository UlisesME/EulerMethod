//
//  model.c
//  
//
//  Created by Ulises Magaña on 09/22/20
//

#include <stdlib.h>


#define model_IMPORT
#include "model.h"


/*
 *
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/

FILE * new_file(char *name, char *mode) {
    FILE * my_file = NULL;
    my_file = fopen(name, mode);

    if(my_file == NULL) {
        puts("FILE OPEN ERROR");
        return NULL;
    }
    else
        return my_file;
}


/*
 *
 * The function generate_plot()
 *
 * @params
 *       ():
            
        
 * @returns
        
*/

void generate_plot(char *name) {
    FILE * new_GNUPlot_Window;
    char file_name[MAX];
    sprintf(file_name, "plot \"%s\" w l", name);

    new_GNUPlot_Window = popen("gnuplot -persist", "w");
    fprintf(new_GNUPlot_Window, "%s\n", file_name);

    //pclose(new_GNUPlot_Window);
}
