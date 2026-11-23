//
#ifndef NOZDecompressDelegate_Protocol_h
#define NOZDecompressDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NOZDecompressDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)completionQueue;
- (void)decompressOperation:(id)operation didCompleteWithResult:(id)result;
- (void)decompressOperation:(id)operation didUpdateProgress:(float)progress;
- (_Bool)shouldDecompressOperation:(id)operation overwriteFileAtPath:(id)path;

@end

#endif /* NOZDecompressDelegate_Protocol_h */
