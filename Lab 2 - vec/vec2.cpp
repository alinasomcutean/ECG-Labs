#include "vec2.h"

namespace egc {

	vec2& vec2:: operator =(const vec2 &srcVector) {
		this->x = srcVector.x;
		//this->u = srcVector.u;

		this->y = srcVector.y;
		//this->v = srcVector.v;

		return *this;
	}

	vec2 vec2:: operator +(const vec2& srcVector) const {
		vec2 result;
		result.x = this->x + srcVector.x;
		//result.u = this->u + srcVector.u;

		result.y = this->y + srcVector.y;
		//result.v = this->v + srcVector.v;

		return result;
	}

	vec2& vec2:: operator +=(const vec2& srcVector) {
		this->x = this->x + srcVector.x;
		this->y = this->y + srcVector.y;
		return *this;
	}

	vec2 vec2:: operator *(float scalarValue) const {
		vec2 result;
		result.x = this->x * scalarValue;
		result.y = this->y * scalarValue;
		return result;
	}

	vec2 vec2:: operator -(const vec2& srcVector) const {
		vec2 result;
		result.x = this->x - srcVector.x;
		result.y = this->y - srcVector.y;
		return result;
	}

	vec2& vec2:: operator -=(const vec2& srcVector) {
		this->x = this->x - srcVector.x;
		this->y = this->y - srcVector.y;
		return *this;
	}

	vec2 vec2:: operator -() const {
		this->x = -this->x;
		this->y = -this->y;
		return *this;
	}

	float vec2::length() const {
		floar result;
		result = sqrt(this->x * this->x + this->y * this->y);
	}

	vec2& vec2:: normalize() {

	}
}