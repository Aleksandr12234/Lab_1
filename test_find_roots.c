
void test_find_roots(double** results, int* counts) {
    results[0] = find_roots(1, 0, -1, &counts[0]);

    results[1] = find_roots(1, 0, 0, &counts[1]);

    results[2] = find_roots(1, 0, 1, &counts[2]);


    results[3] = find_roots(1, 0, -1E-7, &counts[3]);


    results[4] = find_roots(1, -1E+10, -1, &counts[4]);

    results[5] = find_roots(1, 0, -1E-8, &counts[5]);
}

int main() {

    int counts[6];

    double* results[6];  

    test_find_roots(results, counts);

    return 0;
}


