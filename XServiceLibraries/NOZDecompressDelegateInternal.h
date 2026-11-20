//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZDecompressDelegateInternal_h
#define NOZDecompressDelegateInternal_h
@import Foundation;

#include "NOZDecompressDelegate-Protocol.h"

@class NSObject, NSString;

@interface NOZDecompressDelegateInternal : NSObject <NOZDecompressDelegate>

@property (readonly, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCompletion:(id /* block */)completion;
- (void)decompressOperation:(id)operation didCompleteWithResult:(id)result;

@end

#endif /* NOZDecompressDelegateInternal_h */
