//
#ifndef T1ControlBarLabel_h
#define T1ControlBarLabel_h
@import Foundation;

@class TAVControlBarItem, UILabel;

@interface T1ControlBarLabel : TAVControlBarItem

@property (readonly, nonatomic) UILabel *label;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;

@end

#endif /* T1ControlBarLabel_h */
