// #include "pch.h"
// #include "cnpy.h"
// #include<complex>
// #include<cstdlib>
// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;

// int main()
// {
// 	//srand(0);
// 	cnpy::NpyArray arr = cnpy::npy_load("pcd.npy");
// 	std::complex<int>* loaded_data = arr.data<std::complex<int>>();
// 	for (int i = 0; i < 300; i++) {
// 		cout << loaded_data[i] << ' ';
// 	}

// 	cout << arr.shape[0] << " " << arr.shape[1] << " " << arr.shape[2] << endl;
// 	cout << "Hello World!\n";
// }

#include <fstream>
#include <iostream>
#include <string>


#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{

  std::string v_path="/home/mayank_sati/Downloads/ti-processor-sdk-rtos-j721e-evm-07_02_00_06/tidl_j7_01_04_00_08/ti_dl/test/tvm-dlr/PointPillars_2_remove_numba/second/input_point_clouds/n008-2018-08-27-11-48-51-0400__LIDAR_TOP__1535385095449675.pcd.bin";

  std::ifstream file("675.pcd.bin", std::ios::in | std::ios::binary);
  if (!file) return EXIT_FAILURE;

  float item;
  while (file.read((char*)&item, 4))
  {
    std::cout << "[" << item;
    if (std::round(item) == item) std::cout << ".";
    std::cout  << "]\n";
  }
}


// int main () 
// {

// std::string v_path="/home/mayank_sati/Downloads/ti-processor-sdk-rtos-j721e-evm-07_02_00_06/tidl_j7_01_04_00_08/ti_dl/test/tvm-dlr/PointPillars_2_remove_numba/second/input_point_clouds/n008-2018-08-27-11-48-51-0400__LIDAR_TOP__1535385095449675.pcd.bin";


// std::ifstream f1 (v_path,std::fstream::binary);

// std::ofstream f2 (v_path,std::fstream::trunc|std::fstream::binary);

// f2<<f1.rdbuf();

//   return 0;
// }