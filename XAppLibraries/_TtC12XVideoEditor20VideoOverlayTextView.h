//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor20VideoOverlayTextView_h
#define _TtC12XVideoEditor20VideoOverlayTextView_h
@import Foundation;

@class Swift.Bool, UITextView, XVideoEditor.VideoEditorTextOverlayTypography ?;

@interface XVideoEditor.VideoOverlayTextView : UITextView { // (Swift)
    /* instance variables */
    Swift.Bool _isApplyingOverlayTypography;
    XVideoEditor.VideoEditorTextOverlayTypography ? typography;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC12XVideoEditor20VideoOverlayTextView_h */
