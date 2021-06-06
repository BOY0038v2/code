/*
var anno = 2020;
var nascitamarco = 1996;
var maggeta = 18;
var emaggiorenne = (anno - nascitamarco) > maggeta;
console.log(emaggiorenne);

//media
var etamarco = anno - nascitamarco;
var etaluca = 28;
var media = (etamarco + etaluca) / 2;
console.log(media);

// multiple assignment
var x, y;
x = (2 + 7) * 3 - 5; //=22
y = 3 * x; //=66
console.log(x);
console.log(y);
*/
var x, y;
x = 3;
y = 1;
var ga = x * 10 + y * 3;
var gb = x * 7 + y * 8;
var confronto = ga > gb;
console.log(ga);
console.log(gb);
console.log("giocatore A ha fatto piu punti di b? " + confronto);

// IF ELSE

var etabilly = prompt("quanti anni hai?")
var mageta = 18
if (etabilly>=mageta) {
    alert("sei maggiorenne");
    console.log("bily è maggiorenne");
} else {alert("sei minorenne");
console.log("billy è minorenne") 
}