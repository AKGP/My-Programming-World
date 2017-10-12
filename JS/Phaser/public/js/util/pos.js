function centerX(obj) {
    obj.x = game.world.centerX;
}

function centerY(obj) {
    obj.y = game.world.centerY;
}

function center(obj) {
    centerAnchor(obj);
    centerX(obj);
    centerY(obj);
}

function centerAnchor(obj) {
    obj.anchor.set(0.5, 0.5);
}