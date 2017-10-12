var game = new Phaser.Game(640,360,Phaser.AUTO);
var GameState = {
    preload:function(){
        this.load.image('background', '../../assets/images/background.jpg')
    },
    create:function(){
        this.background = this.game.add.sprite(0,0,'background');
        this.background = this.game.add.sprite(this.game.world.centerX, this.game.world.centerY,'background');
        this.background.anchor.setTo(1);
    },
    update:function(){

    }
}

game.state.add('GameState',GameState);
game.state.start('GameState');