//
#ifndef TFNActivityIndicatorItemDataViewAdapter_h
#define TFNActivityIndicatorItemDataViewAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNActivityIndicatorItemDataViewAdapter : TFNItemsDataViewAdapter

@property (nonatomic) _Bool observesContentEdgeInsets;

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)_tfn_cellHeightForController:(id)controller item:(id)item indexPath:(id)path;

@end

#endif /* TFNActivityIndicatorItemDataViewAdapter_h */
