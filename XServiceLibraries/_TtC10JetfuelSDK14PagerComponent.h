//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK14PagerComponent_h
#define _TtC10JetfuelSDK14PagerComponent_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class JetfuelSDK.JfPagerViewModel ?, JetfuelSDK.PagerComponent.PagerProps ?, JetfuelSDK.ViewContext, NSObject, _$sSi, _$sSo16UICollectionViewCSg;

@interface JetfuelSDK.PagerComponent : NSObject <UIScrollViewDelegate, UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.JfPagerViewModel ? viewModel;
    __C.UICollectionView? $__lazy_storage_$_collectionView;
    JetfuelSDK.PagerComponent.PagerProps ? props;
    Swift.Int activePage;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK14PagerComponent_h */
