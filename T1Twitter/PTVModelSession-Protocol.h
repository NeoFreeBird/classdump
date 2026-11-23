//
#ifndef PTVModelSession_Protocol_h
#define PTVModelSession_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVModelSession <NSObject>

@required

/* required instance methods */
- (id)ptv_taskWithMode:(long long)mode context:(id)context;
- (void)ptv_incrementMode:(long long)mode;
- (void)ptv_decrementMode:(long long)mode;

@optional

@end

#endif /* PTVModelSession_Protocol_h */
