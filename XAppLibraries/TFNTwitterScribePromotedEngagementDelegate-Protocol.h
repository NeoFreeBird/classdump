//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribePromotedEngagementDelegate_Protocol_h
#define TFNTwitterScribePromotedEngagementDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterScribePromotedEngagementDelegate <NSObject>

@required

/* required instance methods */
- (void)scribeDidLogPromotedLatencySensitiveEvent:(id)event;

@optional

@end

#endif /* TFNTwitterScribePromotedEngagementDelegate_Protocol_h */
