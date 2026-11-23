//
#ifndef _TtC14TwitterRewards28PaymentsJoinButtonRowAdapter_h
#define _TtC14TwitterRewards28PaymentsJoinButtonRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterRewards.PaymentsJoinButtonRowAdapterDelegate ?;

@interface TwitterRewards.PaymentsJoinButtonRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterRewards.PaymentsJoinButtonRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14TwitterRewards28PaymentsJoinButtonRowAdapter_h */
