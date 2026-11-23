//
#ifndef TIPImageFetchDelegateDeallocHandler_h
#define TIPImageFetchDelegateDeallocHandler_h
@import Foundation;

#include "TIPImageFetchOperation.h"

@class NSObject;

@interface TIPImageFetchDelegateDeallocHandler : NSObject {
    /* instance variables */
    TIPImageFetchOperation *_operation;
    Class _delegateClass;
}

/* instance methods */
- (void)dealloc;

@end

#endif /* TIPImageFetchDelegateDeallocHandler_h */
