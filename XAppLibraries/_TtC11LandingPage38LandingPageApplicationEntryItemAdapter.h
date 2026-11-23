//
#ifndef _TtC11LandingPage38LandingPageApplicationEntryItemAdapter_h
#define _TtC11LandingPage38LandingPageApplicationEntryItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface LandingPage.LandingPageApplicationEntryItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC11LandingPage38LandingPageApplicationEntryItemAdapter_h */
