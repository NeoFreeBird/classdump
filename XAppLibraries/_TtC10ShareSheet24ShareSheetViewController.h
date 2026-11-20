//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ShareSheet24ShareSheetViewController_h
#define _TtC10ShareSheet24ShareSheetViewController_h
@import Foundation;

#include "_TtP10ShareSheet33ShareSheetPreviewProviderDelegate_-Protocol.h"

@class ShareSheet.ShareSheetActionItem _$s_Si -> _$s12CoreGraphics7CGFloatVMn _$stcSg, ShareSheet.ShareSheetDismissData ?, ShareSheet.ShareSheetDismissData _$sSgcSg ->, ShareSheet.ShareSheetDismissReason _$s_ -> ShareSheet.ShareSheetStateSnapshot _$s12CoreGraphics7CGFloatVMn _$sSgtcSg, ShareSheet.ShareSheetPreviewProvider ?, ShareSheet.ShareSheetViewModel ?, Swift.Bool, _$s10TFNUISwift20TFNHostingControllerCN, _$s12CoreGraphics7CGFloatVMn ?, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sySa -> _$ss5Int64VMn _$sG_SaySSGACtcSg, _$sySi_So7UIImageCSgtcSg, _$syycSg, __C.CGSize _$scSg ->;

@interface ShareSheet.ShareSheetViewController : type metadata for TFNUISwift.TFNHostingController <ShareSheet.ShareSheetPreviewProviderDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool useAlternateBackgroundColor;
    ShareSheet.ShareSheetDismissData _$sSgcSg -> didDismissBlock;
    ShareSheet.ShareSheetViewModel ? shareSheetViewModel;
     empty-list Swift.Array -> nominal type descriptor for Swift.Int64 _$sG_SaySSGACtcSg onSharedViaDirectMessage;
    __C.CGSize _$scSg -> onFirstAppear;
    ShareSheet.ShareSheetActionItem  first-element-marker Swift.Int -> nominal type descriptor for CoreGraphics.CGFloat _$stcSg onActionTap;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onStripScroll;
    (() -> ())? onSearchActivated;
    ShareSheet.ShareSheetDismissReason  first-element-marker  -> ShareSheet.ShareSheetStateSnapshot nominal type descriptor for CoreGraphics.CGFloat _$sSgtcSg onDismissWithoutAction;
    ShareSheet.ShareSheetPreviewProvider ? previewProvider;
    ShareSheet.ShareSheetDismissData ? dismissData;
    Swift.Bool hasAppeared;
    Swift.Bool didRequestDismiss;
    nominal type descriptor for CoreGraphics.CGFloat ? windowWidthAtDisappearance;
}

@property (nonatomic, copy) id /* block */ previewSelectionHandler;
@property (nonatomic, copy) id /* block */ onSharePreviewOpened;
@property (nonatomic, copy) id /* block */ onSharePreviewShared;
@property (nonatomic, readonly) long long selectedPreviewIndex;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (void)previewProviderDidUpdate:(id)update;
- (void)setPreviewProvider:(id)provider;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10ShareSheet24ShareSheetViewController_h */
