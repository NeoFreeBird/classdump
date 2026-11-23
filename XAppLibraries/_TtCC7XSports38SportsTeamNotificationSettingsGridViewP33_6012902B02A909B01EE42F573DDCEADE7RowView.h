//
#ifndef _TtCC7XSports38SportsTeamNotificationSettingsGridViewP33_6012902B02A909B01EE42F573DDCEADE7RowView_h
#define _TtCC7XSports38SportsTeamNotificationSettingsGridViewP33_6012902B02A909B01EE42F573DDCEADE7RowView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@interface XSports.SportsTeamNotificationSettingsGridView.(RowView in _6012902B02A909B01EE42F573DDCEADE) : XSports.MeasurableView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onToggle;
    @40@0:8:16@24@32 tile;
    @40@0:8:16@24@32 nameLabel;
    @40@0:8:16@24@32 gamesCheckbox;
    @40@0:8:16@24@32 newsCheckbox;
    @40@0:8:16@24@32 restID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)gamesTapped;
- (void)newsTapped;

@end

#endif /* _TtCC7XSports38SportsTeamNotificationSettingsGridViewP33_6012902B02A909B01EE42F573DDCEADE7RowView_h */
