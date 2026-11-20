//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIWindow_APMScreenClassName_h
#define UIWindow_APMScreenClassName_h
@import Foundation;

@interface UIWindow (APMScreenClassName)

/* instance methods */
- (id)apmStack;
- (void)setApmStack:(id)stack;

@end

#endif /* UIWindow_APMScreenClassName_h */
