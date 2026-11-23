//
#ifndef _TtC6CallUIP33_630C6A79800555AA2F26D6E6C6159D4C20CallTrayActionButton_h
#define _TtC6CallUIP33_630C6A79800555AA2F26D6E6C6159D4C20CallTrayActionButton_h
@import Foundation;

@class UIControl;

@interface CallUI.(CallTrayActionButton in _630C6A79800555AA2F26D6E6C6159D4C) : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 actionID;
    @40@0:8:16@24@32 circleView;
    @40@0:8:16@24@32 iconView;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 handler;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6CallUIP33_630C6A79800555AA2F26D6E6C6159D4C20CallTrayActionButton_h */
