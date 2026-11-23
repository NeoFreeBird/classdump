//
#ifndef _TtC14T1TwitterSwift28ContactsDeniedViewController_h
#define _TtC14T1TwitterSwift28ContactsDeniedViewController_h
@import Foundation;

@class UIViewController, _$sSo11UIImageViewCSg, _$sSo16TIPImagePipelineCSg, _$sSo17TFNTwitterAccountC, _$sSo18NSLayoutConstraintCSg, _$sSo22TIPImageFetchOperationCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.ContactsDeniedViewController : UIViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TIPImagePipeline? $__lazy_storage_$_imagePipeline;
    __C.TIPImageFetchOperation? illustrationFetchOperation;
    __C.NSLayoutConstraint? illustrationAspectRatioConstraint;
    __C.UIImageView? $__lazy_storage_$_illustrationImageView;
    __C.UILabel? $__lazy_storage_$_subtitleLabel;
    __C.TFNButton? $__lazy_storage_$_enableContactsButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)traitCollectionDidChange:(id)change;
- (void)enableContactsButtonTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift28ContactsDeniedViewController_h */
