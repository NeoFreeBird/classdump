//
#ifndef OCFFlowURLHandler_Protocol_h
#define OCFFlowURLHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFFlowURLHandler <NSObject>

@required

/* required instance methods */
- (_Bool)shouldHandleURL:(id)url;
- (void)handleURL:(id)url;

@optional

@end

#endif /* OCFFlowURLHandler_Protocol_h */
