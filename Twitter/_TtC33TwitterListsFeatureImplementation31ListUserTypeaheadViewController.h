//
#ifndef _TtC33TwitterListsFeatureImplementation31ListUserTypeaheadViewController_h
#define _TtC33TwitterListsFeatureImplementation31ListUserTypeaheadViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterListsFeatureImplementation.ListUserTypeaheadStoreLookupHelper, TwitterListsFeatureImplementation.ListUserTypeaheadViewController.Results ?, _$sSSSg, _$sSo14TFSObjectCacheCySo8NSStringCSo7NSArrayCG, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC;

@interface TwitterListsFeatureImplementation.ListUserTypeaheadViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    TwitterListsFeatureImplementation.ListUserTypeaheadStoreLookupHelper lookupHelper;
    __C.TFSTwitterScribeContext scribeContext;
    Swift.String? typeaheadString;
    __C.TFSObjectCache<__C.NSString, __C.NSArray> resultsCache;
    TwitterListsFeatureImplementation.ListUserTypeaheadViewController.Results ? results;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC33TwitterListsFeatureImplementation31ListUserTypeaheadViewController_h */
