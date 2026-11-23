//
#ifndef _TtC14CallScheduleUI23ScheduleErrorBannerCell_h
#define _TtC14CallScheduleUI23ScheduleErrorBannerCell_h
@import Foundation;

@class UICollectionViewCell, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC, _$syycSg;

@interface CallScheduleUI.ScheduleErrorBannerCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    (() -> ())? onRetry;
    __C.UILabel messageLabel;
    nominal type descriptor for XDesignSystem.Button retryButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleRetry;

@end

#endif /* _TtC14CallScheduleUI23ScheduleErrorBannerCell_h */
