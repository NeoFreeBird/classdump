//
#ifndef TFNDataView_Protocol_h
#define TFNDataView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNDataViewAdditions-Protocol.h"
#include "TFNDataViewScrolling-Protocol.h"
#include "TFNDataViewVisibleContent-Protocol.h"

@class TFNReusableViewCache;

@protocol TFNDataView <NSObject, TFNDataViewAdditions, TFNDataViewVisibleContent, TFNDataViewScrolling>

@required

@property (nonatomic) _Bool allowsSelection;
@property (nonatomic) _Bool allowsMultipleSelection;
@property (readonly, nonatomic) TFNReusableViewCache *reusableViewCache;

/* required instance methods */
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)section;
- (void)reloadData;
- (void)reloadData:(_Bool)data;
- (void)reloadItemsAtIndexPaths:(id)paths;
- (void)reloadSections:(id)sections;
- (void)insertItemsAtIndexPaths:(id)paths;
- (void)moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)deleteItemsAtIndexPaths:(id)paths;
- (void)insertSections:(id)sections;
- (void)moveSection:(long long)section toSection:(long long)section;
- (void)deleteSections:(id)sections;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (void)selectItemAtIndexPath:(id)path animated:(_Bool)animated scrollPosition:(unsigned long long)position;
- (void)deselectItemAtIndexPath:(id)path animated:(_Bool)animated;
- (id)indexPathsForSelectedItems;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)indexPathForCell:(id)cell;
- (id)cellForItemAtIndexPath:(id)path;
- (id)indexPathsForVisibleItems;
- (id)visibleCells;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)path;
- (void)scrollToItemAtIndexPath:(id)path atScrollPosition:(unsigned long long)position animated:(_Bool)animated;
- (id)cellLayoutForIndexPath:(id)path;
- (void)setCellLayout:(id)layout forIndexPath:(id)path;
- (id)cellLayoutForObjectIdentifier:(id)identifier;
- (void)setCellLayout:(id)layout forObjectIdentifier:(id)identifier;
- (long long)invalidateCellLayoutsPassingTest:(id /* block */)test;

@optional

@end

#endif /* TFNDataView_Protocol_h */
