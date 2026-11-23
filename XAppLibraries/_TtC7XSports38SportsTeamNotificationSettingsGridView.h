//
#ifndef _TtC7XSports38SportsTeamNotificationSettingsGridView_h
#define _TtC7XSports38SportsTeamNotificationSettingsGridView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$sSa -> XSports.SportsTeamNotificationSettingsGridView.RowView, _$sSo7UILabelC, _$sySS_ XSports.SportsTeamNotificationCategory _$stcSg;

@interface XSports.SportsTeamNotificationSettingsGridView : XSports.MeasurableView { // (Swift)
    /* instance variables */
     empty-list Swift.String first-element-marker  XSports.SportsTeamNotificationCategory _$stcSg onToggle;
    __C.UILabel titleLabel;
    __C.UILabel gamesCaptionLabel;
    __C.UILabel newsCaptionLabel;
    Swift.Array -> XSports.SportsTeamNotificationSettingsGridView.RowView rowViews;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports38SportsTeamNotificationSettingsGridView_h */
