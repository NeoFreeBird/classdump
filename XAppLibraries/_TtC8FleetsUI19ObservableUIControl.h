//
#ifndef _TtC8FleetsUI19ObservableUIControl_h
#define _TtC8FleetsUI19ObservableUIControl_h
@import Foundation;

@class UIControl;

@interface FleetsUI.ObservableUIControl : UIControl { // (Swift)
    /* instance variables */
    bycopy unsigned int __state:0;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool selected;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isEnabled;
- (_Bool)isHighlighted;
- (_Bool)isSelected;

@end

#endif /* _TtC8FleetsUI19ObservableUIControl_h */
