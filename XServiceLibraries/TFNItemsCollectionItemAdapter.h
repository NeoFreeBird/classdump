//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsCollectionItemAdapter_h
#define TFNItemsCollectionItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNItemsCollectionItemAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNItemsCollectionItemAdapter_h */
