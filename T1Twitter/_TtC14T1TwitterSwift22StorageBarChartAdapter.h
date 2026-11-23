//
#ifndef _TtC14T1TwitterSwift22StorageBarChartAdapter_h
#define _TtC14T1TwitterSwift22StorageBarChartAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1TwitterSwift.StorageBarChartAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift22StorageBarChartAdapter_h */
