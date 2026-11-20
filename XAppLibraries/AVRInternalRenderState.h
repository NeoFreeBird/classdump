//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVRInternalRenderState_h
#define AVRInternalRenderState_h
@import Foundation;

@class NSObject;

@interface AVRInternalRenderState : NSObject

@property (nonatomic) long long gravity;
@property (nonatomic) double syncTime;
@property (copy, nonatomic) id /* block */ frameDisplayed;

/* instance methods */

@end

#endif /* AVRInternalRenderState_h */
