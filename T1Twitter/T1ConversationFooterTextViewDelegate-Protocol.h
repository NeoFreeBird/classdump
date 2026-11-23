//
#ifndef T1ConversationFooterTextViewDelegate_Protocol_h
#define T1ConversationFooterTextViewDelegate_Protocol_h
@import Foundation;

@protocol T1ConversationFooterTextViewDelegate

@required

/* required instance methods */
- (void)tweetDetailsFooterTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@optional

@end

#endif /* T1ConversationFooterTextViewDelegate_Protocol_h */
