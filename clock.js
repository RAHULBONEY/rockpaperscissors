CODE: 
function setup() {   createCanvas(750, 600);  
} 
 
function draw() { 
  background(255,255,153); // Background color 
  translate(width / 2, height / 2);   angleMode(DEGREES); 
 
  // Draw the clock face    stroke(150, 75, 0); // Border color   strokeWeight(15); // Border thickness   fill(245, 245, 220); // Fill for the clock face   ellipse(0, 0, 400, 400); // Clock size 
 
  // Draw the hour ticks and numbers     for (let i = 0; i < 12; i++) { 
    const angle = map(i, 0, 12, -90, 270); // Starting angle     const radius = 190; // Radius     const x = radius * cos(angle); 
    const y = radius * sin(angle); 
     
    // Draw the number      textSize(30); // Font size     noStroke(); // No border for numbers 
    fill(0); // Color for numbers     textAlign(CENTER, CENTER); 
    const numRadius = radius - 15; // Number radius     text((i + 11) % 12 + 1, numRadius * cos(angle), numRadius *    sin(angle)); // Number placement 
  } 
 
  // Get the current time   const h = hour() % 12;   const m = minute(); 
  const s = second(); 
 
  // Draw the hour hand   const hAngle = map(h + m / 60, 0, 12, -90, 270);   const hX = 80 * cos(hAngle); // Hand length   const hY = 80 * sin(hAngle);   stroke(0); // Color for hands   strokeWeight(12); // Hand thickness   line(0, 0, hX, hY); 
 
  // Draw the minute hand   const mAngle = map(m + s / 60, 0, 60, -90, 270);   const mX = 130 * cos(mAngle); // Hand length   const mY = 130 * sin(mAngle);   strokeWeight(6); // Hand thickness   line(0, 0, mX, mY); 
 
  // Draw the second hand   const sAngle = map(s, 0, 60, -90, 270);   const sX = 160 * cos(sAngle); // Hand length   const sY = 160 * sin(sAngle);   stroke(255, 0, 0); // Color for the second hand   strokeWeight(4); // Hand thickness   line(0, 0, sX, sY); 
 
 
 
 
 
 
 
 
 
 
 
