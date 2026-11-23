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
