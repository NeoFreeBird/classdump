//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
