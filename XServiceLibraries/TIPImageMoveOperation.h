//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
