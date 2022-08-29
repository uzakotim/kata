#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
    for (int i = 0; i< values.size();i++)
    {
        integers.erase(std::remove(integers.begin(),integers.end(),values[i]),integers.end());
    }
    return integers;
}

int main(){
    std::vector<int> arr = {1, 1, 2 ,3 ,1 ,2 ,3 ,4};
    std::vector<int> remove ={1, 3};
    for (auto x: remove_values(arr,remove))
    {
        std::cout<<x<<' ';
    }
    std::cout<<'\n';
}
/*
* [1, 1, 2 ,3 ,1 ,2 ,3 ,4], [1, 3] -> [2, 2, 4]
* [1, 1, 2 ,3 ,1 ,2 ,3 ,4, 4, 3 ,5, 6, 7, 2, 8], [1, 3, 4, 2] -> [5, 6 ,7 ,8]
* [8, 2, 7, 2, 3, 4, 6, 5, 4, 4, 1, 2 , 3], [2, 4, 3] -> [8, 7, 6, 5, 1]
*/