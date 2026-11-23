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
