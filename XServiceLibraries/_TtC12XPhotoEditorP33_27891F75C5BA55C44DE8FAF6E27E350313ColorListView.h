//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditorP33_27891F75C5BA55C44DE8FAF6E27E350313ColorListView_h
#define _TtC12XPhotoEditorP33_27891F75C5BA55C44DE8FAF6E27E350313ColorListView_h
@import Foundation;

@class UIView;

@interface XPhotoEditor.(ColorListView in _27891F75C5BA55C44DE8FAF6E27E3503) : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 onSelect;
    B24@0:8@"NSString"16 selectedOption;
    B24@0:8@"NSString"16 options;
    B24@0:8@"NSString"16 scrollView;
    B24@0:8@"NSString"16 stackView;
    B24@0:8@"NSString"16 swatchButtons;
    B24@0:8@"NSString"16 fadeMaskLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)keyboardChanged;

@end

#endif /* _TtC12XPhotoEditorP33_27891F75C5BA55C44DE8FAF6E27E350313ColorListView_h */
