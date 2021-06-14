//Define Light Parameters Here
const cDimLight = 40;
const cBrightLight = 20;
const cAnimationType = "torch";
/*
valid animation types are:
"none", "torch", "pulse", "chroma", "wave", "fog", "sunburst", "dome", "emanation", "hexa", "ghost", "energy", "roiling" (requires negative light value), "hole" (requires negative light value)
*/

let colorArray = ['#FF6633', '#FFB399', '#FF33FF', '#FFFF99', '#00B3E6', '#E6B333', '#3366E6', '#999966', '#99FF99', '#B34D4D','#80B300', '#809900', '#E6B3B3', '#6680B3', '#66991A', '#FF99E6', '#CCFF1A', '#FF1A66', '#E6331A', '#33FFCC','#66994D', '#B366CC', '#4D8000', '#B33300', '#CC80CC', '#66664D', '#991AFF', '#E666FF', '#4DB3FF', '#1AB399','#E666B3', '#33991A', '#CC9999', '#B3B31A', '#00E680', '#4D8066', '#809980', '#E6FF80', '#1AFF33', '#999933','#FF3380', '#CCCC00', '#66E64D', '#4D80CC', '#9900B3', '#E64D66', '#4DB380', '#FF4D4D', '#99E6E6', '#6666FF'];

let j;

async function wait(ms) {
    return new Promise(resolve => {
        setTimeout(resolve, ms);
    });
}
let i = 0;
while (i < 100) {
    j = colorArray[Math.floor(Math.random() * colorArray.length)]
    let dataUpdate = {
        dimLight: !token.data.dimLight ? cDimLight : 0,
        brightLight: !token.data.brightLight ? cBrightLight : 0,
        lightColor: j,
        lightAlpha: 0.3,
        lightAnimation: {"type": cAnimationType, "speed": 5, "intensity": 3 }
    }
    token.update(dataUpdate);
    i++;
    await wait(500);
};