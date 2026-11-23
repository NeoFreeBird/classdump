//
#ifndef _TtC4Grok38GrokImagineLightboxPresentationManager_h
#define _TtC4Grok38GrokImagineLightboxPresentationManager_h
@import Foundation;

@class Grok.GrokImagineLightBoxViewModel ?, Grok.GrokImagineLightboxEntryPoint, Grok.GrokImagineToolbarViewController ?, Grok.GrokImagineViewModelBox, NSObject, NSString, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _$sSo22UINavigationControllerCSgXw, _$sypSg;

@interface Grok.GrokImagineLightboxPresentationManager : NSObject { // (Swift)
    /* instance variables */
    Grok.GrokImagineViewModelBox box;
    Grok.GrokImagineLightboxEntryPoint entryPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable lifecycleCancellables;
    Grok.GrokImagineLightBoxViewModel ? lightboxViewModel;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? accountLinkEntryTask;
    weak __C.UIViewController? presentingViewController;
    weak __C.UIViewController? containerViewController;
    weak __C.UINavigationController? navigationController;
    Grok.GrokImagineToolbarViewController ? toolbarViewController;
    Any? _zoomTransitionOptions;
}

@property (nonatomic, copy) NSString *scribeStatusID;

/* instance methods */
- (void)setResultImageHandler:(id /* block */)handler;
- (void)presentWithSourceImages:(id)images sourceType:(long long)type from:(id)from sourceView:(id)view id:(id)id animated:(_Bool)animated;
- (void)presentWithMediaInfos:(id)infos sourceType:(long long)type startIndex:(id)index from:(id)from sourceView:(id)view;
- (void)cleanup;
- (id)init;

@end

#endif /* _TtC4Grok38GrokImagineLightboxPresentationManager_h */
