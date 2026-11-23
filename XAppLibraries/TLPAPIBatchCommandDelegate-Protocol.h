//
#ifndef TLPAPIBatchCommandDelegate_Protocol_h
#define TLPAPIBatchCommandDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLPAPIBatchCommandDelegate <NSObject>

@required

/* required instance methods */
- (void)command:(id)command didCompleteWithAPIResponse:(id)apiresponse error:(id)error;

@optional

@end

#endif /* TLPAPIBatchCommandDelegate_Protocol_h */
