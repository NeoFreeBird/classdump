//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVRetweetHeartTheme_h
#define PTVRetweetHeartTheme_h
@import Foundation;

#include "PTVLoadingHeartTheme.h"

@interface PTVRetweetHeartTheme : PTVLoadingHeartTheme

/* instance methods */
- (id)init;
- (void)load:(long long)load;

@end

#endif /* PTVRetweetHeartTheme_h */
