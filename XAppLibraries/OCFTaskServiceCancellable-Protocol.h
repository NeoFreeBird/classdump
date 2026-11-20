//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
