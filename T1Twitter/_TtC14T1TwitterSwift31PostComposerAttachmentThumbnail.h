//
#ifndef _TtC14T1TwitterSwift31PostComposerAttachmentThumbnail_h
#define _TtC14T1TwitterSwift31PostComposerAttachmentThumbnail_h
@import Foundation;

@class T1TwitterSwift.PostComposerAttachmentRemoveButton, UIView, _$sSo17TFNTwitterAccountCSg, _$sSo21T1MediaAttachmentViewC;

@interface T1TwitterSwift.PostComposerAttachmentThumbnail : UIView { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount? account;
    __C.T1MediaAttachmentView attachmentView;
    T1TwitterSwift.PostComposerAttachmentRemoveButton removeGlyph;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift31PostComposerAttachmentThumbnail_h */
