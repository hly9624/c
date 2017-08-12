#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sqlite3.h>

int main(int argc, const char *argv[])
{
    sqlite3 *db;
    char *errmsg;

    if(sqlite3_open("./my.db",&db) != SQLITE_OK)
    {
        printf("%s\n",sqlite3_errmsg(db));
        return -1;
    }
    char sql[256];
    strcpy(sql,"create table stu (id integer not null primary key,name text not null,age integer not null)");
    

    int ret;
    if((ret = sqlite3_exec(db,sql,NULL,NULL,&errmsg)) != SQLITE_OK);
    {
        if(ret != 1)
        {
            printf("%s\n",errmsg);
            sqlite3_close(db);
            return -1;
        }
    }
    printf("table syu already exists,but continue ....\n");
    sqlite3_close(db);
    return 0;
}
