//
#ifndef UIKeyInput_Protocol_h
#define UIKeyInput_Protocol_h
@import Foundation;

#include "UITextInputTraits-Protocol.h"

@protocol UIKeyInput <UITextInputTraits>

@required

@property (nonatomic, readonly) _Bool hasText;

/* required instance methods */
- (void)insertText:(id)text;
- (void)deleteBackward;

@optional

@end

#endif /* UIKeyInput_Protocol_h */
