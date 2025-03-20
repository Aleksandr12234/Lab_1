
double* find_roots(double a, double b, double c, int* count) {
    if (a == 0) {
        *count = 0;
        return NULL;
    }

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double* roots = (double*)malloc(2 * sizeof(double));
        if (roots == NULL) {
            exit(1);
        }
        roots[0] = (-b - sqrt(D)) / (2 * a);
        roots[1] = (-b + sqrt(D)) / (2 * a);
        if (roots[0] > roots[1]) {
            double temp = roots[0];
            roots[0] = roots[1];
            roots[1] = temp;
        }
        *count = 2;
        return roots;
    }
    else if (D == 0) {
        double* root = (double*)malloc(sizeof(double));
        if (root == NULL) {
            exit(1);
        }
        root[0] = -b / (2 * a);
        *count = 1;
        return root;
    }
    else {
        *count = 0;
        return NULL;
    }
}


