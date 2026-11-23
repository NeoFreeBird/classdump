//
#ifndef TFNItemsSectionTransformer_h
#define TFNItemsSectionTransformer_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSMutableArray, NSObject, NSString;

@interface TFNItemsSectionTransformer : NSObject <TFNItemsTransformer> {
    /* instance variables */
    NSMutableArray *_itemTransformerPairs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)transformItem:(id)item;
- (id)sectionsWithItems:(id)items;
- (void)addTransformer:(id)transformer forItemsMatchingPredicate:(id)predicate;
- (void)prependTransformer:(id)transformer forItemsMatchingPredicate:(id)predicate;
- (void)appendTransformer:(id)transformer forItemsMatchingPredicate:(id)predicate;
- (void)addTransformerWithPredicate:(id)predicate;

@end

#endif /* TFNItemsSectionTransformer_h */
