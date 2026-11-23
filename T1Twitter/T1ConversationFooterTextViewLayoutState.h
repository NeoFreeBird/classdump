//
#ifndef T1ConversationFooterTextViewLayoutState_h
#define T1ConversationFooterTextViewLayoutState_h
@import Foundation;

#include "TTACoreStatusViewModel-Protocol.h"

@class TFNComposableViewLayoutState;

@interface T1ConversationFooterTextViewLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) id <TTACoreStatusViewModel> viewModel;

/* instance methods */

@end

#endif /* T1ConversationFooterTextViewLayoutState_h */
