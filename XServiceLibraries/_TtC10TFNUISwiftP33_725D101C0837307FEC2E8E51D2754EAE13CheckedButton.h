//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwiftP33_725D101C0837307FEC2E8E51D2754EAE13CheckedButton_h
#define _TtC10TFNUISwiftP33_725D101C0837307FEC2E8E51D2754EAE13CheckedButton_h
@import Foundation;

@class UIControl;

@interface TFNUISwift.(CheckedButton in _725D101C0837307FEC2E8E51D2754EAE) : UIControl { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 isSquare;
    B24@0:8@"NSString"16 text;
    B24@0:8@"NSString"16 $__lazy_storage_$_label;
    B24@0:8@"NSString"16 $__lazy_storage_$_iconView;
}

@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isSelected;
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)fontSizeChanged;

@end

#endif /* _TtC10TFNUISwiftP33_725D101C0837307FEC2E8E51D2754EAE13CheckedButton_h */
