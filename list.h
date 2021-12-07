#ifndef LIST_H_
#define LIST_H_

#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int ElemType;
typedef int Status;

typedef struct {
  ElemType data[MAXSIZE];
  int length;
}SqList;

#endif  // !LIST_H_
