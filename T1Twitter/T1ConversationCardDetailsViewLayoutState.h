//
#ifndef T1ConversationCardDetailsViewLayoutState_h
#define T1ConversationCardDetailsViewLayoutState_h
@import Foundation;

#include "T1ConversationCardViewModel.h"

@class TUICardViewLayoutState;

@interface T1ConversationCardDetailsViewLayoutState : TUICardViewLayoutState

@property (retain, nonatomic) T1ConversationCardViewModel *viewModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } ctaContainerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thankYouTextLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thankYouUrlLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrame;

/* instance methods */

@end

#endif /* T1ConversationCardDetailsViewLayoutState_h */
