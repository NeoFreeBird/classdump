//
#ifndef _TtC12XVideoEditor29VideoEditorNavigationMenuView_h
#define _TtC12XVideoEditor29VideoEditorNavigationMenuView_h
@import Foundation;

@class UIView, XVideoEditor.VideoEditorNavigationMenu ?, _$sSo7UILabelC, _$sSo9TFNButtonC;

@interface XVideoEditor.VideoEditorNavigationMenuView : UIView { // (Swift)
    /* instance variables */
    __C.TFNButton leftButton;
    __C.TFNButton rightButton;
    __C.UILabel _titleLabel;
    XVideoEditor.VideoEditorNavigationMenu ? menu;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor29VideoEditorNavigationMenuView_h */
