//
#ifndef TFNButtonDataViewAdapter_h
#define TFNButtonDataViewAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNButtonDataViewAdapter : TFNItemsDataViewAdapter

@property (nonatomic) _Bool useSizeThatFits;

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_sizeForButton:(id)button constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options layoutMetrics:(id)metrics;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNButtonDataViewAdapter_h */
