//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
