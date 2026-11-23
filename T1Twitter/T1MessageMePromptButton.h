//
#ifndef T1MessageMePromptButton_h
#define T1MessageMePromptButton_h
@import Foundation;

@class TFNButton;

@interface T1MessageMePromptButton : TFNButton

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForDMPromptButtonWithTitle:(id)title;

/* instance methods */
- (id)init;

@end

#endif /* T1MessageMePromptButton_h */
