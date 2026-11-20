//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
