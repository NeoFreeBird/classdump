//
#ifndef _TtC14TwitterRewards28TermsAndConditionsRowAdapter_h
#define _TtC14TwitterRewards28TermsAndConditionsRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterRewards.TermsAndConditionsRowAdapterDelegate ?;

@interface TwitterRewards.TermsAndConditionsRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterRewards.TermsAndConditionsRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14TwitterRewards28TermsAndConditionsRowAdapter_h */
