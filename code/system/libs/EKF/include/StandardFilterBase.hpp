/**
 * Copyright (C) 2015 Chalmers REVERE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */


#ifndef OPENDLV_SYSTEM_LIBS_KALMAN_STANDARDFILTERBASE_HPP_
#define OPENDLV_SYSTEM_LIBS_KALMAN_STANDARDFILTERBASE_HPP_

#include "StandardBase.hpp"




namespace opendlv {
namespace system {
namespace libs {
namespace kalman{


    /**
     * @brief Abstract base class for standard (non-square root) filters
     *
     * @param StateType The vector-type of the system state (usually some type derived from Kalman::Vector)
     */
    template<class StateType>
    class StandardFilterBase : public StandardBase<StateType>
    {
    protected:
        //! Standard Base Type
        typedef StandardBase<StateType> Base;

        //! Covariance matrix
        using Base::P;
    };
} //kalman
} //libs
} //system
} //opendlv

#endif
