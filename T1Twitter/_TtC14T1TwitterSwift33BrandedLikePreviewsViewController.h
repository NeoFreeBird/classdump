//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift33BrandedLikePreviewsViewController_h
#define _TtC14T1TwitterSwift33BrandedLikePreviewsViewController_h
@import Foundation;

#include "TTAStatusInlineActionButtonDelegate-Protocol.h"
#include "UIDocumentPickerDelegate-Protocol.h"

@class T1TwitterSwift.BrandedLikePreviewsViewController.State ?, T1TwitterSwift.SampleTweetProvider, TFNItemsDataViewController, _$s16TwitterAdFormats18BrandedOverlayItemCMn ?, _$s16TwitterAdFormats19BrandedLikePreviewsO15AnimationParserCMn, _$s16TwitterAnimation0B0CMn ?, _$s7Combine14AnyCancellableCMn ?, _$sSo24TPSFeatureSwitchesAccess_p, _$sSo30UIDocumentPickerViewControllerCSg, _$syXlSg;

@interface T1TwitterSwift.BrandedLikePreviewsViewController : TFNItemsDataViewController <TTAStatusInlineActionButtonDelegate, UIDocumentPickerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterAdFormats.BrandedLikePreviews.AnimationParser animationParser;
    nominal type descriptor for Combine.AnyCancellable ? reduceMotionCancellable;
    T1TwitterSwift.SampleTweetProvider tweetProvider;
    __C.TPSFeatureSwitchesAccess featureSwitches;
    T1TwitterSwift.BrandedLikePreviewsViewController.State ? state;
    nominal type descriptor for TwitterAnimation.Animation ? animation;
    __C.UIDocumentPickerViewController? $__lazy_storage_$_documentPicker;
    Swift.AnyObject? $__lazy_storage_$_landingItem;
    nominal type descriptor for TwitterAdFormats.BrandedOverlayItem ? $__lazy_storage_$_brandOverlayItem;
    Swift.AnyObject? $__lazy_storage_$_animationHeaderItem;
    Swift.AnyObject? $__lazy_storage_$_statusHeaderItem;
}

/* instance methods */
- (void)didTapInlineActionButton:(id)button;
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (long long)dashContentItemType;
- (id)scribePage;
- (id)scribeSection;
- (void)viewDidLoad;
- (id)previewConfigurationForItem:(id)item location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift33BrandedLikePreviewsViewController_h */
