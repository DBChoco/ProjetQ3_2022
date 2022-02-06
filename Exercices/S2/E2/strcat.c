char* strcat(char* dest, const char* src) {
    int dest_len = sizeof(dest);
    int src_len = sizeof(src);
    int n = src_len + dest_len;

    for (int i = 0 ; i < src_len ; i++){
        dest[dest_len + i] = src[i];
    }

    return dest;
}