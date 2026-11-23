//
#ifndef TAVPlayerViewZoomDelegate_Protocol_h
#define TAVPlayerViewZoomDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVPlayerViewZoomDelegate <NSObject>

@required

/* required instance methods */
- (void)playerViewDidZoom:(id)zoom atScale:(double)scale;

@optional

/* optional instance methods */
- (void)playerViewDidBeginZooming:(id)zooming;
- (void)playerViewDidEndZooming:(id)zooming atScale:(double)scale gravity:(long long)gravity;

@end

#endif /* TAVPlayerViewZoomDelegate_Protocol_h */
