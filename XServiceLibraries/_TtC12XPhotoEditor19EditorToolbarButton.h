//
#ifndef _TtC12XPhotoEditor19EditorToolbarButton_h
#define _TtC12XPhotoEditor19EditorToolbarButton_h
@import Foundation;

#include "XDSButton.h"

@class Swift.Bool, XDesignSystem.Button.SizeClass, XIcons.XIcon, XPhotoEditor.EditorToolbarButton _$scSg ->, XPhotoEditor.EditorToolbarButton.CornerStyle, XPhotoEditor.EditorToolbarStyle, _$sSSSg;

@interface XPhotoEditor.EditorToolbarButton : XDSButton { // (Swift)
    /* instance variables */
    XIcons.XIcon icon;
    XPhotoEditor.EditorToolbarButton.CornerStyle cornerStyle;
    XPhotoEditor.EditorToolbarStyle style;
    XDesignSystem.Button.SizeClass size;
    Swift.String? label;
}

@property (nonatomic, copy) id /* block */ tapActionBlock;
@property (nonatomic) _Bool hasBadge;
@property (nonatomic) _Bool selected;

/* instance methods */
- (void)handleTap;
- (_Bool)isSelected;

@end

#endif /* _TtC12XPhotoEditor19EditorToolbarButton_h */
