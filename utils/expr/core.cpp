#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
enum Tokentype{WORD, PIPE};
struct Token{
    std::string value;
    Tokentype type;
};
class Lexer{
public:
    std::vector<Token> tokenize(std::string line){
        std::vector<Token> tokens;
        bool singlequote = false;
        bool doublequote = false;
        std::string currentstr;
        for(char c:line){
            if(singlequote){
                if(c == '\''){
                    singlequote = false;
                    addToVector(currentstr, tokens);
                }
                else{
                    currentstr+=c;
                }
                continue;
            }
            else if(doublequote){
                if(c == '\"'){
                    doublequote = false;
                    addToVector(currentstr, tokens);
                }
                else{
                    currentstr+=c;
                }
                continue;
            }
            if(c == '|'){
                addToVector(currentstr, tokens);
                addPipeToVector(tokens);
            }
            else if(c=='\''){
                singlequote = !singlequote;
            }
            else if(c=='\"'){
                doublequote = !doublequote;
            }
            else if(c >= '0' && c <= 'z'){
                currentstr+=c;
            }
            else if(c == ' '){//or any thing like \n to be added
                addToVector(currentstr, tokens);
            }
        }
        addToVector(currentstr, tokens);
        cleanUp(tokens);
        return tokens;
    }
private:
    void addToVector(std::string& current, std::vector<Token>& tokens){
        Token newtoken;
        newtoken.value = current;
        newtoken.type = Tokentype::WORD;
        tokens.push_back(newtoken);
        current.clear();
    }
    void addPipeToVector(std::vector<Token>&tokens){
        Token newtoken;
        newtoken.value = '|';
        newtoken.type = Tokentype::PIPE;
        tokens.push_back(newtoken);
    }
    void cleanUp(std::vector<Token>&tokens){
        std::string empty;
        int n = tokens.size();
        tokens.erase(std::remove_if(tokens.begin(),tokens.end(),[](const Token& t){return t.value.empty();}),tokens.end());
    }
    
};
int main(){
    while(true){
        std::string line;
        std::getline(std::cin, line);
        Lexer lexer;
        std::vector<Token> tokens = lexer.tokenize(line);
        int n=1;
        std::string empty;
        for(Token t: tokens){
            // if(t.value == empty) continue;
            std::string type = (t.type==Tokentype::WORD)? "WORD":"PIPE";
            std::cout << n<<". type: " <<type<<"\t\t\t value: "<<t.value <<"\n";
            n++;
        }
    }
}