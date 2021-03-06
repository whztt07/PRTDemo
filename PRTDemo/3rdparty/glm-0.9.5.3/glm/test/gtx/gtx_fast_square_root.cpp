///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2013-10-25
// Updated : 2013-10-25
// Licence : This source is under MIT licence
// File    : test/gtx/fast_square_root.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_FORCE_RADIANS
#include <glm/gtx/fast_square_root.hpp>
#include <glm/gtc/type_precision.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/vector_relational.hpp>

int test_fastInverseSqrt()
{
	int Error(0);

	Error += glm::epsilonEqual(glm::fastInverseSqrt(1.0f), 1.0f, 0.01f) ? 0 : 1;
	Error += glm::epsilonEqual(glm::fastInverseSqrt(1.0), 1.0, 0.01) ? 0 : 1;
	Error += glm::all(glm::epsilonEqual(glm::fastInverseSqrt(glm::vec2(1.0f)), glm::vec2(1.0f), 0.01f)) ? 0 : 1;
	Error += glm::all(glm::epsilonEqual(glm::fastInverseSqrt(glm::dvec3(1.0)), glm::dvec3(1.0), 0.01)) ? 0 : 1;
	Error += glm::all(glm::epsilonEqual(glm::fastInverseSqrt(glm::dvec4(1.0)), glm::dvec4(1.0), 0.01)) ? 0 : 1;

	
	return 0;
}

int main()
{
	int Error(0);

	Error += test_fastInverseSqrt();

	return Error;
}
