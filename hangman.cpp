#include<bits/stdc++.h>
using namespace std;
const string WORD_LIST[] = { 
	"angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame",
        "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house",
        "island", "jewel",
        "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun",
        "table", "tail", "thread", "throat", "thumb", "ticket", "toe", "tongue", "tooth",
        "town", "train", "tray", "tree", "trousers",
        "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm"
};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

string chooseWord(){
    int random = rand() % WORD_COUNT;
    return WORD_LIST[random];
}
string Init(string word){
    int wordLength = word.length();
    string wordGuess = string(wordLength, '_');
    return wordGuess;
}
char yourGuess(char guess){
    cout << "Your guess: ";cin >> guess;
    return guess;
}
bool checkTrue(string word,char guess) {
    int count = 0;
    for(int i = 0 ; i < word.size(); i++){
        if(word[i] != guess)count++;
    }
    if(count == word.size())return 0;
    else return 1;
}
string updateWord(string word,char guess,string formatWord){
    for(int i = 0 ; i < word.size(); i++){
        if(word[i] == guess){
            formatWord[i] = guess;
        }
    }
    return formatWord;
}

int main(){
    srand(time(0));
    string word = chooseWord();
    string formatWord = Init(word);
    cout << word << endl;
    cout << "=================="<<endl;
    int count = 0;
    do{
        char guess = yourGuess(guess);
        if(checkTrue(word,guess))formatWord = updateWord(word,guess,formatWord);
        else count++;
        cout << formatWord << endl;
    }
    while(count != 7);
	cout <<"OK";
    cout <"++++";
    cout << endl;
}
