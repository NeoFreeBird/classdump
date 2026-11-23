//
#ifndef T1PeopleAddressBookRecommendationsViewController_h
#define T1PeopleAddressBookRecommendationsViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1PeopleAddressBookRecommendationsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *recommendations;
}

/* instance methods */
- (id)initWithAccount:(id)account recommendations:(id)recommendations;
- (void)viewDidLoad;
- (id)scribe;
- (id)scribePage;
- (id)scribeContextForIndexPath:(id)path;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1PeopleAddressBookRecommendationsViewController_h */
