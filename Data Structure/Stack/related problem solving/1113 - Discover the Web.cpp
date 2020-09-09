#include <iostream>
#include <stack>
#include <string>
#include <cstdio>

using namespace std;

stack<string> backward, for_ward;


void Visit()
{
    string s;
    cin >> s;
    printf("%s\n", s.c_str());
    backward.push(s);
    while(!for_ward.empty())
        for_ward.pop();

}

int Back()
{
    if(backward.size() > 1){
        for_ward.push(backward.top());
        backward.pop();
        printf("%s\n", backward.top().c_str());
    }
    else{
        printf("Ignored\n");
    }

}

int Forward()
{
    if(!for_ward.empty()){
        backward.push(for_ward.top());
        printf("%s\n", for_ward.top().c_str());
        for_ward.pop();
    }
    else{
        printf("Ignored\n");
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
            while(!for_ward.empty()) for_ward.pop();
            while(!backward.empty()) backward.pop();
            backward.push("http://www.lightoj.com/");
            break;
        }

    }
}
int main()
{
    int cases;
    backward.push("http://www.lightoj.com/");

    scanf("%d", &cases);
    int i = 1;
    while (i <= cases){
        printf("Case %d:\n", i);
        Operation();
        i++;
    }
    return 0;
}

