//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor21VideoEditorTopBarView_h
#define _TtC12XVideoEditor21VideoEditorTopBarView_h
@import Foundation;

@class UIView, _$sSo7UILabelC, _$sSo9TFNButtonC;

@interface XVideoEditor.VideoEditorTopBarView : UIView { // (Swift)
    /* instance variables */
    __C.TFNButton backButton;
    __C.TFNButton nextButton;
    __C.UILabel _titleLabel;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor21VideoEditorTopBarView_h */
