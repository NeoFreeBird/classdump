//
#ifndef _TtC4Grok33GrokImagineLightboxViewController_h
#define _TtC4Grok33GrokImagineLightboxViewController_h
@import Foundation;

@class Grok.GrokImagineLightBoxViewModel, Grok.GrokImagineLightboxEntryPoint, Grok.GrokImagineViewModelBox, TFNViewController, _$s10Foundation4DateVMn ?, _$s10TFNUISwift20TFNHostingControllerCMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo8NSObject_pSg;

@interface Grok.GrokImagineLightboxViewController : TFNViewController { // (Swift)
    /* instance variables */
    Grok.GrokImagineViewModelBox box;
    Grok.GrokImagineLightBoxViewModel lightboxViewModel;
    Grok.GrokImagineLightboxEntryPoint entryPoint;
    nominal type descriptor for TFNUISwift.TFNHostingController ? $__lazy_storage_$_hostViewController;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    nominal type descriptor for Foundation.Date ? trackingStartedAt;
    __C.NSObject? appDidEnterBackgroundObserver;
    __C.NSObject? appWillTerminateObserver;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillAppear:(_Bool)appear;
- (void)didTapCloseButton;
- (void)didTapShareButton;
- (void)didTapAddToReply;
- (void)didTapApplyToEditor;
- (void)didTapAddToProfile;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok33GrokImagineLightboxViewController_h */
