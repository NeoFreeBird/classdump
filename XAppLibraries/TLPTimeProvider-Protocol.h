//
#ifndef TLPTimeProvider_Protocol_h
#define TLPTimeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLPTimeProvider <NSObject>

@required

/* required instance methods */
- (double)currentTime;

@optional

@end

#endif /* TLPTimeProvider_Protocol_h */
