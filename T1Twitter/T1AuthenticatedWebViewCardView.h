//
#ifndef T1AuthenticatedWebViewCardView_h
#define T1AuthenticatedWebViewCardView_h
@import Foundation;

#include "T1AuthenticatedWebViewCardEventRegistry.h"
#include "T1AuthenticatedWebViewCardModel.h"
#include "TUICardViewDelegate-Protocol.h"

@class TFNButton, TFNTappableHighlightView, TUICardView, UIImageView, UILabel, UIView;

@interface T1AuthenticatedWebViewCardView : TUICardView {
    /* instance variables */
    id <TUICardViewDelegate> _delegate;
}

@property (retain, nonatomic) T1AuthenticatedWebViewCardModel *viewModel;
@property (retain, nonatomic) T1AuthenticatedWebViewCardEventRegistry *viewEventRegistry;
@property (retain, nonatomic) UIView *highlightProxyView;
@property (retain, nonatomic) TFNTappableHighlightView *cardContainerHighlightView;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) TFNTappableHighlightView *imageHighlightView;
@property (retain, nonatomic) UIView *badgeLabelContainer;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *labelByline;
@property (retain, nonatomic) TFNTappableHighlightView *titleHighlightView;
@property (retain, nonatomic) TFNButton *callToActionButton;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setDelegate:(id)delegate;
- (void)prepareForReuse;
- (void)_cleanup;
- (void)cardContextDidUpdate;
- (id)imageFetchingViews;
- (void)setImagePipeline:(id)pipeline;
- (void)fetchImages;
- (void)_createSubviews;
- (void)_t1_updateContentContainerLayer;
- (void)_setupHighlightView:(id)view withProxyView:(id)view accessibilityIdentifier:(id)identifier;
- (void)updateSubviews;
- (id)delegate;

@end

#endif /* T1AuthenticatedWebViewCardView_h */
