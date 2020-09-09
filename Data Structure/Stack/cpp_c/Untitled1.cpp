#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

stack<string> backward, for_ward;


void Visit()
{
    string s;
    cin >> s;
    printf("%s\n", s.c_str());
    backward.push(s);
   // while(!for_ward.empty()) for_ward.pop();

}

int Back()
{
    if (backward.size() < 1){
        printf("Ignored\n");
    }
    else{
        for_ward.push(backward.top());
        backward.pop();
        if (backward.size() < 1){
        printf("Ignored\n");
        return 0;
    }
        printf("%s\n", backward.top().c_str());
    }

}

int Forward()
{
    if(for_ward.size() < 1){
        printf("Ignored\n");
    }
    else{
        backward.push(for_ward.top());
        printf("%s\n", for_ward.top().c_str());
        for_ward.pop();
    }
}

void Operation()
{
    string s;
    while(true){
        cin >> s;
        if(s == "VISIT"){
            Visit();
        }
        else if(s == "BACK"){
            Back();
        }
        else if(s == "FORWARD"){
            Forward();
        }
        else if(s == "QUIT"){
            break;
        }

    }
}
int main()
{
    int case_;
    backward.push("http://www.lightoj.com/");
    scanf("%d", &case_);

    while (case_ > 0){
        Operation();
        case_--;
    }
    return 0;
}
