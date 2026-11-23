//
#ifndef TBase_Protocol_h
#define TBase_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TBase <NSObject>

@required

/* required instance methods */
- (void)read:(id)read;
- (void)write:(id)write;

@optional

@end

#endif /* TBase_Protocol_h */
