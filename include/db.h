#ifndef DB_H
#define DB_H
#include <mysql.h>

typedef struct {
  char name[30];
  int point;
  int year;
  int month;
  int day;
  int hour;
  int min;
} RESULT;

void init_db();
void close_db();
RESULT *read_db(char *name);
void write_db(int point, char *name);
int drop_table(MYSQL *conn);
#endif
