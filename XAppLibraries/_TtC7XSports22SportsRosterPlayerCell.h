//
#ifndef _TtC7XSports22SportsRosterPlayerCell_h
#define _TtC7XSports22SportsRosterPlayerCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsRosterPlayerCell.RowView;

@interface XSports.SportsRosterPlayerCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    XSports.SportsRosterPlayerCell.RowView rowView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports22SportsRosterPlayerCell_h */
