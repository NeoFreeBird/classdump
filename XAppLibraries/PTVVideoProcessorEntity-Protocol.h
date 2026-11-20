//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoProcessorEntity_Protocol_h
#define PTVVideoProcessorEntity_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoProcessorEntity <NSObject>

@required

@property (readonly, nonatomic) _Bool needsToDraw;

/* required instance methods */
- (void)tickWithPassageOfTime:(double)time;
- (void)renderPassDidComplete;

@optional

@end

#endif /* PTVVideoProcessorEntity_Protocol_h */
