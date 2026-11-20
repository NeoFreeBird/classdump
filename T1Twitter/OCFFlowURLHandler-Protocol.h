//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
