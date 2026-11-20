//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports21SportsDashedSeparator_h
#define _TtC7XSports21SportsDashedSeparator_h
@import Foundation;

@class UIView, _$sSo12CAShapeLayerC;

@interface XSports.SportsDashedSeparator : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer dashLayer;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports21SportsDashedSeparator_h */
