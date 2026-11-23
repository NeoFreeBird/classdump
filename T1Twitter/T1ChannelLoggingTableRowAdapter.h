//
#ifndef T1ChannelLoggingTableRowAdapter_h
#define T1ChannelLoggingTableRowAdapter_h
@import Foundation;

@class TFNStringDataViewAdapter;

@interface T1ChannelLoggingTableRowAdapter : TFNStringDataViewAdapter

/* instance methods */
- (id)init;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1ChannelLoggingTableRowAdapter_h */
