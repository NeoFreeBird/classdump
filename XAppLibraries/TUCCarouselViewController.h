//
#ifndef TUCCarouselViewController_h
#define TUCCarouselViewController_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TUCCarouselViewControllerDelegate-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCDefaultContainerView.h"
#include "TUCVideoCarouselObserver-Protocol.h"

@class NSArray, TFNItemsDataViewController, UIView;

@interface TUCCarouselViewController : TFNItemsDataViewController <TUCComponentViewEventDelegate, TUCVideoCarouselObserver, TAVUIAutoplayable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 container;
    @40@0:8:16@24@32 factory;
    @40@0:8:16@24@32 autoplayDeactivationPolicy;
    @40@0:8:16@24@32 autoplayScrollPolicy;
    @40@0:8:16@24@32 adapter;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;
@property (nonatomic, copy) NSArray *layoutStates;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, weak) id <TUCCarouselViewControllerDelegate> delegate;
@property (nonatomic) _Bool hideBorder;
@property (nonatomic) _Bool roundBottomCorners;
@property (nonatomic) long long currentIndex;
@property (nonatomic, readonly) TUCDefaultContainerView *currentContainerView;
@property (nonatomic, readonly) NSArray *visibleContainerViews;

/* class methods */
+ (Class)collectionViewClass;

/* instance methods */
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;
- (void)videoDidPlayToEndWithCurrentPlaybackState:(id)state componentView:(id)view;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithContainer:(id)container containerViewFactory:(id)factory eventDelegate:(id)delegate;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)setupCollectionViewLayoutWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets itemSize:(struct CGSize { double x0; double x1; })size;
- (id)containerViewAtIndex:(long long)index;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;

@end

#endif /* TUCCarouselViewController_h */
