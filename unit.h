/* Unit tests for map */

#include "./map/types.pass.h"

#include "./map/map.access/at.pass.h"
#include "./map/map.access/empty.pass.h"
#include "./map/map.access/index_key.pass.h"
#include "./map/map.access/index_rv_key.pass.h"
#include "./map/map.access/iterator.pass.h"
#include "./map/map.access/max_size.pass.h"
#include "./map/map.access/size.pass.h"

#include "./map/map.cons/alloc.pass.h"
#include "./map/map.cons/compare.pass.h"
#include "./map/map.cons/compare_alloc.pass.h"
#include "./map/map.cons/copy.pass.h"
#include "./map/map.cons/copy_assign.pass.h"
#include "./map/map.cons/default.pass.h"
#include "./map/map.cons/default_recursive.pass.h"
#include "./map/map.cons/iter_iter.pass.h"
#include "./map/map.cons/iter_iter_comp.pass.h"
#include "./map/map.cons/iter_iter_comp_alloc.pass.h"
#include "./map/map.cons/move.pass.h"

#include "./map/map.modifiers/clear.pass.h"
#include "./map/map.modifiers/erase_iter.pass.h"
#include "./map/map.modifiers/erase_iter_iter.pass.h"
#include "./map/map.modifiers/erase_key.pass.h"
#include "./map/map.modifiers/insert_cv.pass.h"
#include "./map/map.modifiers/insert_iter_cv.pass.h"
#include "./map/map.modifiers/insert_iter_iter.pass.h"
#include "./map/map.modifiers/insert_iter_rv.pass.h"
#include "./map/map.modifiers/insert_rv.pass.h"

#include "./map/map.ops/count.pass.h"
#include "./map/map.ops/equal_range.pass.h"
#include "./map/map.ops/find.pass.h"
#include "./map/map.ops/lower_bound.pass.h"
#include "./map/map.ops/upper_bound.pass.h"

#include "./map/map.special/member_swap.pass.h"
#include "./map/map.special/non_member_swap.pass.h"


/* Unit tests for multimap */

#include "./multimap/empty.pass.h"
#include "./multimap/iterator.pass.h"
#include "./multimap/max_size.pass.h"
#include "./multimap/size.pass.h"
#include "./multimap/types.pass.h"

#include "./multimap/multimap.cons/alloc.pass.h"
#include "./multimap/multimap.cons/compare.pass.h"
#include "./multimap/multimap.cons/compare_alloc.pass.h"
#include "./multimap/multimap.cons/copy.pass.h"
#include "./multimap/multimap.cons/default.pass.h"
#include "./multimap/multimap.cons/iter_iter.pass.h"
#include "./multimap/multimap.cons/iter_iter_comp.pass.h"
#include "./multimap/multimap.cons/iter_iter_comp_alloc.pass.h"
#include "./multimap/multimap.cons/move.pass.h"

#include "./multimap/multimap.modifiers/clear.pass.h"
#include "./multimap/multimap.modifiers/erase_iter.pass.h"
#include "./multimap/multimap.modifiers/erase_iter_iter.pass.h"
#include "./multimap/multimap.modifiers/erase_key.pass.h"
#include "./multimap/multimap.modifiers/insert_cv.pass.h"
#include "./multimap/multimap.modifiers/insert_iter_cv.pass.h"
#include "./multimap/multimap.modifiers/insert_iter_iter.pass.h"
#include "./multimap/multimap.modifiers/insert_iter_rv.pass.h"
#include "./multimap/multimap.modifiers/insert_rv.pass.h"

#include "./multimap/multimap.ops/count.pass.h"
#include "./multimap/multimap.ops/equal_range.pass.h"
#include "./multimap/multimap.ops/find.pass.h"
#include "./multimap/multimap.ops/lower_bound.pass.h"
#include "./multimap/multimap.ops/upper_bound.pass.h"

#include "./multimap/multimap.special/member_swap.pass.h"
#include "./multimap/multimap.special/non_member_swap.pass.h"

/* Unit tests for rebalancing */
#include "balanced_after_insertion.h"
#include "balanced_after_erasing.h"

void unit_map_access() {
	cout << "   Testing map access" << endl;

	atpass();
	empty();
	index_key();
	index_rv_key();
	iter();
	max_size();
	size();
}

void unit_map_cons() {
	cout << "   Testing map cons" << endl;

	alloc();
	compare();
	compare_alloc();
	copy();
	copy_assign();
	_default();
	default_recursive();
	iter_iter();
	iter_iter_comp();
	iter_iter_comp_alloc();
	move();
}

void unit_map_modifiers() {
	cout << "   Testing map modifiers" << endl;

	clear();
	erase_iter();
	erase_iter_iter();
	erase_key();
	insert_cv();
	insert_iter_cv();
	insert_iter_iter();
	insert_iter_rv();
	insert_rv();
}

void unit_map_ops() {	
	cout << "   Testing map ops" << endl;

	count();
	equal_range();
	find();
	lower_bound();
	upper_bound();
}

void unit_map_special() {
	cout << "   Testing map special" << endl;

	member_swap();
	non_member_swap();
}

void unit_map() {
	cout << "  Testing map" << endl;

	types();

	unit_map_access();
	unit_map_cons();
	unit_map_modifiers();
	unit_map_ops();
	unit_map_special();
}

void unit_multi_map_cons() {
	cout << "   Testing multimap cons" << endl;

	multi_alloc();
	multi_compare();
	multi_compare_alloc();
	multi_copy();
	multi_default();
	multi_iter_iter();
	multi_iter_iter_comp();
	multi_iter_iter_comp_alloc();
	multi_move();
}

void unit_multi_map_modifiers() {
	cout << "   Testing multimap modifiers" << endl;

	multi_clear();
	multi_erase_iter();
	multi_erase_iter_iter();
	multi_erase_key();
	multi_insert_cv();
	multi_insert_iter_cv();
	multi_insert_iter_iter();
	multi_insert_iter_rv();
	multi_insert_rv();
}

void unit_multi_map_ops() {
	cout << "   Testing multimap ops" << endl;

	multi_count();
	multi_equal_range();
	multi_find();
	multi_lower_bound();
	multi_upper_bound();

}

void unit_multi_map_special() {
	cout << "   Testing multimap special" << endl;
	multi_member_swap();
	multi_non_member_swap();
}

void unit_multi_map() {
	cout << endl << "  Testing multimap" << endl;

	multi_empty();
	multi_iterator();
	multi_max_size();
	multi_size();
	multi_types();

	unit_multi_map_cons();
	unit_multi_map_modifiers();
	unit_multi_map_ops();
	unit_multi_map_special();
}

void unit() {
	cout << " Unit tests are launched" << endl;

	unit_map();
	unit_multi_map();
	balanced_after_insertion();
	balanced_after_erasing();
}
