//
#ifndef _TtC14T1TwitterSwift40URTTimelineCardItemCollectionViewAdapter_h
#define _TtC14T1TwitterSwift40URTTimelineCardItemCollectionViewAdapter_h
@import Foundation;

#include "T1TimelinesCarouselCollectionViewItemSizeProvider-Protocol.h"

@class T1TwitterSwift.T1UnifiedCardItemCollectionViewAdapter, TFNItemsCollectionItemAdapter, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC;

@interface T1TwitterSwift.URTTimelineCardItemCollectionViewAdapter : TFNItemsCollectionItemAdapter <T1TimelinesCarouselCollectionViewItemSizeProvider> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    T1TwitterSwift.T1UnifiedCardItemCollectionViewAdapter unifiedCardAdapter;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemInCarouselCollectionViewLayout:(id)layout;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didEndDisplayingCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift40URTTimelineCardItemCollectionViewAdapter_h */
