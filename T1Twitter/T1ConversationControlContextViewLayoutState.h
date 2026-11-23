//
#ifndef T1ConversationControlContextViewLayoutState_h
#define T1ConversationControlContextViewLayoutState_h
@import Foundation;

@class NSAttributedString, TFNComposableViewLayoutState, TFSURTRichText;

@interface T1ConversationControlContextViewLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) TFSURTRichText *richText;
@property (retain, nonatomic) NSAttributedString *attributedText;

/* instance methods */

@end

#endif /* T1ConversationControlContextViewLayoutState_h */
