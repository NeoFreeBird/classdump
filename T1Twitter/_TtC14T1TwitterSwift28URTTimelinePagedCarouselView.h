//
#ifndef _TtC14T1TwitterSwift28URTTimelinePagedCarouselView_h
#define _TtC14T1TwitterSwift28URTTimelinePagedCarouselView_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.HorizontalPagedCollectionViewFlowLayout, T1TwitterSwift.URTTimelinePagedCarouselAutoplayScrollPolicy, T1TwitterSwift.URTTimelinePagedCarouselViewDelegate ?, T1TwitterSwift.URTTimelinePagedCarouselViewModel ?, TFSTwitterCore18URTImpressionCache_pSg, UIView, _$s10TwitterURT10URTReactorMp, _$s6XVideo15AutoplayManagerCMn ?, _$s6XVideo23AutoplayDisablingFilterCMn, _$sSS, _$sSa -> _$s10TwitterURT37URTTimelinePagedCarouselItemViewModelCMn, _$sSa -> _$s10TwitterURT37URTTimelinePagedCarouselItemViewModelCMn ?, _$sSh -> _$ss5Int64VMn, _$sSo14TFSDisplayLinkCSg, _$sSo17TFNCollectionViewC, _$sSo17TFNTwitterAccountC, _$sSo18NSLayoutConstraintCSg, _$sSo23TFSTwitterScribeContextC, _$sSo26TFNItemsDataViewControllerCSgXw, _$sSo32TFNTwitterScribeImpressionLoggerC;

@interface T1TwitterSwift.URTTimelinePagedCarouselView : UIView <TFNCellVisibilityBroadcasterDelegate, TAVUIAutoplayable, UICollectionViewDataSource, UICollectionViewDelegate, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    Swift.Set -> nominal type descriptor for Swift.Int64 impressedTweetIds;
    T1TwitterSwift.URTTimelinePagedCarouselViewModel ? viewModel;
    T1TwitterSwift.URTTimelinePagedCarouselViewDelegate ? delegate;
    __C.TFNTwitterAccount account;
    __C.TFNTwitterScribeImpressionLogger accountImpressionLogger;
    protocol descriptor for TwitterURT.URTReactor reactor;
    Swift.String component;
    weak __C.TFNItemsDataViewController? dataViewController;
    __C.TFSTwitterScribeContext scribeContext;
    TFSTwitterCore18URTImpressionCache_pSg scribeImpressionCache;
    __C.TFNCollectionView collectionView;
    __C.NSLayoutConstraint? collectionViewHeightConstraint;
    T1TwitterSwift.HorizontalPagedCollectionViewFlowLayout horizontalRowsLayout;
    __C.TFSDisplayLink? displayLink;
    Swift.Bool pendingHeightUpdate;
    Swift.Bool hasStartedHeightUpdate;
    Swift.Bool pendingReload;
    Swift.Array -> nominal type descriptor for TwitterURT.URTTimelinePagedCarouselItemViewModel ? pendingItems;
    Swift.Array -> nominal type descriptor for TwitterURT.URTTimelinePagedCarouselItemViewModel committedItems;
    Swift.Bool userInitiatedLastScrollAndShouldDeleteAfter;
    Swift.Bool didScrollToNewPageAndShouldRefocus;
    nominal type descriptor for XVideo.AutoplayManager ? autoplayManager;
    nominal type descriptor for XVideo.AutoplayDisablingFilter autoplayDeactivationPolicy;
    T1TwitterSwift.URTTimelinePagedCarouselAutoplayScrollPolicy autoplayScrollPolicy;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;

/* instance methods */
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)handlePendingUpdates;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)voiceOverStatusChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift28URTTimelinePagedCarouselView_h */
