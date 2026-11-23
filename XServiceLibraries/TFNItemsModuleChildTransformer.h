//
#ifndef TFNItemsModuleChildTransformer_h
#define TFNItemsModuleChildTransformer_h
@import Foundation;

#include "TFNItemsModuleTransformer.h"

@interface TFNItemsModuleChildTransformer : TFNItemsModuleTransformer

/* instance methods */
- (id)transformItem:(id)item withParentDataViewSectionController:(id)controller;

@end

#endif /* TFNItemsModuleChildTransformer_h */
