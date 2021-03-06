//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <map>

// class map

//       mapped_type& at(const key_type& k);
// const mapped_type& at(const key_type& k) const;

#include "../../rbmap2.h"
#include <cassert>
#include <map>

void atpass()
{
	std::cout << "    mapped_type& at(const key_type& k)" << std::endl;
	std::cout << "    const mapped_type& at(const key_type& k) const" << std::endl;
    {
        typedef std::pair<const int, double> V;
        V ar[] =
        {
            V(1, 1.5),
            V(2, 2.5),
            V(3, 3.5),
            V(4, 4.5),
            V(5, 5.5),
            V(7, 7.5),
            V(8, 8.5),
        };
        rbmap<int, double> m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        assert(m.size() == 7);
        assert(m.at(1) == 1.5);
        m.at(1) = -1.5;
        assert(m.at(1) == -1.5);
        assert(m.at(2) == 2.5);
        assert(m.at(3) == 3.5);
        assert(m.at(4) == 4.5);
        assert(m.at(5) == 5.5);
        try
        {
            m.at(6);
            assert(false);
        }
        catch (std::out_of_range&)
        {
        }
        assert(m.at(7) == 7.5);
        assert(m.at(8) == 8.5);
        assert(m.size() == 7);
    }
    {
        typedef std::pair<const int, double> V;
        V ar[] =
        {
            V(1, 1.5),
            V(2, 2.5),
            V(3, 3.5),
            V(4, 4.5),
            V(5, 5.5),
            V(7, 7.5),
            V(8, 8.5),
        };
        const rbmap<int, double> m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        assert(m.size() == 7);
        assert(m.at(1) == 1.5);
        assert(m.at(2) == 2.5);
        assert(m.at(3) == 3.5);
        assert(m.at(4) == 4.5);
        assert(m.at(5) == 5.5);
        try
        {
            m.at(6);
            assert(false);
        }
        catch (std::out_of_range&)
        {
        }
        assert(m.at(7) == 7.5);
        assert(m.at(8) == 8.5);
        assert(m.size() == 7);
    }
}
