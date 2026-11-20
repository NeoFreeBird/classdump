//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI20ScheduleFieldRowView_h
#define _TtC14CallScheduleUI20ScheduleFieldRowView_h
@import Foundation;

@class UIView, _$sSaySo6UIViewCG, _$sSo6UIViewC, _$sSo6UIViewCSg;

@interface CallScheduleUI.ScheduleFieldRowView : UIView { // (Swift)
    /* instance variables */
    __C.UIView leadingView;
    [__C.UIView] lines;
    __C.UIView? accessoryView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14CallScheduleUI20ScheduleFieldRowView_h */
