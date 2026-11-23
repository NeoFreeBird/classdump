//
#ifndef _TtC12XVideoEditor25VideoEditorViewController_h
#define _TtC12XVideoEditor25VideoEditorViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtP12XVideoEditor33VideoEditorViewControllerDelegate_-Protocol.h"

@class Swift.Bool, TFNViewController, XVideoEditor.VideoEditorCaptionsStatusPillView, XVideoEditor.VideoEditorClipFilmstripView, XVideoEditor.VideoEditorConfiguration ?, XVideoEditor.VideoEditorNavigationMenuView ?, XVideoEditor.VideoEditorPlayPauseButton, XVideoEditor.VideoEditorPreviewView, XVideoEditor.VideoEditorTabViewController, XVideoEditor.VideoEditorToolBarView, XVideoEditor.VideoEditorTooltipPresenter ?, XVideoEditor.VideoEditorTopBarView ?, XVideoEditor.VideoEditorViewController._ActiveColorEyedropper ?, XVideoEditor.VideoEditorViewModel, XVideoEditor05VideoB22ViewControllerDelegate_pSgXw, _$s12CoreGraphics7CGFloatVMn _$s5alpha_SaySo6UIViewC4view_AaBtG9originalstSg, _$s7Combine14AnyCancellableCMn ?, _$sSD -> XVideoEditor.VideoEditorTabID XVideoEditor.VideoEditorTabViewController, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo22UITapGestureRecognizerC, _$sSo25UIImpactFeedbackGeneratorC, _$sSo7UIColorCSg;

@interface XVideoEditor.VideoEditorViewController : TFNViewController <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorViewModel _viewModel;
    XVideoEditor.VideoEditorPreviewView _previewView;
    XVideoEditor.VideoEditorClipFilmstripView _clipFilmstripView;
    XVideoEditor.VideoEditorPlayPauseButton _playPauseButton;
    XVideoEditor.VideoEditorToolBarView _toolbarView;
    XVideoEditor.VideoEditorTabViewController _currentTabViewController;
    Swift.Dictionary -> XVideoEditor.VideoEditorTabID XVideoEditor.VideoEditorTabViewController _tabViewControllers;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.AnyCancellable ? _currentTabPrepareRelayoutCancellable;
    nominal type descriptor for Combine.AnyCancellable ? _currentTabRelayoutCancellable;
    XVideoEditor.VideoEditorConfiguration ? _configuration;
    __C.UIImpactFeedbackGenerator _hapticFeedbackGenerator;
    Swift.Bool _isPreparingRelayout;
    Swift.Bool _didLogImpression;
    __C.UITapGestureRecognizer _tapGesture;
    XVideoEditor.VideoEditorTopBarView ? $__lazy_storage_$__topBarView;
    XVideoEditor.VideoEditorNavigationMenuView ? $__lazy_storage_$__topNavigationMenuView;
    XVideoEditor.VideoEditorCaptionsStatusPillView _captionsStatusPill;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _captionsPillDismissTask;
    XVideoEditor.VideoEditorTooltipPresenter ? _tooltipPresenter;
    XVideoEditor.VideoEditorViewController._ActiveColorEyedropper ? _activeColorEyedropper;
    nominal type descriptor for CoreGraphics.CGFloat _$s5alpha_SaySo6UIViewC4view_AaBtG9originalstSg _zoomTransitionChrome;
    __C.UIColor? _zoomTransitionBackgroundColor;
}

@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, weak) id <XVideoEditor.VideoEditorViewControllerDelegate> delegate;

/* class methods */
+ (double)minOutputDuration;

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillLayoutSubviews;
- (void)_didTapPlayPause;
- (void)_didTap:(id)tap;
- (void)_didTapBack;
- (void)_didTapNext;
- (void)_didTapTopMenuLeftAction;
- (void)_didTapTopMenuRightAction;
- (void)_didTapCaptionsRetry;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XVideoEditor25VideoEditorViewController_h */
