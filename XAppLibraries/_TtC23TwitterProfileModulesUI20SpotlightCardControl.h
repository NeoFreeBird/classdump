//
#ifndef _TtC23TwitterProfileModulesUI20SpotlightCardControl_h
#define _TtC23TwitterProfileModulesUI20SpotlightCardControl_h
@import Foundation;

#include "_TtC23TwitterProfileModulesUI20HighlightableControl.h"

@class NSArray, _$sSaySo6UIViewCG, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo6UIViewCSgSg;

@interface TwitterProfileModulesUI.SpotlightCardControl : TwitterProfileModulesUI.HighlightableControl { // (Swift)
    /* instance variables */
    __C.UIView? $__lazy_storage_$_contentView;
    __C.UIView? $__lazy_storage_$_containerView;
    __C.UIView cardView;
    __C.UIView?? $__lazy_storage_$_horizontalSeparatorView;
    __C.UIView?? $__lazy_storage_$_actionBarView;
    [__C.UIView] accessibilityActionButtons;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23TwitterProfileModulesUI20SpotlightCardControl_h */
