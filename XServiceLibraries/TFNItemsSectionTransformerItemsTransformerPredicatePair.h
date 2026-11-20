//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsSectionTransformerItemsTransformerPredicatePair_h
#define TFNItemsSectionTransformerItemsTransformerPredicatePair_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSObject, NSPredicate;

@interface TFNItemsSectionTransformerItemsTransformerPredicatePair : NSObject

@property (retain, nonatomic) id <TFNItemsTransformer> transformer;
@property (retain, nonatomic) NSPredicate *predicate;

/* instance methods */

@end

#endif /* TFNItemsSectionTransformerItemsTransformerPredicatePair_h */
