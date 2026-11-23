//
#ifndef XPhotoEditorAccountPerspective_Protocol_h
#define XPhotoEditorAccountPerspective_Protocol_h
@import Foundation;

@protocol XPhotoEditorAccountPerspective

@required

@property (nonatomic, readonly) _Bool isAdjustmentToolEnabled;
@property (nonatomic, readonly) _Bool isTextRedactionEnabled;
@property (nonatomic, readonly) _Bool isImageOverlayEnabled;
@property (nonatomic, readonly) _Bool isImageOverlayShapesEnabled;
@property (nonatomic, readonly) _Bool isCollageEnabled;
@property (nonatomic, readonly) _Bool isTextInputTrayEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineEnabled;
@property (nonatomic, readonly) _Bool isMediaAllowDownloadSettingAvailable;
@property (nonatomic, readonly) _Bool isBlockGrokModificationsSettingAvailable;
@property (nonatomic, readonly) _Bool userCanAccessInAppGrok;

@optional

@end

#endif /* XPhotoEditorAccountPerspective_Protocol_h */
