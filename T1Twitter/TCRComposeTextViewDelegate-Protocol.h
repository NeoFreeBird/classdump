//
#ifndef TCRComposeTextViewDelegate_Protocol_h
#define TCRComposeTextViewDelegate_Protocol_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@protocol TCRComposeTextViewDelegate <UITextViewDelegate>

@required

@optional

/* optional instance methods */
- (_Bool)canPerformPasteWithSender:(id)sender;
- (_Bool)performPasteWithSender:(id)sender;
- (void)textView:(id)view didChangeBaseWritingDirection:(long long)direction;

@end

#endif /* TCRComposeTextViewDelegate_Protocol_h */
