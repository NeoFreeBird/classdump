//
#ifndef _TtC21TwitterUnifiedCardsUI19CarouselCellAdapter_h
#define _TtC21TwitterUnifiedCardsUI19CarouselCellAdapter_h
@import Foundation;

@class Swift.Bool, TFNItemsCollectionItemAdapter, TwitterUnifiedCardsUI.DefaultContainerViewFactory, _$s6XVideo15AutoplayManagerCMn, _$sSaySo19TUCDefaultContainerCG, _$sSaySo34TUCDefaultContainerViewLayoutStateCGSg;

@interface TwitterUnifiedCardsUI.CarouselCellAdapter : TFNItemsCollectionItemAdapter { // (Swift)
    /* instance variables */
    [__C.TUCDefaultContainerViewLayoutState]? layoutStates;
    Swift.Bool roundBottomCorners;
    [__C.TUCDefaultContainer] containers;
    TwitterUnifiedCardsUI.DefaultContainerViewFactory factory;
    nominal type descriptor for XVideo.AutoplayManager autoplayManager;
}

/* instance methods */
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI19CarouselCellAdapter_h */
