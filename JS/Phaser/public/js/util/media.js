GameMedia = function () {

    this.musicPlaying = false;

    this.updateMusic = function () {
            
            if (musicOn == true) {
                if (this.musicPlaying == false) {

                    this.musicPlaying = true;
                    if (this.backgroundMusic) {
                        this.backgroundMusic.play();
                    }

                }
            } else {
                this.musicPlaying = false;
                if (this.backgroundMusic) {
                    this.backgroundMusic.stop();
                }
            }
        }
        , this.reset = function () {
            this.musicPlaying = false;
        }
        , this.setBackgroundMusic = function (music) {
            this.musicPlaying=false;
            if (this.backgroundMusic) {
                this.backgroundMusic.stop();
            }
            this.backgroundMusic = music;
            this.backgroundMusic.volume = .5;
            this.backgroundMusic.loop = true;
        },

        this.playSound = function (sound) {
            if (soundOn == true) {
                sound.play();
            }
        }
}