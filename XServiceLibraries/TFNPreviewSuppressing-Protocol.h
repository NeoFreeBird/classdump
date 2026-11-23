//
#ifndef TFNPreviewSuppressing_Protocol_h
#define TFNPreviewSuppressing_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPreviewSuppressing <NSObject>

@required

/* required instance methods */
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;

@optional

@end

#endif /* TFNPreviewSuppressing_Protocol_h */
