//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
