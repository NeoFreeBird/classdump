//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok20GrokImagineViewModel_h
#define _TtC4Grok20GrokImagineViewModel_h
@import Foundation;

@class Grok.GrokFeatureAccess, Grok.GrokImagineClient, Grok.GrokImagineImageDownloader ?, Grok.GrokImagineVideoDownloader ?, Grok0A13Authenticable_p, _$s20TwitterActionService0bC0CMn ?, _$s7Combine18PassthroughSubjectCMn Grok.GrokImagineVideoGenSession.CompleteState.Upsell _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySSSg6prompt_So8TTMAssetC5assett _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySo16UIViewControllerC04viewB0_ _$s10Foundation3URLVMn urlt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn Grok.GrokImagineViewModel.ImagineVideo ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine9PublishedVMn _$sSo23TFSTwitterCanonicalUser_pSg, _$sSSSg, _$sSo16TIPImagePipelineC, _$sSo22TFSAccountUserDefaultsC, _$sSo23TFSTwitterCanonicalUser_pSg, _$ss5Int64VMn, _$sySo7UIImageC_ _$s10Foundation4DataVMn _$sSgtcSg, _TtCs12_SwiftObject;

@interface Grok.GrokImagineViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokImagineVideoGenSession.CompleteState.Upsell nominal type descriptor for Swift.Never openUpsell;
    nominal type descriptor for Combine.PassthroughSubject  empty-list (prompt: Swift.String?, asset: __C.TTMAsset) nominal type descriptor for Swift.Never addAttachment;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isPresented;
    nominal type descriptor for Combine.CurrentValueSubject Grok.GrokImagineViewModel.ImagineVideo ? nominal type descriptor for Swift.Never videoIsReady;
    nominal type descriptor for Combine.PassthroughSubject  empty-list __C.UIViewControllerviewController first-element-marker  nominal type descriptor for Foundation.URL urlt nominal type descriptor for Swift.Never showShareSheet;
     empty-list __C.UIImage first-element-marker  nominal type descriptor for Foundation.Data _$sSgtcSg resultImageHandler;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never initialPrompt;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never hasOpenGrokImagineScreenSubject;
    Grok.GrokImagineClient client;
    Grok0A13Authenticable_p account;
    Swift.String? accountID;
    nominal type descriptor for Swift.Int64 userID;
    __C.TIPImagePipeline imagePipeline;
    __C.TFSAccountUserDefaults userDefaults;
    nominal type descriptor for TwitterActionService.ActionService ? actionService;
    Grok.GrokFeatureAccess featureAccess;
    nominal type descriptor for Combine.Published __C.TFSTwitterCanonicalUser? _user;
    __C.TFSTwitterCanonicalUser? replyToUser;
    Swift.String? replyToStatusText;
    Grok.GrokImagineImageDownloader ? $__lazy_storage_$_imageDownloader;
    Grok.GrokImagineVideoDownloader ? $__lazy_storage_$_videoDownloader;
}

@end

#endif /* _TtC4Grok20GrokImagineViewModel_h */
