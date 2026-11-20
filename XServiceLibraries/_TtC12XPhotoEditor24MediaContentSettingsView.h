//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor24MediaContentSettingsView_h
#define _TtC12XPhotoEditor24MediaContentSettingsView_h
@import Foundation;

@class UIView, XPhotoEditor.MediaContentFlags, XPhotoEditor.MediaContentFlags _$s_ -> XPhotoEditor.MediaContentPermissions _$stcSg, XPhotoEditor.MediaContentPermissions, XPhotoEditor.MediaContentSettingsConfiguration, _$sSa -> XPhotoEditor.MediaContentSettingsRowView, _$sSo11UIImageViewCSg, _$sSo11UIStackViewC, _$sSo12UIScrollViewC;

@interface XPhotoEditor.MediaContentSettingsView : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.MediaContentFlags  first-element-marker  -> XPhotoEditor.MediaContentPermissions _$stcSg onChange;
    XPhotoEditor.MediaContentFlags flags;
    XPhotoEditor.MediaContentPermissions permissions;
    XPhotoEditor.MediaContentSettingsConfiguration configuration;
    __C.UIImageView? previewImageView;
    Swift.Array -> XPhotoEditor.MediaContentSettingsRowView rows;
    __C.UIScrollView scrollView;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor24MediaContentSettingsView_h */
