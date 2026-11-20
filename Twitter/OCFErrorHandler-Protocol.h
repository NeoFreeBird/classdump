//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
