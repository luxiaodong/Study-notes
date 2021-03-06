#ifndef GTEST_H
#define GTEST_H

#include "GSort.h"
#include "GTree.h"

class GTest
{
public:
    GTest();

public:
    void test();

private:
    void insert_sort();
    void binary_insert_sort();
    void merge();
    void merge_sort();
    void binary_insert();
    void binary_search();
    void reverse_pair_count();
    void is_contain_two_value_sum();
    void heap_sort();
    void quick_sort();
    void count_sort();
    void random_select();
    void mid_number_in_two_array();

private:
    void tree_successor();
    void tree_predecessor();
    void tree_seach();
    void tree_insert();
    void tree_delete();
};

#endif // GTEST_H
