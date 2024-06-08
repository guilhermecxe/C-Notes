#include <iostream>
#include <limits>

using namespace std;

string to_right(string line){
    bool lowercase, uppercase;

    for(int i=0; i<line.size(); i++){
        lowercase = (line.at(i) >= 97) && (line.at(i) <= 122);
        uppercase = (line.at(i) >= 65) && (line.at(i) <= 90);
        if(lowercase || uppercase)
            line.at(i) = line.at(i) + 3;
    }
    return line;
}

string reverse(string line){
    char aux;
    int line_size = line.size();

    for(int i=0; i<(line_size / 2); i++){
        aux = line.at(i);
        line.at(i) = line.at(line_size-1-i);
        line.at(line_size-1-i) = aux;
    }
    return line;
}

string to_left(string line){
    int line_size = line.size();

    for(int i=(line_size/2); i<line_size; i++)
        line.at(i) = line.at(i) - 1;
    return line;
}

int main(){
    int lines;
    cin >> lines;
    string string_array[lines];

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // para ignorar os saltos de linhas nas próximas leituras

    for(int i=0; i<lines; i++)
        getline(cin, string_array[i]);

    for(int i=0; i<lines; i++)
        cout << to_left(reverse(to_right(string_array[i]))) << endl;

    return 0;
}