//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem9ListRadio_h
#define _TtC13XDesignSystem9ListRadio_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo11UIImageViewC;

@interface XDesignSystem.ListRadio : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView ringImageView;
    __C.UIImageView dotImageView;
    Swift.Bool isSelected;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem9ListRadio_h */
