//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
