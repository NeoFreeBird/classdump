//
#ifndef OCFErrorHandler_Protocol_h
#define OCFErrorHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFErrorHandler <NSObject>

@required

/* required instance methods */
- (void)handleError:(id)error completion:(id /* block */)completion;

@optional

@end

#endif /* OCFErrorHandler_Protocol_h */
