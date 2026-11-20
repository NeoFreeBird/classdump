//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
