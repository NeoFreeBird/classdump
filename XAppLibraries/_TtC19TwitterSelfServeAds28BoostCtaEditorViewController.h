//
#ifndef _TtC19TwitterSelfServeAds28BoostCtaEditorViewController_h
#define _TtC19TwitterSelfServeAds28BoostCtaEditorViewController_h
@import Foundation;

@class TwitterSelfServeAds.BoostCta _$sSg_SbtcSg ->, TwitterSelfServeAds.BoostCtaEditorViewModel, TwitterSelfServeAds.BoostCtaEnableRowView, TwitterSelfServeAds.BoostCtaPreviewView, TwitterSelfServeAds.BoostCtaUrlCellView, TwitterSelfServeAds.BoostFieldRowView, _$s10Foundation3URLVMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16TIPImagePipelineCSg;

@interface TwitterSelfServeAds.BoostCtaEditorViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    TwitterSelfServeAds.BoostCta _$sSg_SbtcSg -> onFinish;
    TwitterSelfServeAds.BoostCtaEditorViewModel editorViewModel;
    Swift.String displayName;
    nominal type descriptor for Foundation.URL ? avatarImageURL;
    __C.TIPImagePipeline? imagePipeline;
    TwitterSelfServeAds.BoostCtaEnableRowView enableRow;
    TwitterSelfServeAds.BoostCtaUrlCellView urlCell;
    TwitterSelfServeAds.BoostFieldRowView labelCell;
    TwitterSelfServeAds.BoostCtaPreviewView previewView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19TwitterSelfServeAds28BoostCtaEditorViewController_h */
