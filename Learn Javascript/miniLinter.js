let story = 'Last weekend, I took literally the most beautiful bike ride of my life. The route is called "The 9W to Nyack" and it actually stretches all the way from Riverside Park in Manhattan to South Nyack, New Jersey. It\'s really an adventure from beginning to end! It is a 48 mile loop and it basically took me an entire day. I stopped at Riverbank State Park to take some extremely artsy photos. It was a short stop, though, because I had a really long way left to go. After a quick photo op at the very popular Little Red Lighthouse, I began my trek across the George Washington Bridge into New Jersey.  The GW is actually very long - 4,760 feet! I was already very tired by the time I got to the other side.  An hour later, I reached Greenbrook Nature Sanctuary, an extremely beautiful park along the coast of the Hudson.  Something that was very surprising to me was that near the end of the route you actually cross back into New York! At this point, you are very close to the end.';

let overusedWords = ['really', 'very', 'basically'];
let unnecessaryWords = ['extremely', 'literally', 'actually'];

//Splitting the story into individual array elements
const storyWords = story.split(' ');

//Removing words from the story that are contained in the unnecessaryWords array
const betterWords = storyWords.filter(word => !unnecessaryWords.includes(word));

/*const overUsedCount = () => {
    const countedWords = betterWords.filter(word => overusedWords.includes(word))
    console.log(countedWords.length);    
}
overUsedCount();*/  //Function that logs the length of an array that adds each word that is matched in the overusedWords array

//Returns how many times a word in the overusedWords array is used
const overUsedCount = () => {
    let counter = 0;
    for(let i = 0; i < betterWords.length; i++) {
        let trueFalse = overusedWords.includes(betterWords[i]) 
        if (trueFalse === true) {
            counter++;
        }
    }
    return counter;
}

//Returns how many sentences are in the story using '!' and '.' as sentence enders
const sentenceCount = () => {
    let sentences = 0;
    betterWords.forEach(word => {  
        if (word[word.length-1] === '.' || word[word.length-1] === '!') {
            sentences++;
        }
    })
    return sentences;
}


console.log(`There were ${storyWords.length} words in the story.`)
console.log(`After removing unecessary words, there are now ${betterWords.length} words, with a total of ${sentenceCount()} sentences.`);
console.log(`There are ${overUsedCount()} overused words in the story.`)
console.log(`The new story is now:\n ${betterWords.join(' ')}`);