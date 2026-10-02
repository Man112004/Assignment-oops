#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;
};

class Podcaster : public SocialMediaUser {
public:
    string podcastName;

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster user;

    user.username = "Man";
    user.followers = 1500;
    user.podcastName = "Tech Talks";

    user.publishEpisode("Java Basics");

    return 0;
}