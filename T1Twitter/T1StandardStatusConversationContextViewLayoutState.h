//
#ifndef T1StandardStatusConversationContextViewLayoutState_h
#define T1StandardStatusConversationContextViewLayoutState_h
@import Foundation;

#include "TTAConversationContextLayoutState-Protocol.h"

@class NSString, TFNAttributedActiveTextModel, TFNComposableViewLayoutState, TFSSpannedString;

@interface T1StandardStatusConversationContextViewLayoutState : TFNComposableViewLayoutState <TTAConversationContextLayoutState>

@property (retain, nonatomic) TFSSpannedString *spannedString;
@property (retain, nonatomic) TFNAttributedActiveTextModel *activeTextModel;
@property (nonatomic) _Bool activeTextModelIsTappable;
@property (nonatomic) _Bool conversationContextViewIsTappable;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } conversationContextTextFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* T1StandardStatusConversationContextViewLayoutState_h */
