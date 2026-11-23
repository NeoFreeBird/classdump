//
#ifndef UITableView_PTVAdditions_h
#define UITableView_PTVAdditions_h
@import Foundation;

@interface UITableView (PTVAdditions)

/* instance methods */
- (id)tav_private_visibleHeaderViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tav_boundsForClippingDescendants;
- (void)ptv_registerCellClasses:(id)classes;
- (void)ptv_registerHeaderViewClasses:(id)classes;
- (void)ptv_disableEstimatedHeights;

@end

#endif /* UITableView_PTVAdditions_h */
