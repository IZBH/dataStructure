#include "list.h"

/*Status �Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��*/
/*��ʼ������˳���������� L �Ѵ��ڣ�1<=L<=ListLength(L)*/
/*����������� e ���� L �е� i ������Ԫ�ص�ֵ*/
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
