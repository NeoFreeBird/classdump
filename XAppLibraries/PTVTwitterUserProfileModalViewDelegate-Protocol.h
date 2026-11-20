//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTwitterUserProfileModalViewDelegate_Protocol_h
#define PTVTwitterUserProfileModalViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTwitterUserProfileModalViewDelegate <NSObject>

@required

/* required instance methods */
- (void)twitterUserModalDidPressSettingsButton;

@optional

@end

#endif /* PTVTwitterUserProfileModalViewDelegate_Protocol_h */
