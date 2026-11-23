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
