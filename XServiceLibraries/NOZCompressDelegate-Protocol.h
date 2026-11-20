//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZCompressDelegate_Protocol_h
#define NOZCompressDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NOZCompressDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)completionQueue;
- (void)compressOperation:(id)operation didCompleteWithResult:(id)result;
- (void)compressOperation:(id)operation didUpdateProgress:(float)progress;

@end

#endif /* NOZCompressDelegate_Protocol_h */
