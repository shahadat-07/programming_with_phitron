   {
        int flag = 0;
        for(j = 0; j < i; j++)
        {
            if(S[i] == S[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
        } 
    }