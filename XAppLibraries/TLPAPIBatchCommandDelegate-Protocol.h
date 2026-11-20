//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
