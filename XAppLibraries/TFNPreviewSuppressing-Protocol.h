//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
