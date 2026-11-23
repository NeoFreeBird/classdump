//
#ifndef UITableView_TFNAdditions_h
#define UITableView_TFNAdditions_h
@import Foundation;

@interface UITableView (TFNAdditions) <TFNDataViewVisibleContent, TFNDataViewScrolling>

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (void)prepareToDisplayMenuFromContextualItems;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_visibleContentInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_visibleCellsInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_visibleContentRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_visibleCellsRect;
- (id)tfn_visibleCells;
- (id)tfn_visibleCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)tfn_indexPathsForVisibleCells;
- (double)_tfn_overlappingSectionHeaderHeightForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)tfn_scrollPositionState:(_Bool)state;
- (id)tfn_scrollPositionStateForContentOffset:(struct CGPoint { double x0; double x1; })offset visibleContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset asArchive:(_Bool)archive;
- (_Bool)tfn_restoreScrollPositionWithStrategy:(long long)strategy fromState:(id)state animated:(_Bool)animated;
- (_Bool)tfn_restoreScrollPositionWithStrategy:(long long)strategy fromState:(id)state animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfn_scrollToItemAtIndexPath:(id)path atVisibleCellsScrollPosition:(unsigned long long)position animated:(_Bool)animated;
- (void)tfn_scrollToItemAtIndexPath:(id)path atVisibleCellsScrollPosition:(unsigned long long)position animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfn_startAutoScroll;
- (void)tfn_stopAutoScroll;
- (void)scrollViewDriverDidStartScrolling:(id)scrolling;
- (void)scrollViewDriverWillStopScrolling:(id)scrolling;
- (id)tfn_gateIndexPath:(id)path;
- (long long)tfn_absolutePositionOfIndexPath:(id)path;
- (_Bool)tfn_isValid:(id)valid;
- (id)tfn_firstIndexPath;
- (id)tfn_lastIndexPath;

@end

#endif /* UITableView_TFNAdditions_h */
