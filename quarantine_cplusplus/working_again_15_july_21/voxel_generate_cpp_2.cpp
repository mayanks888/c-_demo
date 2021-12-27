#include<iostream>
#include<string>
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
#include<vector>
#include <math.h>
using namespace std;
template<class T>

T addval(T one, T two)
{
    return (one+two);
}



int points_to_voxel_kernel_3(float points[34720][4], 
                          std::vector<double> voxel_size,
                          std::vector<double> coors_range, int max_points,
                          int max_voxels) {
// ######################################################################
// voxels,coors,num_points_per_voxel,coor_to_voxelidx,
// py::array_t<double> voxels,
// py::array_t<int> coors,
// py::array_t<int> num_points_per_voxel,
// py::array_t<int> coor_to_voxelidx,
// ###############################################################################
  int voxels_rw[max_voxels][max_points][4] = {0};
  int coors_rw[max_voxels][3] = {0};
  int num_points_per_voxel_rw[max_voxels]= {0};
  int coor_to_voxelidx_rw[1][400][400] = {-1};
  // auto points_rw = points;
  int points_rw[34720][4]={1};
  // auto voxels_rw = voxels.mutable_unchecked<3>();
  // auto coors_rw = coors.mutable_unchecked<2>();
  // auto num_points_per_voxel_rw = num_points_per_voxel.mutable_unchecked<1>();
  // auto coor_to_voxelidx_rw = coor_to_voxelidx.mutable_unchecked<3>();

  // auto N = points_rw[0];
  // auto num_features = points_rw[1];

    auto N = 34720;
  auto num_features = 4;
  // auto ndim = points_rw.shape(1) - 1;
  constexpr int NDim=3;
  constexpr int ndim_minus_1 = NDim - 1;
  int voxel_num = 0;
  bool failed = false;
  int coor[NDim];
  int c;
  int grid_size[NDim];
  for (int i = 0; i < NDim; ++i) {
    grid_size[i] = round((coors_range[NDim + i] - coors_range[i]) / voxel_size[i]);
  }
  int voxelidx, num;
  for (int i = 0; i < N; ++i) {
    failed = false;
    for (int j = 0; j < NDim; ++j) {
      c = floor((points_rw[i][j] - coors_range[j]) / voxel_size[j]);
      // c = floor((points_rw(i, j) - coors_range[j]) / voxel_size[j]);
      if ((c < 0 || c >= grid_size[j])) {
        failed = true;
        break;
      }
      coor[ndim_minus_1 - j] = c;
    }
    if (failed)
      continue;
    voxelidx = coor_to_voxelidx_rw[coor[0]][coor[1]][coor[2]];
    if (voxelidx == -1) {
      voxelidx = voxel_num;
      if (voxel_num >= max_voxels)
        continue;
      voxel_num += 1;
      coor_to_voxelidx_rw[coor[0]][ coor[1]][coor[2]] = voxelidx;
      for (int k = 0; k < NDim; ++k) {
        coors_rw[voxelidx][k] = coor[k];
      }
    }
    num = num_points_per_voxel_rw[voxelidx];
    if (num < max_points) {
      // voxel_point_mask_rw(voxelidx, num) = DType(1);
      for (int k = 0; k < num_features; ++k) {
        voxels_rw[voxelidx][num][k] = points_rw[i][k];
      }
      num_points_per_voxel_rw[voxelidx] += 1;
    }
  }
  return voxel_num;

}


int points_to_voxel(float points[34720][4],
                    int max_points,
                    bool reverse_index,
                    int max_voxels){

//   int voxelmap_shape[3];
  // ##########################################################3
  int num_points_per_voxel[max_voxels]= {0};
  int coor_to_voxelidx[1][400][400] = {-1};
  int voxels[max_voxels][max_points][4] = {0};
//   int voxels[60][80000][4] = {0,1,2};
  int coors[max_voxels][3] = {0};
  // std::cout<<num_points_per_voxel<<std::endl;
  std::cout<<"hello"<<std::endl;
return 1;
}



int main()
{ 
constexpr int NDim=3;
constexpr int ndim_minus_1 = NDim - 1;
std::cout<<ndim_minus_1<<std::endl;
std::cout<<addval(2,4)<<std::endl;
// ########################################333
int arr[3][2] = {{0,1}, {2,3}, {4,5}};
// int rows = sizeof(arr)/sizeof(arr[0]);
//     int cols = sizeof(arr[0])/sizeof(arr[0][0]);
//     cout<<rows<<" "<<cols<<endl;
float coor_to_voxelidx[34720][4] = {1};
int rows = sizeof(coor_to_voxelidx)/sizeof(coor_to_voxelidx[0]);
    int cols = sizeof(coor_to_voxelidx[0])/sizeof(coor_to_voxelidx[0][0]);
    cout<<rows<<" "<<cols<<endl;

points_to_voxel(coor_to_voxelidx,80,true,60);
float pcd[34720][4] = {1};

std::vector<double> voxel_sz = { 0.25 , 0.25, 20.};
std::vector<double> coors_range = {-50., -50., -10.,  50.,  50. , 10.};
int val=points_to_voxel_kernel_3(pcd,voxel_sz,coors_range,60,80);
  std::cout<<val<<std::endl;

// ###################################################
  array<int, 5> ar1{{3, 4, 5, 1, 2}};
//   array<int, 5> ar2 = {1, 2, 3, 4, 5};
//   array<string, 2> ar3 = {{string("a"), "b"}};
//   array<array<int,3>,2> arr4 {{
//     {{1,2,3}},
//     {{4,5,6}}
//  }};
//   cout << "Sizes of arrays are" << endl;
//   cout << ar1.size() << endl;
//   cout << ar2.size() << endl;
//   cout << ar3.size() << endl;
//   cout << arr4.size() << endl;
   
//   cout << "\nInitial ar1 : ";
//   for (auto i : ar1)
//     cout << i << ' ';
 
//   // container operations are supported
//   sort(ar1.begin(), ar1.end());
 
//   cout << "\nsorted ar1 : ";
//   for (auto i : ar1)
//     cout << i << ' ';
 
//   // Filling ar2 with 10
//   ar2.fill(10);
 
//   cout << "\nFilled ar2 : ";
//   for (auto i : ar2)
//     cout << i << ' ';
 
 
//   // ranged for loop is supported
//   cout << "\nar3 : ";
//   for (auto &s : ar3)
//     cout << s << ' ';
//  #################################################################
return 0;
}

// #clang++ -Xclang -ast-print -fsyntax-only template.cpp
// clang++ -Xclang -ast-print -fsyntax-only template.cpp
