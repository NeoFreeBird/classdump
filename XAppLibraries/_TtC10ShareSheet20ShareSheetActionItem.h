//
#ifndef _TtC10ShareSheet20ShareSheetActionItem_h
#define _TtC10ShareSheet20ShareSheetActionItem_h
@import Foundation;

@class NSObject, ShareSheet.ShareSheetActionItem.ImageType, ShareSheet.ShareWatermarkOptions ?, Swift.Bool, TwitterShareKitProtocols.ShareLinkReadiness ?, _$s10Foundation4UUIDVMn, _$sSS, _$sSSSg, _$sSaySo7UIColorCGSg, _$sSo7UIColorCSg, _$sSo7UIImageCSg, _$syyc;

@interface ShareSheet.ShareSheetActionItem : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID id;
    ShareSheet.ShareSheetActionItem.ImageType image;
    Swift.String title;
    () -> () action;
    Swift.String? identifier;
    TwitterShareKitProtocols.ShareLinkReadiness ? shareLinkReadiness;
    ShareSheet.ShareWatermarkOptions ? watermarkOptions;
    Swift.Bool playsTapHaptic;
    Swift.Bool presentsSharePreview;
    __C.UIColor? sharePreviewBrandColor;
    [__C.UIColor]? sharePreviewGradientColors;
    __C.UIColor? sharePreviewForegroundColor;
    Swift.Bool sharePreviewUsesBoldTitle;
    Swift.String? sharePreviewButtonTitle;
    __C.UIImage? sharePreviewLogo;
}

/* instance methods */
- (id)initWithTitle:(id)title image:(id)image action:(id /* block */)action;
- (id)initWithTitle:(id)title imageURL:(id)url action:(id /* block */)action;
- (id)init;

@end

#endif /* _TtC10ShareSheet20ShareSheetActionItem_h */
