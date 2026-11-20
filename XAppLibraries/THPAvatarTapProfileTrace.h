//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THPAvatarTapProfileTrace_h
#define THPAvatarTapProfileTrace_h
@import Foundation;

@class NSObject;

@interface THPAvatarTapProfileTrace : NSObject // (Swift)

/* class methods */
+ (void)activate;
+ (void)cancel;
+ (void)startSpan:(long long)span;
+ (void)stopSpan:(long long)span;
+ (void)cancelSpan:(long long)span;

/* instance methods */
- (id)init;

@end

#endif /* THPAvatarTapProfileTrace_h */
