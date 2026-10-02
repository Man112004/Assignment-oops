#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;
};

class InstagramInfluencer : public SocialMediaUser {
public:
    void postStory(string storyTitle) {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer user;

    user.username = "Man";
    user.followers = 3000;

    user.postStory("New Travel Vlog");

    return 0;
}