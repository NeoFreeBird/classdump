//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModuleFooterAdapter_h
#define TFNModuleFooterAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNModuleFooterAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNModuleFooterAdapter_h */
