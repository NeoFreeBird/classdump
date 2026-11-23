//
#ifndef _TtC18TwitterAudiospaces31ScheduledSpaceFooterItemAdapter_h
#define _TtC18TwitterAudiospaces31ScheduledSpaceFooterItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterAudiospaces.ScheduledSpaceFooterItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces31ScheduledSpaceFooterItemAdapter_h */
