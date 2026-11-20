//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift21XChatStandardPostView_h
#define _TtC14T1TwitterSwift21XChatStandardPostView_h
@import Foundation;

#include "T1DirectMessageConversationStatusView.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TTACoreStatusViewEventHandler-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class Swift.Bool, UIImage, UIView, _$sSo17TFNTwitterAccountC, _$sSo20T1StatusMediaHandlerCSg, _$sSo24TFNTappableHighlightViewC, _$sSo34T1StatusRowAdapterViewEventHandlerCSg;

@interface T1TwitterSwift.XChatStandardPostView : T1DirectMessageConversationStatusView <TAVAutoplayViewContainer, TTACoreStatusViewEventHandler> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount currentAccount;
    __C.TFNTappableHighlightView highlightView;
    __C.T1StatusMediaHandler? mediaEventHandler;
    __C.T1StatusRowAdapterViewEventHandler? statusEventHandler;
    Swift.Bool isComposerContext;
}

@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;
@property (nonatomic, readonly) unsigned long long options;

/* instance methods */
- (id)handleStatusViewEvent:(id)event;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)pressedStateDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame maxWidth:(double)width;

@end

#endif /* _TtC14T1TwitterSwift21XChatStandardPostView_h */
