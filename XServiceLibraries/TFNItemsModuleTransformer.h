//
#ifndef TFNItemsModuleTransformer_h
#define TFNItemsModuleTransformer_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFNItemsModuleTransformer : NSObject <TFNItemsTransformer> {
    /* instance variables */
    NSArray *_childTransformers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithChildTransformers:(id)transformers;
- (id)transformItem:(id)item;
- (id)itemsForModule:(id)module;
- (id)sectionControllerForModule:(id)module;
- (_Bool)enabled;
- (id)_transformModule:(id)module byDelegatingTransformationToSectionControllerIfNeeded:(id)needed;
- (id)itemsPredicate;

@end

#endif /* TFNItemsModuleTransformer_h */
