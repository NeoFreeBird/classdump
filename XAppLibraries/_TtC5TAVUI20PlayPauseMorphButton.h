//
#ifndef _TtC5TAVUI20PlayPauseMorphButton_h
#define _TtC5TAVUI20PlayPauseMorphButton_h
@import Foundation;

@class TAVUI.PlayPauseMorphView, TFNButton, __C.CGSize, __C.CGSize ?;

@interface TAVUI.PlayPauseMorphButton : TFNButton { // (Swift)
    /* instance variables */
    TAVUI.PlayPauseMorphView morphView;
    __C.CGSize intrinsicSize;
    __C.CGSize ? glyphSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;

@end

#endif /* _TtC5TAVUI20PlayPauseMorphButton_h */
