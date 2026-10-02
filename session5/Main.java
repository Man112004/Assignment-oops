class SocialMediaUploader {

    void uploadContent() {
        System.out.println("Uploading content to social media");
    }
}

class InstagramUploader extends SocialMediaUploader {

    @Override
    void uploadContent() {
        System.out.println("Uploading photo/reel on Instagram");
    }
}

class YouTubeUploader extends SocialMediaUploader {

    @Override
    void uploadContent() {
        System.out.println("Uploading video on YouTube");
    }
}

class Main {
    public static void main(String[] args) {

        InstagramUploader instagram = new InstagramUploader();
        instagram.uploadContent();

        YouTubeUploader youtube = new YouTubeUploader();
        youtube.uploadContent();
    }
} 