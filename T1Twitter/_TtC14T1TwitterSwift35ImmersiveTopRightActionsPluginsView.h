//
#ifndef _TtC14T1TwitterSwift35ImmersiveTopRightActionsPluginsView_h
#define _TtC14T1TwitterSwift35ImmersiveTopRightActionsPluginsView_h
@import Foundation;

#include "XDSButtonRowLayoutDelegate-Protocol.h"

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$s13XDesignSystem4BlurCMn, _$s13XDesignSystem9ButtonRowCMn, _$sSD -> T1TwitterSwift.ImmersiveTopRightActionsPluginsView.Action _$s13XDesignSystem6ButtonCMn;

@interface T1TwitterSwift.ImmersiveTopRightActionsPluginsView : UIView <XDSButtonRowLayoutDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? cardState;
    nominal type descriptor for XDesignSystem.Blur pillBlur;
    nominal type descriptor for XDesignSystem.ButtonRow row;
    Swift.Dictionary -> T1TwitterSwift.ImmersiveTopRightActionsPluginsView.Action nominal type descriptor for XDesignSystem.Button buttons;
}

/* instance methods */
- (void)buttonRowDidArrangeItems:(id)items contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift35ImmersiveTopRightActionsPluginsView_h */
