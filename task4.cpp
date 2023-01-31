    #include<iostream>
    void print_sequence(int);
    using namespace std; 
    main(){
    int number;
    cout<<"Enter the number=";
    cin>>number;
    print_sequence(number);
    }
    void print_sequence(int number){
        for (int i =1;i<=number;i++)
        {   if (i%4==0)
            cout<<i*10;
            if (i%4!=0)
            cout<<i;
            cout<<",";
        }    
    }
