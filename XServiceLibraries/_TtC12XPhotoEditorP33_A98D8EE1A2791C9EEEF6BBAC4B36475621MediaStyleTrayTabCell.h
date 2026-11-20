//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditorP33_A98D8EE1A2791C9EEEF6BBAC4B36475621MediaStyleTrayTabCell_h
#define _TtC12XPhotoEditorP33_A98D8EE1A2791C9EEEF6BBAC4B36475621MediaStyleTrayTabCell_h
@import Foundation;

@class UIControl;

@interface XPhotoEditor.(MediaStyleTrayTabCell in _A98D8EE1A2791C9EEEF6BBAC4B364756) : UIControl { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 isAvailable;
    B24@0:8@"NSString"16 _glyphView;
    B24@0:8@"NSString"16 $__lazy_storage_$__pressEffect;
}

@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isSelected;
- (_Bool)isHighlighted;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditorP33_A98D8EE1A2791C9EEEF6BBAC4B36475621MediaStyleTrayTabCell_h */
