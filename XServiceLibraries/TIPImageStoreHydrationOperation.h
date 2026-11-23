//
#ifndef TIPImageStoreHydrationOperation_h
#define TIPImageStoreHydrationOperation_h
@import Foundation;

#include "TIPDisabledExternalMutabilityOperation.h"
#include "TIPImagePipeline.h"

@class NSError;
@protocol TIPImageStoreRequest, TIPImageStoreRequestHydrater;

@interface TIPImageStoreHydrationOperation : TIPDisabledExternalMutabilityOperation {
    /* instance variables */
    id <TIPImageStoreRequest> _request;
    TIPImagePipeline *_pipeline;
    id <TIPImageStoreRequestHydrater> _hydrater;
    _Atomic _Bool _isFinished;
    _Atomic _Bool _isExecuting;
    _Atomic _Bool _didStart;
    NSError *_error;
    id <TIPImageStoreRequest> _hydratedRequest;
}

/* instance methods */
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)start;

@end

#endif /* TIPImageStoreHydrationOperation_h */
