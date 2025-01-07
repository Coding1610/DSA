#include <iostream>
#include <string>

using namespace std;

// you just need to implement this function
bool containsGlitchPattern(const string& videoStream, const string& glitchPattern) {
    // your code here
    
    // step 1 : assign variable
    string subStr = "";
    int vsLen = videoStream.length();
    int gsLen = glitchPattern.length();

    // step 2 : find sub string
    for( int i = 0 ; i < vsLen-gsLen ; i++ ){
        subStr = videoStream.substr(i,gsLen);
        if( subStr == glitchPattern ){
            return true;
            break;
        }
    }

    return false;

}

int main() {
    string videoStream, glitchPattern;
    cin >> videoStream;
    cin >> glitchPattern;

    // please do not change the below code
    if (containsGlitchPattern(videoStream, glitchPattern)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}