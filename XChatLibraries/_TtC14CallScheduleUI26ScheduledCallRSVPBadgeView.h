//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI26ScheduledCallRSVPBadgeView_h
#define _TtC14CallScheduleUI26ScheduledCallRSVPBadgeView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC;

@interface CallScheduleUI.ScheduledCallRSVPBadgeView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView glyphView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC14CallScheduleUI26ScheduledCallRSVPBadgeView_h */
