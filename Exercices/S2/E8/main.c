struct fract_t {
        int num;
        int denum;
};

void swap(struct fract_t *a, struct fract_t *b){
    int tempNum = a->num;
    int tempDenum = a->denum;
    a->num = b->num;
    a->denum = b->denum;
    b->num = tempNum;
    b->denum = tempDenum;
}