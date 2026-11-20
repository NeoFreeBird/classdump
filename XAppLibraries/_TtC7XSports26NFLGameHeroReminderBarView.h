//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports26NFLGameHeroReminderBarView_h
#define _TtC7XSports26NFLGameHeroReminderBarView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem4BlurCMn, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC, _$syycSg;

@interface XSports.NFLGameHeroReminderBarView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onToggleReminder;
    nominal type descriptor for XDesignSystem.Blur blurView;
    __C.UILabel venueLabel;
    __C.UILabel kickoffLabel;
    nominal type descriptor for XDesignSystem.Button reminderButton;
    Swift.Bool showsReminderButton;
    Swift.Bool isTogglingReminder;
    nominal type descriptor for CoreGraphics.CGFloat reminderButtonWidth;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didTapReminder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports26NFLGameHeroReminderBarView_h */
