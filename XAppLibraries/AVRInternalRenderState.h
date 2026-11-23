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
