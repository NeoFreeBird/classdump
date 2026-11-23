//
#ifndef OCFMutableComponent_Protocol_h
#define OCFMutableComponent_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFMutableComponent <NSObject>

@required

/* class methods */
+ (id)alloc;

/* required instance methods */
- (id)initWithComponent:(id)component;
- (id)stringValue;
- (id)numberValue;

@optional

@end

#endif /* OCFMutableComponent_Protocol_h */
