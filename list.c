#include "list.h"

/*Status 是函数的类型，其值是函数结果状态代码，如OK等*/
/*初始条件：顺序线性链表 L 已存在，1<=L<=ListLength(L)*/
/*操作结果：用 e 返回 L 中第 i 个数据元素的值*/
Status GetElem(SqList L, int i, ElemType* e) { 
	if ((L.length == 0) || i < 1 || i > L.length) 
		return ERROR;
  *e = L.data[i - 1];
  return OK;
}
Status ListInsert(SqList* L, int i, ElemType e) { 
	int k;
  if (L->length == MAXSIZE) return ERROR;
  IF
}
