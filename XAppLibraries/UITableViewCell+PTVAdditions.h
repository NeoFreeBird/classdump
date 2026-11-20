//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITableViewCell_PTVAdditions_h
#define UITableViewCell_PTVAdditions_h
@import Foundation;

@interface UITableViewCell (PTVAdditions)

/* class methods */
+ (id)ptv_dequeueCellForRowAtIndexPath:(id)path inTableView:(id)view;
+ (id)ptv_cellForRowAtIndexPath:(id)path inTableView:(id)view;

@end

#endif /* UITableViewCell_PTVAdditions_h */
