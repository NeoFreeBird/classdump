//
#ifndef _TtC32TwitterHomeFeatureImplementation32URTHomeTimelineBottomItemAdapter_h
#define _TtC32TwitterHomeFeatureImplementation32URTHomeTimelineBottomItemAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter, TwitterHomeFeatureImplementation.URTHomeTimelineBottomItemAdapterDelegate ?;

@interface TwitterHomeFeatureImplementation.URTHomeTimelineBottomItemAdapter : TFNItemsTableRowAdapter { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.URTHomeTimelineBottomItemAdapterDelegate ? delegate;
}

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation32URTHomeTimelineBottomItemAdapter_h */
