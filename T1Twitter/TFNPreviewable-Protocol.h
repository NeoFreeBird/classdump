//
#ifndef TFNPreviewable_Protocol_h
#define TFNPreviewable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPreviewable <NSObject>

@required

/* required instance methods */
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;

@optional

@end

#endif /* TFNPreviewable_Protocol_h */
