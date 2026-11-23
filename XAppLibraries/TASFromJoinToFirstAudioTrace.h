//
#ifndef TASFromJoinToFirstAudioTrace_h
#define TASFromJoinToFirstAudioTrace_h
@import Foundation;

@class NSObject;

@interface TASFromJoinToFirstAudioTrace : NSObject // (Swift)

/* class methods */
+ (void)activate;
+ (_Bool)isActive;
+ (void)startSpan:(long long)span;
+ (void)stopSpan:(long long)span;
+ (void)cancelSpan:(long long)span;

/* instance methods */
- (id)init;

@end

#endif /* TASFromJoinToFirstAudioTrace_h */
