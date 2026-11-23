//
#ifndef TFNDataViewScrolling_Protocol_h
#define TFNDataViewScrolling_Protocol_h
@import Foundation;

@protocol TFNDataViewScrolling

@required

/* required instance methods */
- (id)tfn_scrollPositionState:(_Bool)state;
- (id)tfn_scrollPositionStateForContentOffset:(struct CGPoint { double x0; double x1; })offset visibleContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset asArchive:(_Bool)archive;
- (_Bool)tfn_restoreScrollPositionWithStrategy:(long long)strategy fromState:(id)state animated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)tfn_restoreScrollPositionWithStrategy:(long long)strategy fromState:(id)state animated:(_Bool)animated;
- (void)tfn_scrollToItemAtIndexPath:(id)path atVisibleCellsScrollPosition:(unsigned long long)position animated:(_Bool)animated;
- (void)tfn_scrollToItemAtIndexPath:(id)path atVisibleCellsScrollPosition:(unsigned long long)position animated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* TFNDataViewScrolling_Protocol_h */
