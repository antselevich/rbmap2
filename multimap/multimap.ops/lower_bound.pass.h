//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <map>

// class multimap

//       iterator lower_bound(const key_type& k);
// const_iterator lower_bound(const key_type& k) const;

#include <map>
#include <cassert>

#include "../../rbmap2.h"

void multi_lower_bound()
{
	std::cout << "    iterator lower_bound(const key_type& k)" << std::endl;
	std::cout << "    const_iterator lower_bound(const key_type& k) const" << std::endl;
    typedef std::pair<const int, double> V;
    typedef rbmultimap<int, double> M;
    {
        typedef M::iterator R;
        V ar[] =
        {
            V(5, 1),
            V(5, 2),
            V(5, 3),
            V(7, 1),
            V(7, 2),
            V(7, 3),
            V(9, 1),
            V(9, 2),
            V(9, 3)
        };
        M m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        R r = m.lower_bound(4);
        assert(r == m.begin());
        r = m.lower_bound(5);
        assert(r == m.begin());
        r = m.lower_bound(6);
        assert(r == next(m.begin(), 3));
        r = m.lower_bound(7);
        assert(r == next(m.begin(), 3));
        r = m.lower_bound(8);
        assert(r == next(m.begin(), 6));
        r = m.lower_bound(9);
        assert(r == next(m.begin(), 6));
        r = m.lower_bound(10);
        assert(r == m.end());
    }
    {
        typedef M::const_iterator R;
        V ar[] =
        {
            V(5, 1),
            V(5, 2),
            V(5, 3),
            V(7, 1),
            V(7, 2),
            V(7, 3),
            V(9, 1),
            V(9, 2),
            V(9, 3)
        };
        const M m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        R r = m.lower_bound(4);
        assert(r == m.begin());
        r = m.lower_bound(5);
        assert(r == m.begin());
        r = m.lower_bound(6);
        assert(r == next(m.begin(), 3));
        r = m.lower_bound(7);
        assert(r == next(m.begin(), 3));
        r = m.lower_bound(8);
        assert(r == next(m.begin(), 6));
        r = m.lower_bound(9);
        assert(r == next(m.begin(), 6));
        r = m.lower_bound(10);
        assert(r == m.end());
    }
}
