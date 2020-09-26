#ifndef MY_LIB_H
#define MY_LIB_H

typedef unsigned char   uint8_t;     
typedef signed   char   int8_t;      
typedef unsigned int    uint16_t;    
typedef signed   int    int16_t;     
typedef unsigned long   uint32_t;    
typedef signed   long   int32_t;     
typedef float           float32;     
typedef double          float64;  


typedef struct 
{
    int cap;
    int rear;
    int front;
    int size;
    uint8_t *p_queuebuf;
}T_DeCirqueDate;


typedef struct 
{
    int cap;
    int rear;
    int front;
    uint8_t *p_queuebuf;
}T_DequeDate;


typedef struct MY_NODE
{
    int32_t value;
    struct MY_NODE *p_next;
}T_node;



#endif