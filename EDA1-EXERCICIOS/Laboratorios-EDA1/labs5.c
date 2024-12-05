void IntercalaVetores(const char *V1, const char *V2, char *V3) {
    if (*V1 == '\0' && *V2 == '\0') {
        *V3 = '\0';
        return;
    }

    if (*V1 != '\0' && *V2 != '\0') {
        *V3 = *V1; 
        *(V3 + 1) = *V2; 
        IntercalaVetores(V1 + 1, V2 + 1, V3 + 2); 
    } else if (*V1 != '\0') {
        *V3 = *V1; 
        IntercalaVetores(V1 + 1, V2, V3 + 1); 
    } else if (*V2 != '\0') {
        *V3 = *V2; 
        IntercalaVetores(V1, V2 + 1, V3 + 1);
    }
}
