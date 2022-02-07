int factorial(int number){
    int facto = 1;
    for (int i = number; i > 0; i--){
        facto *= i;
    }
    return facto;
}