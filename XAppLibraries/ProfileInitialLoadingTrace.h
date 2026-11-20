//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ProfileInitialLoadingTrace_h
#define ProfileInitialLoadingTrace_h
@import Foundation;

@class NSObject;

@interface ProfileInitialLoadingTrace : NSObject // (Swift)

/* class methods */
+ (void)activate;
+ (void)cancel;
+ (void)startSpan:(long long)span;
+ (void)stopSpan:(long long)span;
+ (void)cancelSpan:(long long)span;

/* instance methods */
- (id)init;

@end

#endif /* ProfileInitialLoadingTrace_h */
