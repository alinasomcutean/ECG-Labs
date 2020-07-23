 #include <stdio.h>
#include "transform.h"
#include "vec2.h"
#include "vec3.h"
#include "mat3.h"
#include "mat4.h"

namespace egc {

	//transformation matrices in 2D
	mat3 translate(const vec2 translateArray) {
		mat3 t;
		t.at(0, 2) = translateArray.x;
		t.at(1, 2) = translateArray.y;
		return t;
	}

	mat3 translate(float tx, float ty) {
		mat3 t;
		t.at(0, 2) = tx;
		t.at(1, 2) = ty;
		return t;
	}

	mat3 scale(const vec2 scaleArray) {
		mat3 s;
		s.at(0, 0) = scaleArray.x;
		s.at(1, 1) = scaleArray.y;
		return s;
	}

	mat3 scale(float sx, float sy) {
		mat3 s;
		s.at(0, 0) = sx;
		s.at(1, 1) = sy;
		return s;
	}

	mat3 rotate(float angle) {
		mat3 r;
		r.at(0, 0) = cos(angle*PI / 180);
		r.at(0, 1) = -sin(angle*PI / 180);
		r.at(1, 0) = sin(angle*PI / 180);
		r.at(1, 1) = cos(angle*PI / 180);
		return r;
	}

	//transformation matrices in 3D

	mat4 translate(const vec3 translateArray) {
		mat4 t;
		t.at(0, 3) = translateArray.x;
		t.at(1, 3) = translateArray.y;
		t.at(2, 3) = translateArray.z;
		return t;
	}

	mat4 translate(float tx, float ty, float tz) {
		mat4 t;
		t.at(0, 3) = tx;
		t.at(1, 3) = ty;
		t.at(2, 3) = tz;
		return t;
	}

	mat4 scale(const vec3 scaleArray) {
		mat4 s;
		s.at(0, 0) = scaleArray.x;
		s.at(1, 1) = scaleArray.y;
		s.at(2, 2) = scaleArray.z;
		return s;
	}

	mat4 scale(float sx, float sy, float sz) {
		mat4 s;
		s.at(0, 0) = sx;
		s.at(1, 1) = sy;
		s.at(2, 2) = sz;
		return s;
	}

	mat4 rotateZ(float angle) {
		mat4 r;
		r.at(0, 0) = cos(angle*PI / 180);
		r.at(0, 1) = -sin(angle*PI / 180);
		r.at(1, 0) = sin(angle*PI / 180);
		r.at(1, 1) = cos(angle*PI / 180);
		return r;
	}

	mat4 rotateX(float angle) {
		mat4 r;
		r.at(1, 1) = cos(angle*PI / 180);
		r.at(1, 2) = -sin(angle*PI / 180);
		r.at(2, 1) = sin(angle*PI / 180);
		r.at(2, 2) = cos(angle*PI / 180);
		return r;
	}

	mat4 rotateY(float angle) {
		mat4 r;
		r.at(0, 0) = cos(angle*PI / 180);
		r.at(2, 0) = -sin(angle*PI / 180);
		r.at(0, 2) = sin(angle*PI / 180);
		r.at(2, 2) = cos(angle*PI / 180);
		return r;
	}

}