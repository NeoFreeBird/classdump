//
#ifndef GrokImagineSessionState_h
#define GrokImagineSessionState_h
@import Foundation;

@class NSObject;

@interface GrokImagineSessionState : NSObject // (Swift)

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double progress;

/* class methods */
+ (id)initial;

/* instance methods */
- (id)init;

@end

#endif /* GrokImagineSessionState_h */
