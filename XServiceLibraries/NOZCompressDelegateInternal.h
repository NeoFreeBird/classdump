//
#ifndef NOZCompressDelegateInternal_h
#define NOZCompressDelegateInternal_h
@import Foundation;

#include "NOZCompressDelegate-Protocol.h"

@class NSObject, NSString;

@interface NOZCompressDelegateInternal : NSObject <NOZCompressDelegate> {
    /* instance variables */
    id /* block */ _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCompletion:(id /* block */)completion;
- (void)compressOperation:(id)operation didCompleteWithResult:(id)result;

@end

#endif /* NOZCompressDelegateInternal_h */
