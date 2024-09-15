/***
Problem Statement: The Fastest Painter

You are managing a team of painters, and you need to paint N walls as quickly as possible. Each painter has a different speed, which determines how many square feet they can paint in one hour.

You are given an array speeds of size M, where speeds[i] represents the number of square feet painter i can paint in one hour.
You are also given an array walls of size N, where walls[j] represents the area in square feet of wall j that needs to be painted.
Each wall can only be painted by one painter at a time, and a painter can only work on one wall at a time. However, painters can start a new wall as soon as they finish their current one.

You need to determine the minimum amount of time required to paint all N walls.

Input:
M: The number of painters.
N: The number of walls.
speeds: An array of size M where speeds[i] is the speed of the i-th painter (square feet per hour).
walls: An array of size N where walls[j] is the area of the j-th wall.
Output: Return the minimum amount of time required to paint all N walls.

Example:
Input:
M = 2
N = 3
speeds = [3, 5]
walls = [15, 10, 20]

Output:
6

Explanation:
Painter 1 can paint at 3 square feet/hour and Painter 2 can paint at 5 square feet/hour.
In 6 hours:
Painter 2 can paint wall 3 (20 square feet).
Painter 1 can paint wall 2 (10 square feet) and then start on wall 1 (paint 8 out of 15 square feet).
Thus, in a total of 6 hours, all walls are painted.
*/

#include <iostream>
#include <vector>

using namespace std;

int minimumTimeToPaint(vector<int> painterSpeed, vector<int> walls)
{
	
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}