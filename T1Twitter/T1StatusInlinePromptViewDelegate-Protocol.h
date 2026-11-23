//
#ifndef T1StatusInlinePromptViewDelegate_Protocol_h
#define T1StatusInlinePromptViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusInlinePromptViewDelegate <NSObject>

@required

/* required instance methods */
- (void)inlinePromptView:(id)view didTapActionButton:(id)button;

@optional

@end

#endif /* T1StatusInlinePromptViewDelegate_Protocol_h */
