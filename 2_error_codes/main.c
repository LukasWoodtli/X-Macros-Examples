#include <stdio.h>

// main.c
typedef enum
{
#define ERROR_GROUP(groupName)
#define ERROR(name) ERRORS_##name,
#define ERROR_GROUP_END(groupName)
#include "errors.xdef"
#undef ERROR_GROUP
#undef ERROR
#undef ERROR_GROUP_END
} errors_t;


#define ERROR_GROUP(groupName) typedef enum {
#define ERROR(name) ERROR_GROUP_##name,
#define ERROR_GROUP_END(groupName) } groupName##_t;
#include "errors.xdef"
#undef ERROR_GROUP
#undef ERROR
#undef ERROR_GROUP_END



int
main()
{


  return 0;
}
