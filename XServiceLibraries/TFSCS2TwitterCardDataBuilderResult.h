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
