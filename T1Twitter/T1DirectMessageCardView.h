//
#ifndef T1DirectMessageCardView_h
#define T1DirectMessageCardView_h
@import Foundation;

#include "T1PlayerCardPlayerContainerViewDelegate-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class TIPImagePipeline, TUICardView, UIView;

@interface T1DirectMessageCardView : TUICardView <T1PlayerCardPlayerContainerViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *dominantColorView;
    NSNumber"16@0:8 *cardPlayerContainerView;
    NSNumber"16@0:8 *primaryImageHighlightView;
    NSNumber"16@0:8 *borderSeparator;
    NSNumber"16@0:8 *recipientUserView;
    NSNumber"16@0:8 *recipientUserHighlightView;
    NSNumber"16@0:8 *ctaContainerView;
    NSNumber"16@0:8 *viewEventRegistry;
    NSNumber"16@0:8 *viewModel;
}

@property (nonatomic, retain) id <TUICardViewDelegate> delegate;
@property (nonatomic, readonly) UIView *cardMediaView;
@property (nonatomic, readonly) id <TAVAutoplayViewContainer> playerViewContainer;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* instance methods */
- (void)cardPlayerContainerView:(id)view didTapPlayButtonOverlayWithEvent:(id)event;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)_inline;
- (void)prepareForReuse;
- (void)restartAnimationsIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)cardContextDidUpdate;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)imageFetchingViews;
- (void)fetchImages;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;

@end

#endif /* T1DirectMessageCardView_h */
