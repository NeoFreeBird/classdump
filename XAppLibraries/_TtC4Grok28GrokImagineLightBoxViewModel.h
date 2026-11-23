//
#ifndef _TtC4Grok28GrokImagineLightBoxViewModel_h
#define _TtC4Grok28GrokImagineLightBoxViewModel_h
@import Foundation;

@class Grok.GrokDelegate, Grok.GrokImagineMentionTextViewProxy, Grok.GrokImagineNavigationViewModel, Grok.GrokImagineSessionManager, Grok.GrokImagineViewModel, Swift.Bool, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine9PublishedVMn Grok.GrokImagineLightboxEntryPoint ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$sSd, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokImaginePostViewModel, _$sSS, _$sSa -> Grok.GrokImaginePostViewModel, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface Grok.GrokImagineLightBoxViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    nominal type descriptor for Combine.Published Swift.Bool _isFocused;
    nominal type descriptor for Combine.Published Swift.Bool _isMuted;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokImaginePostViewModel _posts;
    nominal type descriptor for Combine.Published Swift.String? _selectedPostID;
    nominal type descriptor for Combine.Published Grok.GrokImagineLightboxEntryPoint ? _entryPoint;
    nominal type descriptor for Combine.Published Swift.Double _pageZoom;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never applyToEditorTapped;
    Grok.GrokImagineMentionTextViewProxy textViewProxy;
    Grok.GrokImagineSessionManager imagineManager;
    Grok.GrokImagineViewModel viewModel;
    Grok.GrokImagineNavigationViewModel navigationViewModel;
    Grok.GrokDelegate delegate;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Array -> Grok.GrokImaginePostViewModel pendingRemovePosts;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? removePostTask;
    Swift.Bool isAwaitingAccountLinkEntry;
}

@end

#endif /* _TtC4Grok28GrokImagineLightBoxViewModel_h */
