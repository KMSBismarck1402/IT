var training;
var lrSlider;

var b = 0;
var a = 0;

var iterations = 0;
var totalIterations = 10;
var index = 0;

function calculateError() {
  var sum = 0;
  for (var i = 0; i < training.length; i++) {
    var guess = a * training[i].x + b;
    var error = guess - training[i].y;
    sum += error ;
  }
  return sum;
} 

function setup() {
  var canvas = createCanvas(2200, 1200);
  canvas.parent('#canvascontainer');
  canvas.mousePressed(addPoints);
  lrSlider = select('#lrslider');
  training = [];
}

function addPoints() {
  training.push(createVector(mouseX / width, mouseY / height));
}

function draw() {
  var learning_rate = lrSlider.value();
  select('#lr').html(learning_rate);
  background(200);
  var error = calculateError();
  drawPoints();
  drawLine();
  var deltaB = 0;
  var deltaA = 0;
  for (var i = 0; i < training.length; i++) {
    var x = training[i].x;
    var y = training[i].y;
    var yguess = a * x + b;
    var error = yguess - y;
    deltaB += (1 / training.length) * error;  
    deltaA += (1 / training.length) * x * error;
  }
  b -= (deltaB * learning_rate);
  a -= (deltaA * learning_rate);
}

function drawLine() {
  var x1 = 0;
  var y1 = a * x1 + b;
  var x2 = 1;
  var y2 = a * x2 + b;
  line(x1 * width, y1 * height, x2 * width, y2 * height);
}

function drawPoints() {
  stroke(0);
  fill(0);
  for (var i = 0; i < training.length; i++) {
    ellipse(training[i].x * width, training[i].y * height, 4, 4);
  }
}