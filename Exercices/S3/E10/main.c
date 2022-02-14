#include <stdlib.h>
#include <string.h>
typedef struct product {
    char *name;
    double price;
} product_t;

/*
 * @ptrProd != NULL
 * @return: the price of the product ptrProd
 */
double getPtrPrice(product_t *ptrProd){
    return ptrProd->price;
}


/*
 * @return: the price of the product prod
 */
double getPrice(product_t prod){
    return prod.price;
}

/*
 * ptrProd != NULL
 * @name in ptrProd != NULL
 * @return: a string on the heap that contains the name of the product ptrProd or NULL if an error happens
 */
char* getPtrName(product_t *ptrProd){
    char* res = malloc(strlen(ptrProd->name)+1);
    if (res == NULL){
        return NULL;
    }
    else{
        for (int i = 0; i < strlen(ptrProd->name); i++){
            res[i] = ptrProd->name[i];
        }
        res[strlen(ptrProd->name)] = '\0';
        return res; 
    }
}

/*
 * @name in prod != NULL
 * @return: a string on the heap that contains the name of the product ptrProd or NULL if an error happens
 */
char* getName(product_t prod){
       char* res = malloc(strlen(prod.name)+1);
    if (res == NULL){
        return NULL;
    }
    else{
        for (int i = 0; i < strlen(prod.name); i++){
            res[i] = prod.name[i];
        }
        res[strlen(prod.name)] = '\0';
        return res; 
    }
}

/*
 * @ptrProd != NULL
 * @name in ptrProd != NULL
 * @name in prod != NULL
 * @return: 1 if the two products are the same, i.e., they have the same price and the same name
 */
int prodEquals(product_t *ptrProd, product_t prod){
    if (strcmp(ptrProd->name, prod.name) == 0 && ptrProd->price == prod.price){
        return 1;
    }
    else {
        return 0;
    }
}
