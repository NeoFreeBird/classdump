//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift41VoiceTabFilterSearchResultsViewController_h
#define _TtC14T1TwitterSwift41VoiceTabFilterSearchResultsViewController_h
@import Foundation;

#include "TUIErrorDataViewAdapterDelegate-Protocol.h"

@class T1TwitterSwift.VoiceTabActionHandler ?, T1TwitterSwift.VoiceTabFilterSearchResultsViewController.ViewModel, T1TwitterSwift.VoiceTabViewModelAdapter ?, TFNItemsDataViewController;

@interface T1TwitterSwift.VoiceTabFilterSearchResultsViewController : TFNItemsDataViewController <TUIErrorDataViewAdapterDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.VoiceTabFilterSearchResultsViewController.ViewModel viewModel;
    T1TwitterSwift.VoiceTabViewModelAdapter ? $__lazy_storage_$_adapter;
    T1TwitterSwift.VoiceTabActionHandler ? $__lazy_storage_$_actionHandler;
}

/* instance methods */
- (void)errorItemTapped:(id)tapped;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)loadTop:(id)top;
- (_Bool)isLoadingTop;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeElement;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift41VoiceTabFilterSearchResultsViewController_h */
