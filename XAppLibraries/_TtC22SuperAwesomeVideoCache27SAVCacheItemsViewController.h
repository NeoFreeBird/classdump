//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC22SuperAwesomeVideoCache27SAVCacheItemsViewController_h
#define _TtC22SuperAwesomeVideoCache27SAVCacheItemsViewController_h
@import Foundation;

@class SuperAwesomeVideoCache.SAVCacheViewModel, Swift.Bool, TFNItemsDataViewController, _$sSaySo22TTACoreStatusViewModel_pG, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface SuperAwesomeVideoCache.SAVCacheItemsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    [__C.TTACoreStatusViewModel] items;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    SuperAwesomeVideoCache.SAVCacheViewModel viewModel;
    Swift.Bool didPrepareOnAppearance;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)dataViewDidDisplay;
- (id)scribePage;
- (id)scribeSection;
- (void)updateIfNeeded;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC22SuperAwesomeVideoCache27SAVCacheItemsViewController_h */
