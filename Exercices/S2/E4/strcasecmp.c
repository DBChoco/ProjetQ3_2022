int strcasecmp(const char *s1, const char *s2) {
    int pos = 0;
    int keep = 1;

    while (keep == 1){
        if ((int)s1[pos] != '\0' && (int)s2[pos] != '\0'){
            if ((int)s1[pos] == (int)s2[pos]){
                pos ++;
            }
            else if (((int)s1[pos] + 20) == (int)s2[pos] || ((int)s1[pos] - 20) == (int)s2[pos]){
                pos ++;
            }
            else if ((int)s1[pos] > (int)s2[pos]){
                return 1;
            }
            else if ((int)s1[pos] < (int)s2[pos]){
                return -1;
            }
            
        }
        else if ((int)s1[pos] != '\0') {
            return 1;
        }
        else if ((int)s2[pos] != '\0') {
            return -1;
        }
        else {
            return 0;
        }
    }
    return 0;
}