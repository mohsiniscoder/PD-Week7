    #include<iostream>
    int number = 0;
    int print_triangle_sequence(int);
    using namespace std; 
    main(){
    int triangle;
    cout<<"Enter the number of triangle  =";
    cin>>triangle;
    int result = print_triangle_sequence(triangle);
    cout<<result;
    }
    int print_triangle_sequence(int triangle){
        int counter = 2; 
    for ( int i = 1;i<=triangle;i++){
        if ( triangle ==1 ){
            return i;
        }
        i=counter+i;
        number = i;
        counter +=1;
    }
    return number*(triangle/2);
    }
    //not complete will update soon :).