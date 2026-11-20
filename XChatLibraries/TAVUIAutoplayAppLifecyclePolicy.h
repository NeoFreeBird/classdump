//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVUIAutoplayAppLifecyclePolicy_h
#define TAVUIAutoplayAppLifecyclePolicy_h
@import Foundation;

#include "TAVUIAutoplayDisablingFilter.h"

@interface TAVUIAutoplayAppLifecyclePolicy : TAVUIAutoplayDisablingFilter // (Swift)

/* instance methods */
- (id)initWithShouldDisableAutoplay:(_Bool)autoplay shouldHardStop:(_Bool)stop;
- (void)dealloc;
- (void)appWillResignActive:(id)active;
- (void)appDidBecomeActive:(id)active;

@end

#endif /* TAVUIAutoplayAppLifecyclePolicy_h */
