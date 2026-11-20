//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCV4Grok12GrokRootView9ViewModel_h
#define _TtCV4Grok12GrokRootView9ViewModel_h
@import Foundation;

@class Grok.GrokAttachmentUploadTasks _$syt, Grok.GrokDelegate ?, Grok.GrokEventScriber, Grok.GrokFeatureAccess, Grok.GrokInputBarView.ViewModel, Grok.GrokMediaProvider, Grok.GrokSettingsProvider, Grok.GrokUsersProvider, Grok0A18AccountPerspective_p, Swift.Bool, _$s20TwitterActionService0bC0CMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine19CurrentValueSubjectCMn Grok.NewConvoButtonState _$ss5NeverOMn, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokFile ?, _$sSD -> _$s10Foundation4UUIDVMn _$syc, _$sSh -> _$s10Foundation4UUIDVMn, _$sSi, _TtCs12_SwiftObject;

@interface Grok.GrokRootView.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokDelegate ? delegate;
    Grok.GrokFeatureAccess grokAccess;
    Grok0A18AccountPerspective_p account;
    nominal type descriptor for Combine.AnyCancellable ? anyCancellable;
    nominal type descriptor for Combine.Published Swift.Bool _isPremiumUser;
    Grok.GrokUsersProvider usersProvider;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Grok.GrokSettingsProvider settingsProvider;
    Grok.GrokMediaProvider mediaProvider;
    Grok.GrokInputBarView.ViewModel inputViewModel;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokFile ? _fileAttachments;
    Swift.Int activeUploadCount;
    Grok.GrokAttachmentUploadTasks () gatewayUploadTasks;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID _$syc attachmentUploadRetries;
    Swift.Set -> nominal type descriptor for Foundation.UUID videoExportGuardIDs;
    nominal type descriptor for Combine.CurrentValueSubject Grok.NewConvoButtonState nominal type descriptor for Swift.Never newConvoButtonState;
    Grok.GrokEventScriber grokEventScriber;
    Swift.Bool routesNewConversationsToGateway;
    nominal type descriptor for Combine.AnyCancellable ? linkStateCancellable;
}

@end

#endif /* _TtCV4Grok12GrokRootView9ViewModel_h */
