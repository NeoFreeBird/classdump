//
#ifndef T1ZoomableImageViewZoomDelegate_Protocol_h
#define T1ZoomableImageViewZoomDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ZoomableImageViewZoomDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)zoomScrollViewWillBeginZooming:(id)zooming withView:(id)view;
- (void)zoomScrollViewWillBeginZooming:(id)zooming withView:(id)view;
- (void)zoomScrollViewDidZoom:(id)zoom;
- (void)zoomScrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;
- (void)zoomScrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;

@end

#endif /* T1ZoomableImageViewZoomDelegate_Protocol_h */
