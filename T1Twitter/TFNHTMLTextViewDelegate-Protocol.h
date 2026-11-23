//
#ifndef TFNHTMLTextViewDelegate_Protocol_h
#define TFNHTMLTextViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNHTMLTextViewDelegate <NSObject>

@required

/* required instance methods */
- (void)htmlTextView:(id)view didTapLink:(id)link;
- (void)htmlTextViewHandleUserAccessibilityTap:(id)tap;

@optional

@end

#endif /* TFNHTMLTextViewDelegate_Protocol_h */
