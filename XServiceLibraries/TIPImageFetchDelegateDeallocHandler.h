//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
