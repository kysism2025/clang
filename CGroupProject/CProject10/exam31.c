#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;


Point AddPoint(Point pos1, Point pos2) {
	linkedPoint pos = { pos1.xpos + pos2.xpos,  pos1.ypos + pos2.ypos };
	return pos;
}

Point MinPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos,  pos1.ypos - pos2.ypos };
	return pos;
}

void main() {
	
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	result = AddPoint(pos1, pos2);
	printf("µ¡¼À°á°ú:%d, %d\n", result.xpos, result.ypos);

	result = MinPoint(pos1, pos2);
	printf("»¬¼À°á°ú:%d, %d", result.xpos, result.ypos);

}