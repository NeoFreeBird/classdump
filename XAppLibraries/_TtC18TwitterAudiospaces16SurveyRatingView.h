//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospaces16SurveyRatingView_h
#define _TtC18TwitterAudiospaces16SurveyRatingView_h
@import Foundation;

@class UIView, _$sSo7UILabelC, _$sSo9TFNButtonC, _$syycSg;

@interface TwitterAudiospaces.SurveyRatingView : UIView { // (Swift)
    /* instance variables */
    __C.TFNButton button;
    __C.UILabel titleLabel;
    (() -> ())? tapBlock;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC18TwitterAudiospaces16SurveyRatingView_h */
