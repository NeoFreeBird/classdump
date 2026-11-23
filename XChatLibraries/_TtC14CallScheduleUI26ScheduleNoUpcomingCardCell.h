//
#ifndef _TtC14CallScheduleUI26ScheduleNoUpcomingCardCell_h
#define _TtC14CallScheduleUI26ScheduleNoUpcomingCardCell_h
@import Foundation;

@class UICollectionViewCell, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface CallScheduleUI.ScheduleNoUpcomingCardCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    (() -> ())? onSchedule;
    (() -> ())? onMeetNow;
    __C.UIView cardView;
    __C.UIView iconTileView;
    __C.UIImageView iconView;
    __C.UILabel titleLabel;
    __C.UILabel messageLabel;
    nominal type descriptor for XDesignSystem.Button scheduleButton;
    nominal type descriptor for XDesignSystem.Button meetNowButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC14CallScheduleUI26ScheduleNoUpcomingCardCell_h */
