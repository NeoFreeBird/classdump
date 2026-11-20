//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI23ScheduleClampedTextView_h
#define _TtC14CallScheduleUI23ScheduleClampedTextView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn _$sScMYcc ->, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syyScMYcc;

@interface CallScheduleUI.ScheduleClampedTextView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel textLabel;
    __C.UILabel measuringLabel;
    __C.UIImageView chevronView;
    @Swift.MainActor () -> () onTap;
    nominal type descriptor for Foundation.URL _$sScMYcc -> onLinkTap;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)accessibilityActivate;
- (void)didTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14CallScheduleUI23ScheduleClampedTextView_h */
