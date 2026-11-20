//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NudgeDelegate_Protocol_h
#define T1NudgeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1NudgeDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)didDismissNudge:(id)nudge;
- (void)didDismissNudge:(id)nudge;

@end

#endif /* T1NudgeDelegate_Protocol_h */
