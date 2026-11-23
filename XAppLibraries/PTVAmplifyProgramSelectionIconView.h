//
#ifndef PTVAmplifyProgramSelectionIconView_h
#define PTVAmplifyProgramSelectionIconView_h
@import Foundation;

@class UILabel, UIView;

@interface PTVAmplifyProgramSelectionIconView : UIView {
    /* instance variables */
    UILabel *_label;
}

@property (nonatomic) _Bool selected;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)textColor;
- (id)backgroundColor;
- (id)defaultColor;
- (id)selectedColor;

@end

#endif /* PTVAmplifyProgramSelectionIconView_h */
