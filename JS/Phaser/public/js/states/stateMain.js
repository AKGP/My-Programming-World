var StateMain = {

    preload: function () {

    },

    create: function () {

        //reset the score
        score = 0;

        //add some buttons
        this.btnYes = gameButtons.addButton("yes", -1, -1, this.sayYes, this);
        this.btnNo = gameButtons.addButton("no", -1, this.btnYes.y - this.btnYes.height, this.sayNo, this);

        //add sound buttons
        this.btnMusic = gameButtons.addAudioButton("music", 20, 20, gameButtons.toggleMusic, this);
        this.btnSound = gameButtons.addAudioButton("sound", 20, 70, gameButtons.toggleSound, this);

        //if using a scrolling game uncomment these lines
        //this.audioGroup=game.add.group();
        //this.audioGroup.fixedToCamera=true;

        //define sounds here
        this.elephant = game.add.audio("elephant");

        //define background music
        this.backgroundMusic = game.add.audio("backgroundMusic");
        //pass the background music to the gameMedia object
        gameMedia.setBackgroundMusic(this.backgroundMusic);

        //init the music
        gameMedia.updateMusic();
        //init the sound buttons
        gameButtons.updateButtons();
    },

    update: function () {

    }
    , sayYes: function () {
        //play sound by passing it to game media
        gameMedia.playSound(this.elephant);
    }
    , sayNo: function () {
        this.backgroundMusic.stop();
        game.state.start("StateOver");
    }


}