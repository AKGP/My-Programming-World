GameButtons = function () {


    this.addButton = function (type, xx, yy, f, scope) {
            if (xx == -1) {
                xx = game.world.centerX;
            }
            if (yy == -1) {
                yy = game.world.centerY;
            }

            var over = 0;
            var down = 1;

            switch (type) {

            case "start":
                over = 6;
                down = 7;
                break;

            case "playAgain":
                over = 0;
                down = 1;
                break;

            case "yes":
                over = 2;
                down = 3;
                break;

            case "no":
                over = 4;
                down = 5;
                break;
            }

            var button = game.add.button(xx, yy, "buttons", f, scope, down, over, down);
            button.anchor.set(0.5, 0.5);
            return button;
        },

        this.addAudioButton = function (type, xx, yy, f, scope) {

            if (xx == -1) {
                xx = game.world.centerX;
            }
            if (yy == -1) {
                yy = game.world.centerY;
            }
            var mButton = game.add.sprite(xx, yy, "soundButtons");
            if (type == "music") {
                mButton.frame = 2;
                this.musicButton = mButton;
            } else {
                this.soundButton = mButton;
            }

            mButton.inputEnabled = true;
            mButton.events.onInputDown.add(f, scope);
            return mButton;
        }
        , this.updateButtons = function () {
            if (musicOn == true) {
                this.musicButton.frame = 2;
            } else {
                this.musicButton.frame = 3;
            }
            if (soundOn == true) {

                this.soundButton.frame = 0;
            } else {
                this.soundButton.frame = 1;
            }
        }
        , this.toggleMusic = function (target, scope) {
            musicOn = !musicOn;
            if (musicOn == true) {
                target.frame = 2;
            } else {
                target.frame = 3;
            }
            gameMedia.updateMusic();
        },

        this.toggleSound = function (target, scope) {
            soundOn = !soundOn;
            if (soundOn == true) {
                target.frame = 0;
            } else {
                target.frame = 1;
            }
        }
}