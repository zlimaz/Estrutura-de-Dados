int ChecaParenteses(char *expr, int count) {
    if (*expr == '\0') {
        return count == 0 ? 0 : -1;
    }
    if (*expr == '(') {
        return ChecaParenteses(expr + 1, count + 1);
    }
    if (*expr == ')') {
        if (count == 0) {
            return 1;
        }
        return ChecaParenteses(expr + 1, count - 1);
    }
    return ChecaParenteses(expr + 1, count);
}
