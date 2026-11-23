//
#ifndef _TtC21TwitterUnifiedCardsUI36SwipeableMediaCarouselCellRowAdapter_h
#define _TtC21TwitterUnifiedCardsUI36SwipeableMediaCarouselCellRowAdapter_h
@import Foundation;

#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"

@class Swift.Bool, TFNItemsCollectionItemAdapter, _$s6XVideo15AutoplayManagerCMn, _$sSo14TUCUnifiedCardCSg, _$sSo16TIPImagePipelineCSg, _$sSo24TUCComponentViewRegistry_p, _$sSo31TUCSwipeableMediaComponentModelC;

@interface TwitterUnifiedCardsUI.SwipeableMediaCarouselCellRowAdapter : TFNItemsCollectionItemAdapter <TFNCellVisibilityBroadcasterDelegate> { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.TUCSwipeableMediaComponentModel swipeableComponent;
    nominal type descriptor for XVideo.AutoplayManager policyBasedAutoplayManager;
    __C.TUCComponentViewRegistry componentViewRegistry;
    Swift.Bool shouldRoundBottomCorners;
    __C.TUCUnifiedCard? unifiedCard;
}

/* instance methods */
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (id)init;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* _TtC21TwitterUnifiedCardsUI36SwipeableMediaCarouselCellRowAdapter_h */
