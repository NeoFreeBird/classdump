//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCS2TwitterCardDataBuilderResult_h
#define TFSCS2TwitterCardDataBuilderResult_h
@import Foundation;

#include "TFSCS2TwitterCardDataBuilderResultEmbeddedObjects.h"
#include "TFSTwitterCardData.h"

@class NSObject;

@interface TFSCS2TwitterCardDataBuilderResult : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterCardData *cardData;
@property (nonatomic, readonly) TFSCS2TwitterCardDataBuilderResultEmbeddedObjects *embeddedObjects;

/* instance methods */
- (id)init;

@end

#endif /* TFSCS2TwitterCardDataBuilderResult_h */
