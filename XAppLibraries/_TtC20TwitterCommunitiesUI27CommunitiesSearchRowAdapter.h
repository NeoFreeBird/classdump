//
#ifndef _TtC20TwitterCommunitiesUI27CommunitiesSearchRowAdapter_h
#define _TtC20TwitterCommunitiesUI27CommunitiesSearchRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterCommunitiesUI.CommunitiesSearchRowAdapterDelegate ?;

@interface TwitterCommunitiesUI.CommunitiesSearchRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunitiesSearchRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI27CommunitiesSearchRowAdapter_h */
