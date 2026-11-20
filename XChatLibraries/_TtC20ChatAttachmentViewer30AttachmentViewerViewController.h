//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatAttachmentViewer30AttachmentViewerViewController_h
#define _TtC20ChatAttachmentViewer30AttachmentViewerViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIPageViewControllerDataSource-Protocol.h"
#include "UIPageViewControllerDelegate-Protocol.h"

@class ChatAttachmentViewer.AttachmentFileContentBuildable, ChatAttachmentViewer.AttachmentMediaSaver, ChatAttachmentViewer.AttachmentVideoPlayerProviding ?, ChatAttachmentViewer.AttachmentViewerComposerVisibilityStream, ChatAttachmentViewer.AttachmentViewerConfiguration, ChatAttachmentViewer.AttachmentViewerFileStream, ChatAttachmentViewer.AttachmentViewerFooter ?, ChatAttachmentViewer.AttachmentViewerFooterBuildable ?, ChatAttachmentViewer.AttachmentViewerListener ?, ChatAttachmentViewer.AttachmentViewerStateStream, ChatAttachmentViewer.AttachmentViewerTransitioningDelegate, ChatAttachmentViewer.AttachmentViewerView ?, ChatAttachmentViewer.AttachmentViewerWorkerPluginPoint, ChatAttachmentViewer.VideoPlaybackStream, ChatMessageForwardSheet.MessageForwardSheetBuildable ?, ChatModels.ChatToastActionTriggerStream, ChatUtilities.AudioSessionArbitrating, Swift.Bool, UIViewController, _$s4XGif14GifImageLoaderCMn, _$sSDySi ChatAttachmentViewer.AttachmentContentViewControlling _$s_So16UIViewControllerCXc, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo20UIPageViewControllerC, _$sSo22UITapGestureRecognizerCSg, _$sSo28UISelectionFeedbackGeneratorC;

@interface ChatAttachmentViewer.AttachmentViewerViewController : UIViewController <UIGestureRecognizerDelegate, UIPageViewControllerDelegate, UIPageViewControllerDataSource> { // (Swift)
    /* instance variables */
    ChatAttachmentViewer.AttachmentViewerListener ? listener;
    ChatAttachmentViewer.AttachmentViewerView ? $__lazy_storage_$_internalView;
    ChatAttachmentViewer.AttachmentFileContentBuildable attachmentFileContentBuilder;
    ChatAttachmentViewer.AttachmentMediaSaver attachmentMediaSaver;
    ChatAttachmentViewer.AttachmentViewerComposerVisibilityStream attachmentViewerComposerVisibilityStream;
    ChatAttachmentViewer.AttachmentViewerFooterBuildable ? attachmentViewerFooterBuilder;
    ChatUtilities.AudioSessionArbitrating audioSessionArbiter;
    ChatAttachmentViewer.AttachmentViewerConfiguration configuration;
    ChatAttachmentViewer.AttachmentViewerFileStream fileStream;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    ChatMessageForwardSheet.MessageForwardSheetBuildable ? messageForwardSheetBuilder;
    __C.UISelectionFeedbackGenerator selectionFeedbackGenerator;
    ChatAttachmentViewer.AttachmentViewerStateStream stateStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatAttachmentViewer.VideoPlaybackStream videoPlaybackStream;
    ChatAttachmentViewer.AttachmentViewerWorkerPluginPoint workerPluginPoint;
    ChatAttachmentViewer.AttachmentViewerTransitioningDelegate zoomTransitioningDelegate;
    __C.UIPageViewController pageViewController;
    Swift.Dictionary empty-list Swift.Int ChatAttachmentViewer.AttachmentContentViewControlling _$s_So16UIViewControllerCXc contentViewControllers;
    ChatAttachmentViewer.AttachmentVideoPlayerProviding ? videoPlayerProvider;
    ChatAttachmentViewer.AttachmentViewerFooter ? footer;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.Bool isKeyboardVisible;
    Swift.Bool isImmersive;
    Swift.Bool chromeWasVisibleBeforeZoom;
    __C.UITapGestureRecognizer? $__lazy_storage_$_immersiveTapRecognizer;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)pageViewController:(id)controller willTransitionToViewControllers:(id)controllers;
- (void)pageViewController:(id)controller didFinishAnimating:(_Bool)animating previousViewControllers:(id)controllers transitionCompleted:(_Bool)completed;
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)dismissViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)handleImmersiveTap:(id)tap;
- (void)handleDismissPan:(id)pan;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20ChatAttachmentViewer30AttachmentViewerViewController_h */
