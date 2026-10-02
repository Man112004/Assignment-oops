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

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

int main() {
    YouTuber user;

    user.username = "Man";
    user.followers = 2000;
    user.channelName = "Man Tech";

    user.uploadVideo("C++ Tutorial");

    return 0;
}