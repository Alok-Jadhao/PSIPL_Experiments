/*Consider a structure called book. A book has book_id, title, author, genre, and price of the
book. An author has author name and author id (create another struct for author). Create
an array of books and array of authors. Find those authors whose books belong to the
genre Fiction having books costlier than Rs. 5000.*/

#include <stdio.h>
#include <string.h>
struct author{
    char name[50];
    int author_id;
};

struct book{
    int book_id,price;
    char title[100];
    char genre[50];
    struct author Author[50];
};

void read_books(struct book B[], int n){
    printf("Enter book_id, title, author_name, author_id, genre, price");
    for(int i=0;i<n;i++){
        scanf("%d",&B[i].book_id);
        scanf("%s",B[i].title);
        scanf("%s",B[i].Author[i].name);
        scanf("%d",&B[i].Author[i].author_id);
        scanf("%s",B[i].genre);
        scanf("%d",&B[i].price);
        getchar();
    }
}



int main(){
    printf("Enter the number of books: ");
    int n;
    scanf("%d",&n);
    struct book B[50];
    read_books(B,n);

    for(int i=0;i<n;i++){
        int a= strcmp(B[i].genre,"Fiction");
        if(a==0){
            if(B[i].price>5000)
                printf("The author names is/are: ");
                printf("%s\n",B[i].Author[i].name);
        }
    }
    return 0;
}



