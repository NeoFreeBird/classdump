//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC33TwitterListsFeatureImplementation20TypeaheadListAdapter_h
#define _TtC33TwitterListsFeatureImplementation20TypeaheadListAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterListsFeatureImplementation.TypeaheadListAdapterDelegate ?, _$s12TwitterLists12ListFeaturesCMn, _$s14TwitterUISwift10UserBadgerVMn ?, _$sSo16TIPImagePipelineC, _$sSo17TFNTwitterAccountC, _$sSo23ListCopyStringsProvider_pSg;

@interface TwitterListsFeatureImplementation.TypeaheadListAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for TwitterLists.ListFeatures listFeatures;
    __C.TIPImagePipeline imagePipeline;
    TwitterListsFeatureImplementation.TypeaheadListAdapterDelegate ? delegate;
    __C.ListCopyStringsProvider? $__lazy_storage_$_stringsProvider;
    nominal type descriptor for TwitterUISwift.UserBadger ? $__lazy_storage_$_userBadger;
}

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC33TwitterListsFeatureImplementation20TypeaheadListAdapter_h */
