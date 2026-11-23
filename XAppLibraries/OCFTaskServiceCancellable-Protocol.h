//
#ifndef OCFTaskServiceCancellable_Protocol_h
#define OCFTaskServiceCancellable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFTaskServiceCancellable <NSObject>

@required

/* required instance methods */
- (void)cancel;

@optional

@end

#endif /* OCFTaskServiceCancellable_Protocol_h */
