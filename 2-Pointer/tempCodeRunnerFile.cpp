  int i = 3;
    int *t = &i;
    // cout << (*t)++ <<endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t "<< t << endl;
    t = t + 1;
    cout << " After t "<< t << endl;
    
    cout << *t << endl;
}