//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageStoreOperation_h
#define TIPImageStoreOperation_h
@import Foundation;

#include "TIPDisabledExternalMutabilityOperation.h"
#include "TIPImagePipeline.h"
#include "TIPImageStoreHydrationOperation.h"

@protocol TIPImageStoreRequest;

@interface TIPImageStoreOperation : TIPDisabledExternalMutabilityOperation {
    /* instance variables */
    TIPImageStoreHydrationOperation *_hydrationOperation;
    id <TIPImageStoreRequest> _request;
    TIPImagePipeline *_pipeline;
    id /* block */ _storeCompletionBlock;
}

/* instance methods */
- (void)main;

@end

#endif /* TIPImageStoreOperation_h */
