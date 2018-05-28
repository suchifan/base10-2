//
//  main.cpp
//  base10-2
//
//  Created by suchao on 5/28/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char input[20];
    const char password[20] = "correct";
    cout << "input your password:\n";
    int i;
    for(i=0; i<3; i++){
        cin >> input;
        if(!strcmp(input, password)){
            cout << "correct!" << endl;
            break;
        }else{
            cout << "please reinput:\n";
        }
    }
    if(i == 3){
        cout << "3 times!" << endl;
    }
    
    return 0;
}
