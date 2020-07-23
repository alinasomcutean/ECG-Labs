#include "iostream"
#include "clip.h"
#include "vec3.h"
#include "vec4.h"

int main(int argc, const char* argv[])
{
	std::vector<egc::vec3> clipWindow;
	egc::vec3 p1, p2;
	egc::vec3 v0, v1, v2, v3;
	int xmin = 4, xmax = 13, ymin = 3, ymax = 8;

	p1.x = 6;
	p1.y = 10;
	p1.z = 0;
	p2.x = 11;
	p2.y = 2;
	p2.z = 0;

	v0.x = xmin;
	v0.y = ymin;
	v0.z = 0;

	v1.x = xmax;
	v1.y = ymin;
	v1.z = 0;

	v2.x = xmax;
	v2.y = ymax;
	v2.z = 0;

	v3.x = xmin;
	v3.y = ymax;
	v3.z = 0;

	/*clipWindow.push_back;
	clipWindow.push_back;
	clipWindow.push_back;
	clipWindow.push_back;
	clipWindow[0] = v0;
	clipWindow[1] = v1;
	clipWindow[2] = v2;
	clipWindow[3] = v3;*/

	//int x = egc::lineClip_CyrusBeck(clipWindow, p1, p2);

	return 0;
}