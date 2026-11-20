//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDStateWatcherDelegate_Protocol_h
#define GADOMIDStateWatcherDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDStateWatcherDelegate <NSObject>

@required

/* required instance methods */
- (void)appDidBecomeActive;
- (void)appDidResignActive;

@optional

@end

#endif /* GADOMIDStateWatcherDelegate_Protocol_h */
