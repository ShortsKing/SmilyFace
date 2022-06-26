/*
 * Hi
 * 
 * This is a very basic graphics engine. it operates only in black and 
 * white, or whatever your terminal colors are, using 4 ascii 
 * characters: 219 (█), 220 (▄), 223 (▀), and 32 (space).
 * 
 * Together these characters can make images, such as:
 * ▄▄▄▄▄▄▄
 * ██ █ ██
 * █▀███▀█
 * ██▄▄▄██
 * 
 * the first function, image(), which is still in progress, takes 3 
 * inputs: the image, and the height and width. since one of our larger 
 * blocks that we will be using as pixels is 1 character wide but only 
 * half a character tall, we will need to divide the hieght of our 
 * display by 2 to get the number of lines there are. then we can test 
 * to see which character we need by converting the bits of the first 
 * and second rows in a line to binary by multiplying the bit from the second row by 2 and adding them up.
 */


#ifndef iostream
#define <iostream>
#endif

#ifndef string
#define string
#endif

int image(bool image[][], int rows, int columns){
	rows = rows/2;
	for(i = 0; i)
	for(x = 0; x < columns; i++){
		
	}
}
