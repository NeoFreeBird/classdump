//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIBarPositioningDelegate_Protocol_h
#define UIBarPositioningDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIBarPositioningDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (long long)positionForBar:(id)bar;

@end

#endif /* UIBarPositioningDelegate_Protocol_h */
