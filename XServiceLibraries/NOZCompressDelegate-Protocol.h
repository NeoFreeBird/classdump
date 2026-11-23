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
