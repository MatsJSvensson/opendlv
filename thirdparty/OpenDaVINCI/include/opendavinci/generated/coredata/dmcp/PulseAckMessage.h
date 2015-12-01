/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef COREDATA_DMCP_PULSEACKMESSAGE_H
#define COREDATA_DMCP_PULSEACKMESSAGE_H

// core/platform.h must be included to setup platform-dependent header files and configurations.
#include "core/platform.h"


#include "core/base/Visitable.h"
#include "core/data/SerializableData.h"


namespace coredata {
	namespace dmcp {
		using namespace std;
		
		class PulseAckMessage : public core::data::SerializableData, public core::base::Visitable {
			public:
				PulseAckMessage();
		
		
				virtual ~PulseAckMessage();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				PulseAckMessage(const PulseAckMessage &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				PulseAckMessage& operator=(const PulseAckMessage &obj);
		
		
			public:
				/**
				 * This method returns the message id.
				 *
				 * @return Message id.
				 */
				static int32_t ID();
		
				/**
				 * This method returns the short message name.
				 *
				 * @return Short message name.
				 */
				static const string ShortName();
		
				/**
				 * This method returns the long message name include package/sub structure.
				 *
				 * @return Long message name.
				 */
				static const string LongName();
		
			public:
				virtual void accept(core::base::Visitor &v);
		
				virtual ostream& operator<<(ostream &out) const;
				virtual istream& operator>>(istream &in);
		
				virtual const string toString() const;
		
		
		};
	} // dmcp
} // coredata

#endif /*COREDATA_DMCP_PULSEACKMESSAGE_H*/