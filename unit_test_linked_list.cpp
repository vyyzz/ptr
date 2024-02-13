#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "linked_list.h"

TEST_CASE("linked_list testing") {
    SUBCASE("build_new_linked_list") {
        
        CHECK(build_new_linked_list(0) == nullptr);

        
        struct node *list_one_elt = build_new_linked_list(1);
        CHECK(get_linked_list_data_item_value(list_one_elt, 1, 1) == 1);

        
        struct node *list_two_elts = build_new_linked_list(2);
        CHECK(get_linked_list_data_item_value(list_two_elts, 2, 2) == 2);
    }

    SUBCASE("delete_linked_list") {
        
        struct node *list_one_elt = build_new_linked_list(1);
        delete_linked_list(list_one_elt);
        CHECK(list_one_elt == nullptr);

        
        struct node *empty_list = nullptr;
        delete_linked_list(empty_list);
        CHECK(empty_list == nullptr);
    }

    SUBCASE("print_linked_list_by_jumpers") {
        
        struct node *empty_list = nullptr;
        print_linked_list_by_jumpers(empty_list, 0); 

        struct node *list_one_elt = build_new_linked_list(1);
        list_one_elt->jump = list_one_elt; 
        print_linked_list_by_jumpers(list_one_elt, 1); 

        
        struct node *list_two_elts = build_new_linked_list(2);
        list_two_elts->next->jump = list_two_elts->next; 
        print_linked_list_by_jumpers(list_two_elts, 2); 
    }

    SUBCASE("double_jumpers") {
      
        struct node *empty_list = nullptr;
        double_jumpers(empty_list, 0); 

    
        struct node *list_one_elt = build_new_linked_list(1);
        list_one_elt->jump = list_one_elt; 
        double_jumpers(list_one_elt, 1); 

        
        struct node *list_two_elts = build_new_linked_list(2);
        list_two_elts->next->jump = list_two_elts->next; 
        double_jumpers(list_two_elts, 2); 
    }
}
