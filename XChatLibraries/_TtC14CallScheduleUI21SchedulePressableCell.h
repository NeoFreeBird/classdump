//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI21SchedulePressableCell_h
#define _TtC14CallScheduleUI21SchedulePressableCell_h
@import Foundation;

@class Swift.Bool, UICollectionViewCell, _$s13XDesignSystem11PressEffectCMn ?, _$sSo6UIViewC;

@interface CallScheduleUI.SchedulePressableCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UIView pressView;
    nominal type descriptor for XDesignSystem.PressEffect ? $__lazy_storage_$_pressEffect;
    Swift.Bool isTouchOnControl;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)prepareForReuse;

@end

#endif /* _TtC14CallScheduleUI21SchedulePressableCell_h */
