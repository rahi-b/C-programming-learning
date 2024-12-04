
    for(i=1;i<=9;i++){
        if(i<4)
        k++;
        else
        k--;
        for(j=1;j<=9;j++){
            if(j>=6-k && j<=4+k)
            printf("*");
            else
            printf(" ");
