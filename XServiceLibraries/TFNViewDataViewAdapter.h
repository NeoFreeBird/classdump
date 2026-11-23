//
#ifndef TFNViewDataViewAdapter_h
#define TFNViewDataViewAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNViewDataViewAdapter : TFNItemsDataViewAdapter

@property (nonatomic) _Bool useSizeThatFits;
@property (nonatomic) long long contentEdgeInsetsMode;

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_sizeForView:(id)view constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options layoutMetrics:(id)metrics;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller calculatedLayoutMetricsForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNViewDataViewAdapter_h */
