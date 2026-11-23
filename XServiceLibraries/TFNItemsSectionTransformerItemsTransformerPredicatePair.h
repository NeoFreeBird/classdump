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
