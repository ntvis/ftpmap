/* logger.h  - header file for logger */

#ifndef LOGGER_H
#define LOGGER_H

#include "ftpmap.h"

void logger_open(ftpmap_t*);
void logger_write(ftpmap_t*, char*, ...);
void logger_close(ftpmap_t*);

#endif /*LOGGER_H*/
