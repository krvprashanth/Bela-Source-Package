#pragma once

// Coefficients for FIR High Pass Filter at 3 KHz
static std::vector<std::vector<float>> filterTaps = {{
		-0.000055,
		0.000318,
		0.001401,
		0.003333,
		0.005827,
		0.007995,
		0.008335,
		0.004991,
		-0.003764,
		-0.018906,
		-0.040112,
		-0.065486,
		-0.091722,
		-0.114710,
		-0.130454,
		0.863946,
		-0.130454,
		-0.114710,
		-0.091722,
		-0.065486,
		-0.040112,
		-0.018906,
		-0.003764,
		0.004991,
		0.008335,
		0.007995,
		0.005827,
		0.003333,
		0.001401,
		0.000318,
		-0.000055
}};