//
#ifndef TFNMenuSheetSectionBreakItemAdapter_h
#define TFNMenuSheetSectionBreakItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNMenuSheetSectionBreakItemAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNMenuSheetSectionBreakItemAdapter_h */
