//
#ifndef _TtC14T1TwitterSwift31DownloadAndArchiveDataViewModel_h
#define _TtC14T1TwitterSwift31DownloadAndArchiveDataViewModel_h
@import Foundation;

@class T1TwitterSwift.UserDataArchiveMetadata ?, _$s10Foundation3URLVMn _$scSg ->, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn T1TwitterSwift.DownloadAndArchiveDataViewModel.RequestState, _$sSSSg, _$sSo17TFNTwitterAccountC, _$sSo27NSRelativeDateTimeFormatterCSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.DownloadAndArchiveDataViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSRelativeDateTimeFormatter? $__lazy_storage_$_relativeDateFormatter;
    __C.TFNTwitterAccount account;
    Swift.String? accountDisplayUsername;
    T1TwitterSwift.UserDataArchiveMetadata ? archiveMetaData;
    nominal type descriptor for Combine.Published Swift.Bool _isFetchingRequestState;
    nominal type descriptor for Combine.Published T1TwitterSwift.DownloadAndArchiveDataViewModel.RequestState _requestState;
    nominal type descriptor for Foundation.URL _$scSg -> presentShareSheetWithURL;
}

@end

#endif /* _TtC14T1TwitterSwift31DownloadAndArchiveDataViewModel_h */
