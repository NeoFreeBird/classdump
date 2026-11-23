//
#ifndef _TtC5TAVUI11PaddedLabel_h
#define _TtC5TAVUI11PaddedLabel_h
@import Foundation;

@class UILabel, __C.UIEdgeInsets;

@interface TAVUI.PaddedLabel : UILabel { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets insets;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC5TAVUI11PaddedLabel_h */
