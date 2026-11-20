//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
