//
#ifndef XPhotoEditorPhotoEditorAnalyticsDelegate_Protocol_h
#define XPhotoEditorPhotoEditorAnalyticsDelegate_Protocol_h
@import Foundation;

@protocol XPhotoEditorPhotoEditorAnalyticsDelegate

@required

/* required instance methods */
- (void)photoEditorDidFinishWithSummary:(id)summary;
- (void)photoEditorDidCancel;
- (void)photoEditorDidOpenMoreTools;
- (void)photoEditorDidSaveToGallery;
- (void)photoEditorDidActivateTool:(id)tool;
- (void)photoEditorDidSelectFilter:(id)filter;
- (void)photoEditorDidCustomizeIntensityForFilter:(id)filter;
- (void)photoEditorDidToggleEnhance:(_Bool)enhance;
- (void)photoEditorDidCropWithAspectRatio:(id)ratio;
- (void)photoEditorDidRotate;
- (void)photoEditorDidSwitchDrawingBrush:(id)brush;
- (void)photoEditorDidDrawStroke:(id)stroke;
- (void)photoEditorDidBlurStroke;
- (void)photoEditorDidAddText;
- (void)photoEditorDidDeleteText;
- (void)photoEditorDidSelectTextFontStyle:(id)style;
- (void)photoEditorDidSelectTextColor;
- (void)photoEditorDidSwitchTextColoringMode:(id)mode;
- (void)photoEditorDidSwitchRedactionMode:(id)mode;
- (void)photoEditorDidAddRedaction:(id)redaction;
- (void)photoEditorDidRemoveRedaction;
- (void)photoEditorDidAddImageOverlay;
- (void)photoEditorDidDropImageOverlays:(long long)overlays;
- (void)photoEditorDidDeleteImageOverlay;
- (void)photoEditorDidChangeImageOverlayShape:(id)shape;
- (void)photoEditorDidSelectCollageLayout:(id)layout;
- (void)photoEditorDidApplyCollage:(id)collage;
- (void)photoEditorDidCancelCollage;
- (void)photoEditorDidTapAltText;
- (void)photoEditorDidSaveAltText:(_Bool)text;
- (void)photoEditorDidChangeContentSettings:(id)settings;
- (void)photoEditorDidTapGrokImagine;
- (void)photoEditorDidApplyGrokImagineEdit;
- (void)photoEditorDidRevert:(id)revert;

@optional

@end

#endif /* XPhotoEditorPhotoEditorAnalyticsDelegate_Protocol_h */
