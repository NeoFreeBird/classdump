//
#ifndef _TtCC7XSports25SportsGameLeadersCardViewP33_7429D30DF5F470E6CC267CA6FCF5BC258SideView_h
#define _TtCC7XSports25SportsGameLeadersCardViewP33_7429D30DF5F470E6CC267CA6FCF5BC258SideView_h
@import Foundation;

@class UIControl;

@interface XSports.SportsGameLeadersCardView.(SideView in _7429D30DF5F470E6CC267CA6FCF5BC25) : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onSelect;
    @40@0:8:16@24@32 side;
    @40@0:8:16@24@32 avatarView;
    @40@0:8:16@24@32 valueLabel;
    @40@0:8:16@24@32 nameLabel;
    @40@0:8:16@24@32 detailLabel;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithCoder:(id)coder;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCC7XSports25SportsGameLeadersCardViewP33_7429D30DF5F470E6CC267CA6FCF5BC258SideView_h */
