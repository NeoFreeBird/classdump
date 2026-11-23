//
#ifndef _TtC10JetfuelSDK13ListComponent_h
#define _TtC10JetfuelSDK13ListComponent_h
@import Foundation;

@class JetfuelSDK.JfListViewModel ?, JetfuelSDK.ListTableView ?, JetfuelSDK.ViewContext, Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface JetfuelSDK.ListComponent : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.ListTableView ? $__lazy_storage_$_tableView;
    Swift.Bool offsetsHeader;
    JetfuelSDK.JfListViewModel ? viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (void)handleRefresh;

@end

#endif /* _TtC10JetfuelSDK13ListComponent_h */
