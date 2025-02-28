#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "C:\Embedded system\IEEE\Week 14\Stack\Arraybased_Stack\Stack.h"

int isbalanced(char exp[]);
int isMatching(char open,char close);
int main()
{
    char exp[]="(3{4[5]4}3";
    if(isbalanced(exp)){
        printf("Balanced expression");
    }else{
     printf("Not Balanced expression");
    }
}

int isbalanced(char exp[]){
 Stack stack;
 Stack *pstack =&stack;
 CreateStack(pstack);
 int len= strlen(exp);
 char element;
 for(int i=0;i<len;i++){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            push(pstack,exp[i]);
           }else if(exp[i]=='}' || exp[i]==']' || exp[i]==')'){
              if(Is_StackEmpty(pstack)){
                return 0;
              }else{
               element=pop(pstack);
               if(! isMatching(element,exp[i])){
                return 0;
               }
              }
           }

 }
   if(Is_StackEmpty(pstack)){
    return 1;
   }else{
   return 0;
   }
}

int isMatching(char open, char close){
       if(open=='(' && close==')')
        return 1;
       else if(open=='{' && close=='}')
        return 1;
        else if(open=='[' && close==']')
            return 1;
        else{
            return 0;
        }
}
