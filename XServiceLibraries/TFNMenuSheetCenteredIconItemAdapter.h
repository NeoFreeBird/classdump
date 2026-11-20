//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetCenteredIconItemAdapter_h
#define TFNMenuSheetCenteredIconItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNMenuSheetCenteredIconItemAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNMenuSheetCenteredIconItemAdapter_h */
