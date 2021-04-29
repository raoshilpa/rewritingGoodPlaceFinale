Jake and Shilpa decided to write a program to rewrite The Good Place finale, because it was awful and they think their program can do a better job.

PSEUDOCODE:

score words from 1-10 based on following categories: (NOTE: mark -1 if not applicable)

  joy (0 - 10), 0 = sad, 10 = happy
  
  conflict creation (0 - 10)
  
  conflict resolution (0 - 10)
  
  realization (0 - 10)
  
  guilt (0 - 10)
  
  anger (0 - 10)
  
  sarcasm (0 - 10)
  
  confusion (0 - 10)
  
score sentences by averaging scores of each word

make sentences together based on 'sentence recipes': grab 

  assign integer values to certain recipes. 
  
  [sad happy sad]
  
  leads into [happy elated content]
  
  ends with [confused] = int 1
  
  starts with [certain/problem solved (i.e 'AHA!' or 'i’m sure!')] = int 2
  
  the difference between them is 1, so the algorithm is more likely to place them together. we want to string together sentences that have the least difference.
  
  difference(string1, string2)


IDEA BOARD:

1. Parsing screencaps from the episode
I think it'd be cool if we took screencaps from each episode, maybe once per 10 seconds or 30 seconds or something, and converted it to a .ppm (see code below). We could then parse the images pixel by pixel, get the color, and determine the emotion of the image based on most colors present, THEN match up corresponding emotional words to that screencap.
We can use the images as an extra parameter to determine our new script's sentence structure (i.e determining the sentence recipes).
In addition to using the "emotions of images" to create the script's new sentences, we can also come up with some cool randomized algorithm to do whatever. maybe like every 3rd+x sentence is a pensive sentence, every e^yth sentence is an angry one, etc.
