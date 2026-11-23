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
