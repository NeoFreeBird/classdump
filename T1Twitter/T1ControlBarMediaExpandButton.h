//
#ifndef T1ControlBarMediaExpandButton_h
#define T1ControlBarMediaExpandButton_h
@import Foundation;

@class TAVControlBarItem, TFNPaddedButton, UIButton, UIImage;

@interface T1ControlBarMediaExpandButton : TAVControlBarItem

@property (retain, nonatomic) TFNPaddedButton *button;
@property (retain, nonatomic) UIImage *mediaExpandImage;
@property (readonly, nonatomic) UIButton *view;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;

@end

#endif /* T1ControlBarMediaExpandButton_h */
