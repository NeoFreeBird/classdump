//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26JobListItemDataViewAdapter_h
#define _TtC14T1TwitterSwift26JobListItemDataViewAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1TwitterSwift.JobListItemDataViewAdapter : TFNItemsTableRowAdapter // (Swift)

/* instance methods */
- (id)init;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* _TtC14T1TwitterSwift26JobListItemDataViewAdapter_h */
