//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
