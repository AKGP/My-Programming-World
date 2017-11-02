function setup() { 
  createCanvas(400, 400);
} 

function draw() { 
  if (mouseIsPressed) {
    fill(0);
    console.log(mouseX)
  } else {
    fill(255);
  }
  ellipse(mouseX, mouseY, 80, 80);
}