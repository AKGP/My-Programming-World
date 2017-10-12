function checkHighScore(key, score) {
    
    if (localStorage.getItem(key) === null) {

        localStorage.setItem(key, score);
        highScore = score;
    } else {
        if (score > localStorage.getItem(key)) {

            localStorage.setItem(key, score);
            highScore = score;
        } else {
            return localStorage.getItem(key);
        }
    }
    return highScore;
}