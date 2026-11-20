//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
