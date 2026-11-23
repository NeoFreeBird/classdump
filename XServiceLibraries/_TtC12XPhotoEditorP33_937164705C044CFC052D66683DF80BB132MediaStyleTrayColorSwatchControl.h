//
#ifndef _TtC12XPhotoEditorP33_937164705C044CFC052D66683DF80BB132MediaStyleTrayColorSwatchControl_h
#define _TtC12XPhotoEditorP33_937164705C044CFC052D66683DF80BB132MediaStyleTrayColorSwatchControl_h
@import Foundation;

@class UIControl;

@interface XPhotoEditor.(MediaStyleTrayColorSwatchControl in _937164705C044CFC052D66683DF80BB1) : UIControl { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 touchInsets;
    B24@0:8@"NSString"16 _ringView;
    B24@0:8@"NSString"16 $__lazy_storage_$__pressEffect;
}

@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isSelected;
- (_Bool)isHighlighted;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditorP33_937164705C044CFC052D66683DF80BB132MediaStyleTrayColorSwatchControl_h */
