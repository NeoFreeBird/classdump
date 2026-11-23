//
#ifndef _TtC14T1TwitterSwift44URTTimelineCarouselCondensedTweetViewAdapter_h
#define _TtC14T1TwitterSwift44URTTimelineCarouselCondensedTweetViewAdapter_h
@import Foundation;

#include "T1TimelinesCarouselCollectionViewItemSizeProvider-Protocol.h"
#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"

@class T1TwitterSwift.URTCarouselModuleTweetItemScriber, TFNItemsDataViewAdapter, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.URTTimelineCarouselCondensedTweetViewAdapter : TFNItemsDataViewAdapter <T1TimelinesCarouselCollectionViewItemSizeProvider, TFNCellVisibilityBroadcasterDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.URTCarouselModuleTweetItemScriber scribeHelper;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemInCarouselCollectionViewLayout:(id)layout;
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift44URTTimelineCarouselCondensedTweetViewAdapter_h */
