//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSketchPointReceivable_Protocol_h
#define PTVSketchPointReceivable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVSketchPointReceivable <NSObject>

@required

/* required instance methods */
- (void)enqueueSketchPoints:(id)points;
- (void)clearCanvasAnimated:(_Bool)animated;

@optional

@end

#endif /* PTVSketchPointReceivable_Protocol_h */
