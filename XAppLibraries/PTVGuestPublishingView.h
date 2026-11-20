//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestPublishingView_h
#define PTVGuestPublishingView_h
@import Foundation;

#include "PTVContextualMenuView.h"
#include "PTVGuestCallerSession.h"
#include "PTVGuestContainerView.h"
#include "PTVGuestContainerViewDelegate-Protocol.h"
#include "PTVGuestPublishingViewDelegate-Protocol.h"
#include "PTVGuestView.h"
#include "PTVGuestViewDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSObject, NSString, UIStackView, UIView;

@interface PTVGuestPublishingView : UIView <PTVGuestContainerViewDelegate, PTVGuestViewDelegate> {
    /* instance variables */
    UIStackView *_horizontalGuestStackView;
    PTVGuestContainerView *_leadingGuestContainerView;
    PTVGuestContainerView *_centerGuestContainerView;
    PTVGuestContainerView *_trailingGuestContainerView;
    double _bottomBarFrameHeight;
}

@property (weak, nonatomic) id <PTVGuestPublishingViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } guestViewsMargins;
@property (readonly, nonatomic) double guestViewsMaxY;
@property (retain, nonatomic) PTVGuestView *cameraPreviewView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cameraPreviewRect;
@property (retain, nonatomic) PTVGuestView *primaryGuestView;
@property (retain, nonatomic) PTVGuestView *leadingGuestView;
@property (retain, nonatomic) PTVGuestView *centerGuestView;
@property (retain, nonatomic) PTVGuestView *trailingGuestView;
@property (retain, nonatomic) PTVGuestCallerSession *primaryCallerSession;
@property (retain, nonatomic) PTVGuestCallerSession *leadingCallerSession;
@property (retain, nonatomic) PTVGuestCallerSession *centerCallerSession;
@property (retain, nonatomic) PTVGuestCallerSession *trailingCallerSession;
@property (nonatomic) _Bool isDoubleTapToFlipCameraPreviewViewEnabled;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) _Bool canHangUpGuestViews;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (weak, nonatomic) PTVContextualMenuView *displayedGuestContextMenuView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)guestViewAtPosition:(unsigned long long)position;
- (void)updateGuestViews;
- (void)updateGuestViewAtPosition:(unsigned long long)position;
- (void)observeGuestViewChanges:(id)changes;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)convertedHitViewFromPoint:(struct CGPoint { double x0; double x1; })point insideGuestContainerView:(id)view withEvent:(id)event;
- (void)didTapOnGuestView:(id)view;
- (void)didTapCancelCountdownOnGuestView:(id)view;
- (void)didTapHangUpButtonOnGuestView:(id)view;
- (void)didTapFlipCameraButtonOnGuestView:(id)view;
- (void)didTapUsernameButtonOnGuestView:(id)view;
- (void)guestView:(id)view isHighlighted:(_Bool)highlighted;
- (void)createTapRecognizers;
- (void)handleDoubleTap:(id)tap;
- (void)setPrimaryGuestView:(id)view forcedReset:(_Bool)reset;
- (void)updateCameraDisplayViewOrientationIfNeeded;
- (unsigned long long)nGuestViews;
- (void)setLeadingGuestView:(id)view forcedReset:(_Bool)reset;
- (void)setLeadingParticipantIndex:(long long)index;
- (void)setLeadingGuestUsername:(id)username;
- (void)setCenterGuestView:(id)view forcedReset:(_Bool)reset;
- (void)setCenterParticipantIndex:(long long)index;
- (void)setCenterGuestUsername:(id)username;
- (void)setTrailingGuestView:(id)view forcedReset:(_Bool)reset;
- (void)setTrailingParticipantIndex:(long long)index;
- (void)setTrailingGuestUsername:(id)username;
- (void)setGuestViewsNeedLayout;
- (void)didUpdateGuestCallerSession:(id)session;
- (void)showLoadingBars:(_Bool)bars atPosition:(unsigned long long)position;
- (void)hideAllLoadingBars;
- (void)actionButtonsStateDidChange;
- (void)updateActionButtonForContainerView:(id)view;
- (void)guestView:(id)view renderingDidChange:(_Bool)change;
- (void)didUpdateChatSectionBottomBarHeight:(double)height;

@end

#endif /* PTVGuestPublishingView_h */
