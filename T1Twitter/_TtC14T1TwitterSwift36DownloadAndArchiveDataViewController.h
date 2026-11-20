//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift36DownloadAndArchiveDataViewController_h
#define _TtC14T1TwitterSwift36DownloadAndArchiveDataViewController_h
@import Foundation;

@class T1TwitterSwift.DownloadAndArchiveDataViewModel, TFNItemsDataViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo15TFNDataViewItemCSg, _$sSo26TFNActivityIndicatorButtonCSg;

@interface T1TwitterSwift.DownloadAndArchiveDataViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    T1TwitterSwift.DownloadAndArchiveDataViewModel viewModel;
    __C.TFNDataViewItem? $__lazy_storage_$_downloadDataDetails;
    __C.TFNActivityIndicatorButton? $__lazy_storage_$_ctaButton;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable streams;
}

/* instance methods */
- (void)didTapCTAButton:(id)ctabutton;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift36DownloadAndArchiveDataViewController_h */
