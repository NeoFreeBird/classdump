//
#ifndef _TtC33TwitterListsFeatureImplementation27ListTypeaheadViewController_h
#define _TtC33TwitterListsFeatureImplementation27ListTypeaheadViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterListsFeatureImplementation.ListTypeaheadViewController.Results ?, TwitterListsFeatureImplementation.ListTypeaheadViewControllerDelegate ?, _$s12TwitterLists12ListFeaturesCMn, _$sSSSg, _$sSo14TFSObjectCacheCySo8NSStringCSo7NSArrayCG, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC;

@interface TwitterListsFeatureImplementation.ListTypeaheadViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    TwitterListsFeatureImplementation.ListTypeaheadViewControllerDelegate ? delegate;
    nominal type descriptor for TwitterLists.ListFeatures listFeatures;
    Swift.String? typeaheadString;
    __C.TFSObjectCache<__C.NSString, __C.NSArray> resultsCache;
    TwitterListsFeatureImplementation.ListTypeaheadViewController.Results ? results;
}

/* instance methods */
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC33TwitterListsFeatureImplementation27ListTypeaheadViewController_h */
