//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1JobListViewController_h
#define T1JobListViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1JobListViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *jobListViewModel;
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *$__lazy_storage_$_paginationHelper;
    NSNumber"16@0:8 *previouslyVisibleIndexPaths;
}

/* instance methods */
- (id)initWithJobListViewModel:(id)model scribe:(id)scribe;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)dataViewDidDisplay;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1JobListViewController_h */
