#include "mat3.h"

namespace egc {

	mat3& mat3:: operator =(const mat3& srcMatrix) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrixData[3 * j + i] = srcMatrix.matrixData[3 * j + i];
			}
		}
		return *this;
	}

	mat3 mat3:: operator *(float scalarValue) const {
		mat3 result;
		for (int i = 0; i < 9; i++)
		{
			result.matrixData[i] = scalarValue * matrixData[i];
		}
		return result;
	}

	mat3 mat3:: operator *(const mat3& srcMatrix) const {
		mat3 result;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result.matrixData[i + 3 * j] = 0;
				for (int k = 0; k < 3; k++)
				{
					result.matrixData[i + 3 * j] = result.matrixData[i + 3 * j] + matrixData[i + 3 * k] * srcMatrix.matrixData[k + 3 * j];
				}
			}
		}
		return result;
	}

	vec3 mat3:: operator *(const vec3& srcVector) const {
		vec3 result;
		result.x = this->matrixData[0] * srcVector.x + this->matrixData[3] * srcVector.y + this->matrixData[6] * srcVector.z;
		result.y = this->matrixData[1] * srcVector.x + this->matrixData[4] * srcVector.y + this->matrixData[7] * srcVector.z;
		result.z = this->matrixData[2] * srcVector.x + this->matrixData[5] * srcVector.y + this->matrixData[8] * srcVector.z;
		return result;
	}

	mat3 mat3:: operator +(const mat3& srcMatrix) const {
		mat3 result;
		for (int i = 0; i < 9; i++)
		{
			result.matrixData[i] = matrixData[i] + srcMatrix.matrixData[i];
		}
		return result;
	}

	float& mat3:: at(int i, int j) {
		return matrixData[i + 3 * j];
	}

	const float& mat3:: at(int i, int j) const {
		return matrixData[i + 3 * j];
	}

	float mat3:: determinant() const {
		float det = 0, plus = 0, minus = 0;
		plus = at(0, 0) * at(1, 1) * at(2, 2) + at(0, 1) * at(1, 2) * at(2, 0) + at(1, 0) * at(2, 1) * at(0, 2);
		minus = at(0, 2) * at(1, 1) * at(2, 0) + at(0, 0) * at(1, 2) * at(2, 1) + at(0, 1) * at(1, 0) * at(2, 2);
		det = plus - minus;
		return det;
	}

	mat3 mat3:: inverse() const {
		mat3 result;
		float invdet = 1 / determinant();
		result.matrixData[0] = at(1, 1)*at(2, 2) - at(1, 2)*at(2, 1);
		result.matrixData[1] = at(1, 2)*at(2, 0) - at(1, 0)*at(2, 2);
		result.matrixData[2] = at(1, 0)*at(2, 1) - at(1, 1)*at(2, 0);
		result.matrixData[3] = at(0, 2)*at(2, 1) - at(0, 1)*at(2, 2);
		result.matrixData[4] = at(0, 0)*at(2, 2) - at(0, 2)*at(2, 0);
		result.matrixData[5] = at(0, 1)*at(2, 0) - at(0, 0)*at(2, 1);
		result.matrixData[6] = at(0, 1)*at(1, 2) - at(0, 2)*at(1, 1);
		result.matrixData[7] = at(0, 2)*at(1, 0) - at(0, 0)*at(1, 2);
		result.matrixData[8] = at(0, 0)*at(1, 1) - at(0, 1)*at(1, 0);
		return result * invdet;
	}

	mat3 mat3::transpose() const {
		mat3 result;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result.matrixData[i + 3 * j] = matrixData[j + 3 * i];
			}
		}
		return result;
	}
}