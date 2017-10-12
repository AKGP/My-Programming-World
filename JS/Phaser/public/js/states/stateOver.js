var StateOver = {

    preload: function () {


    }
    , create: function () {

        var overText = game.add.text(game.world.centerX, game.world.centerY - 100, "Game Over");
        overText.fill = "#ffffff";
        overText.anchor.set(0.5, 0.5);

        this.btnPlayAgain = gameButtons.addButton("playAgain", -1, -1, this.playAgain, this);
    }
    , playAgain: function () {
        game.state.start("StateMain");
    }
    , update: function () {

    }

}