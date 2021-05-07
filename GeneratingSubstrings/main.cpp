#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int subs(string input, string output[])
{
    if(input.empty())
    {
        output[0]=="";
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString,output);
    for(int i=0;i<smallOutputSize;i++ ){
    output[i+smallOutputSize]=input[0]+output[i];
    }
    return 2*smallOutputSize;

}


int main()
{
    string input;
    cin>>input;
    int b = pow(2,input.length());
    string* output= new string[b];
    subs(input,output);//subs tells the number of the subsequences
    for(int i=0; i<b; i++)
    {
        cout<<output[i]<<endl;
    }
}
