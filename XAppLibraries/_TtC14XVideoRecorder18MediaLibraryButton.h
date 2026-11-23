//
#ifndef _TtC14XVideoRecorder18MediaLibraryButton_h
#define _TtC14XVideoRecorder18MediaLibraryButton_h
@import Foundation;

@class UIControl, _$s13XDesignSystem4BlurCMn, _$sSo11UIImageViewC, _$sSo6UIViewC;

@interface XVideoRecorder.MediaLibraryButton : UIControl { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    nominal type descriptor for XDesignSystem.Blur placeholderBlurView;
    __C.UIImageView placeholderIconView;
    __C.UIImageView thumbnailImageView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14XVideoRecorder18MediaLibraryButton_h */
