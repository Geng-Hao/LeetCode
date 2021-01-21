/*
Q1:給一個int a[20]已排序的陣列，
請寫一個function(a, size)能印出0~500的數字，且不包含a陣列內的元素，
請用最少的時間和空間複雜度完成。
時間是O(n)空間是O(1);
*/



void Show(int *x, int size){
    int *nextPtr = x;
    for (int i = 0; i < size; i++){
     
        if (i == *nextPtr){
            nextPtr++;
            continue;
        }else{
            printf("%d, ",i);
        }
    }
    
}

/*
Q2:給一個int a[20]已排序的陣列，請寫一個function(a, size, b)能依照參數b(b = 0~4)分別印出該區間的數字，且不包含a陣列內的元素。例如：

　b = 0, 印出0~99
　b = 1, 印出100~199
　...
*/

void function(int *a, int size, int b)
{
    int *ptr = a;
    int i;

    while (*ptr < b * 100)
        ptr++;

    if (i=b*100; i<(b+1)*100; i++) {
        if (*ptr == i)
	    ptr++;
	else
	    printf("%d\n", i);
    }
}

/*
Q3: 情境題，給予一個 structure

struct ListStruct{
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};
struct ListStruct ListArray[1000];
#define NULL 0xFFFF
unsigned int ListHead = 0;
其中有兩個條件

條件一
ListArray[Entry1].NextPtr = ListArray[Entry2]
條件二
ListArray[Entry2].DataH << 16 + ListArray[Entry2].DataL > ListArray[Entry1].DataH << 16 + ListArray[Entry1].DataL
也就是說第一個 index 中的 NextPtr 會只到另一個 index 中的起始位址
再來是另一個 index 中的起始位址的資料內容大小一定大於原起始資料的大小

請寫一個function(unsigned int DATA_A, unsigned int DATA_B)，
能在ListArray中找到符合ListArray[Entry].DataH == Data_A 且 ListArray[Entry].DataL == Data_B
並印出其結果。如果沒有找到的話，印出”no found.”。

*/

void Q3(unsigned int DATA_A, unsigned int DATA_B)
{
    int found_entry = ListHead;
    int pre_entry = NULL;
    int next_entry = NULL;

    while (ListArray[found_entry].NextPtr != NULL) {
        if (ListArray[found_entry].DataH == DATA_A && ListArray[found_entry].DataL == DATA_B) {
	    if (pre_entry == NULL)
	        printf("pre_entry = NULL, found_entry = ListHead\n");
            else
	        printf("pre_entry = %d, found_entry = %d", pre_entry, found_entry);
	    printf("found it\n");

	    next_entry = ListArray[found_entry].NextPtr;
	    if (ListArray[next_entry].DataH << 16 + ListArray[next_entry].DataL >
	        DATA_A << 16 + DATA_B)
		break;
	}

	pre_entry = found_entry;
	found_entry = ListArray[found_entry].NextPtr;
    }

}
