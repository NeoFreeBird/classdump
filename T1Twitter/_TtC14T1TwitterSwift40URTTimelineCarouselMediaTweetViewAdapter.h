//
#ifndef _TtC14T1TwitterSwift40URTTimelineCarouselMediaTweetViewAdapter_h
#define _TtC14T1TwitterSwift40URTTimelineCarouselMediaTweetViewAdapter_h
@import Foundation;

#include "T1TimelinesCarouselCollectionViewItemSizeProvider-Protocol.h"
#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class T1TwitterSwift.URTCarouselModuleTweetItemScriber, TFNItemsDataViewAdapter, _$s6XVideo15AutoplayManagerCMn ?, _$sSo10NSMapTableCySo11NSIndexPathC T1TwitterSwift.CarouselMediaTweetView, _$sSo11NSHashTableC T1TwitterSwift.CarouselMediaTweetView, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.URTTimelineCarouselMediaTweetViewAdapter : TFNItemsDataViewAdapter <T1TimelinesCarouselCollectionViewItemSizeProvider, TFNCellVisibilityBroadcasterDelegate, UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.URTCarouselModuleTweetItemScriber scribeHelper;
    nominal type descriptor for XVideo.AutoplayManager ? autoplayManager;
    __C.NSHashTable T1TwitterSwift.CarouselMediaTweetView mediaTweetViews;
    __C.NSMapTable empty-list __C.NSIndexPath T1TwitterSwift.CarouselMediaTweetView boundMediaTweetViews;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemInCarouselCollectionViewLayout:(id)layout;
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (void)scrollViewDidScroll:(id)scroll;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift40URTTimelineCarouselMediaTweetViewAdapter_h */
