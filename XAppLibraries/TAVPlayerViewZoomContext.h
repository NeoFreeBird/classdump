//
#ifndef TAVPlayerViewZoomContext_h
#define TAVPlayerViewZoomContext_h
@import Foundation;

@class NSObject, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface TAVPlayerViewZoomContext : NSObject

@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) long long zoomBehavior;

/* instance methods */
- (id)init;
- (id)initWithPinchGesture:(id)gesture panGesture:(id)gesture zoomBehavior:(long long)behavior;
- (id)copyWithDefaultValues;
- (_Bool)isZoomEnabled;

@end

#endif /* TAVPlayerViewZoomContext_h */
