//
#ifndef PTVUITextView_h
#define PTVUITextView_h
@import Foundation;

#include "PTVUITextViewDelegate-Protocol.h"

@class UITextView;

@interface PTVUITextView : UITextView

@property (readonly, weak, nonatomic) id <PTVUITextViewDelegate> ptvUITextViewDelegate;

/* instance methods */
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;

@end

#endif /* PTVUITextView_h */
