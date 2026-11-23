//
#ifndef PTVUITextViewDelegate_Protocol_h
#define PTVUITextViewDelegate_Protocol_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@protocol PTVUITextViewDelegate <UITextViewDelegate>

@required

@optional

/* optional instance methods */
- (void)ptvUITextViewWillBecomeFirstResponder:(id)responder;
- (void)ptvUITextViewDidFailToBecomeFirstResponder:(id)responder;
- (void)ptvUITextViewDidBecomeFirstResponder:(id)responder;
- (void)ptvUITextViewWillResignFirstResponder:(id)responder;
- (void)ptvUITextViewDidFailToResignFirstResponder:(id)responder;
- (void)ptvUITextViewDidResignFirstResponder:(id)responder;

@end

#endif /* PTVUITextViewDelegate_Protocol_h */
