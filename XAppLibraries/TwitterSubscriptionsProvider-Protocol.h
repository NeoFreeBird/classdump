//
#ifndef TwitterSubscriptionsProvider_Protocol_h
#define TwitterSubscriptionsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TwitterSubscriptionsProvider <NSObject>

@required

/* required instance methods */
- (_Bool)isPremiumTierUser;

@optional

@end

#endif /* TwitterSubscriptionsProvider_Protocol_h */
