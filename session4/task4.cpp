#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;
};

class YouTuber : public SocialMediaUser {
public:
    string channelName;
};

class GamingYouTuber : public YouTuber {
public:
    void streamGame(string gameName) {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber gamer;

    gamer.username = "Man";
    gamer.followers = 5000;
    gamer.channelName = "Man Gaming";

    gamer.streamGame("BGMI");

    return 0;
}