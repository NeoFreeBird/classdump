//
#ifndef TIPImageMoveOperation_h
#define TIPImageMoveOperation_h
@import Foundation;

#include "TIPDisabledExternalMutabilityOperation.h"
#include "TIPImagePipeline.h"

@class NSString;

@interface TIPImageMoveOperation : TIPDisabledExternalMutabilityOperation {
    /* instance variables */
    id /* block */ _completion;
    NSString *_originalIdentifier;
    NSString *_updatedIdentifier;
    TIPImagePipeline *_pipeline;
}

/* instance methods */
- (void)main;

@end

#endif /* TIPImageMoveOperation_h */
