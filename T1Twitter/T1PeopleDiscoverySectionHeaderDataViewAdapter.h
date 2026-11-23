//
#ifndef T1PeopleDiscoverySectionHeaderDataViewAdapter_h
#define T1PeopleDiscoverySectionHeaderDataViewAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1PeopleDiscoverySectionHeaderDataViewAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *$__lazy_storage_$_attributedTextForMockDisclosureIndicator;
}

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* T1PeopleDiscoverySectionHeaderDataViewAdapter_h */
