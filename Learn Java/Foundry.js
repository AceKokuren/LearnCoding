//Define Light Parameters Here
const cDimLight = 40;
const cBrightLight = 20;
const cAnimationType = ["torch", "pulse", "chroma", "wave", "swirling fog", "sunburst", ""]
/*
valid animation types are:
"none", "torch", "pulse", "chroma", "wave", "fog", "sunburst", "dome", "emanation", "hexa", "ghost", "energy", "roiling" (requires negative light value), "hole" (requires negative light value)
*/
const letterAndNumbers = ['A','B','C','D','E','F','0','1','2','3','4','5','6','7','8','9'];
const colourArray = [];

function createColours() {
    let colour = '#';
    for (let i = 0; i < 6; i++) {
        let element = Math.floor(Math.random() * letterAndNumbers.length);
        colour += letterAndNumbers[element];
    }
    return colour;
}

function addColours() {
    do {
        colour = createColours();
        if (!colourArray.includes(colour)) {
            colourArray.push(colour);
        }
    } while (colourArray.length < 100);
    return colourArray;
}

async function wait(ms) {
    return new Promise(resolve => {
        setTimeout(resolve, ms);
    });
}


addColours();
let i = 0;
while (i < 100) {
    let colour = colourArray[i];
    let dataUpdate = {
        'light.dim': !token.data.light.dim ? cDimLight : 0,
        'light.bright': !token.data.light.bright ? cBrightLight : 0,
        'light.color': colour,
        'light.alpha': Math.random(),
        'light.animation': {"type": cAnimationType, "speed": 5, "intensity": 3 }
    }
    token.document.update(dataUpdate);
    i++;
    await wait(500);
};