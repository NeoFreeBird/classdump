//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
