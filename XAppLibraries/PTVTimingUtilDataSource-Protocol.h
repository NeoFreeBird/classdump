//
#ifndef PTVTimingUtilDataSource_Protocol_h
#define PTVTimingUtilDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTimingUtilDataSource <NSObject>

@required

/* required instance methods */
- (unsigned long long)ntpForCurrentFrame;
- (id)programDateTime;
- (id)deliveryDateForNTP:(unsigned long long)ntp;
- (_Bool)isSeekingToNTPTime;
- (unsigned long long)ntpToSeekTo;

@optional

@end

#endif /* PTVTimingUtilDataSource_Protocol_h */
