//
#ifndef UITableViewHeaderFooterView_PTVAdditions_h
#define UITableViewHeaderFooterView_PTVAdditions_h
@import Foundation;

@interface UITableViewHeaderFooterView (PTVAdditions)

/* class methods */
+ (id)ptv_dequeueViewForTableView:(id)view;

/* instance methods */
- (_Bool)tav_isVisible;

@end

#endif /* UITableViewHeaderFooterView_PTVAdditions_h */
