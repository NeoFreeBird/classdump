//
#ifndef TUCProductExplorerContainerView_h
#define TUCProductExplorerContainerView_h
@import Foundation;

#include "TUCComponentContainerView-Protocol.h"

@class TFNLayoutableView, TIPImagePipeline;

@interface TUCProductExplorerContainerView : TFNLayoutableView <TUCComponentContainerView> { // (Swift)
    /* instance variables */
    _Bool isDataSaverEnabled;
    @40@0:8:16@24@32 isDoubleTapEnabled;
    @40@0:8:16@24@32 eventDelegate;
    @40@0:8:16@24@32 container;
    @40@0:8:16@24@32 viewModel;
    @40@0:8:16@24@32 productExplorerView;
}

@property (nonatomic) _Bool dataSaverEnabled;
@property (nonatomic, copy) id /* block */ containerShouldTap;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool hideBorder;
@property (nonatomic) _Bool roundBottomCorners;

/* class methods */
+ (id)containerViewWithUnifiedCard:(id)card container:(id)container reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;
+ (id)sharedLayoutDelegate;

/* instance methods */
- (_Bool)isDataSaverEnabled;
- (id)initWith:(id)with container:(id)container eventDelegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (_Bool)canSetLayoutState:(id)state;
- (void)injectViewControllerForCarousel:(id)carousel scribeContext:(id)context;
- (void)prepareForReuse;
- (id)autoplayableContainerView;
- (id)accessibilityCustomUCActions;
- (_Bool)hasURL;
- (_Bool)openURL;
- (id)componentViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)accessibilityLabelForSuperview;
- (id)allComponentViews;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCProductExplorerContainerView_h */
