//
#ifndef TFNZoomable_Protocol_h
#define TFNZoomable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNZoomable <NSObject>

@required

/* required instance methods */
- (id)zoomConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;

@optional

@end

#endif /* TFNZoomable_Protocol_h */
