#include <stdio.h>
#include <string.h>

void parse (char html [100]);

int main()
{   
    char htArr1[] = "<p> This a hypertext markup language file code 1 (p) </p>";
    char htArr2[] = "<div> This a hypertext markup language file code 2 (div) </div>";
    char htArr3[] = "<li> This a hypertext markup language file code 3 (li) </li>";
    char htArr4[] = "<span> This a hypertext markup language file code 4 (span) </span>";
    
    printf("Some example html code showing my simple html code parser\n");
    parse (htArr1); 
    parse (htArr2); 
    parse (htArr3);
    parse (htArr4);

    return 0;
}

void parse (char html [100]) {
    
    printf("\n");
    char cpy[100], mod[100];

    int count; //I know.. o" o" 
    count = 0;
    while (html[count] != '>'){
    count++ ; 
    }

    for (int i = 0; i < strlen(html); i++) {
        mod[i] = html[i + count + 1] ; 
    }
    
    count = 0;
    while (mod[count] != '<') {  
    count++ ; 
    }
    mod[count] = '\0' ;

    count = 0;
    while (mod[count] == ' ') {
    count++ ; 
    }
    
    for (int i = 0; i < strlen(mod); i++) {
       cpy[i] = mod[i + count] ;
    }
    printf("%s\n", cpy);
    
}
