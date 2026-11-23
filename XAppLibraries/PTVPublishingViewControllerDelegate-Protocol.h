//
#ifndef PTVPublishingViewControllerDelegate_Protocol_h
#define PTVPublishingViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPublishingViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)onConnectionFailure;
- (void)didStartBroadcastCamera;
- (void)publishingViewControllerWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)publishingViewControllerWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;

@optional

/* optional instance methods */
- (void)setVideoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)captureSessionDidStart;

@end

#endif /* PTVPublishingViewControllerDelegate_Protocol_h */
