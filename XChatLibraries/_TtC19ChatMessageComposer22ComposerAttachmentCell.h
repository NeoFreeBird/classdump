//
#ifndef _TtC19ChatMessageComposer22ComposerAttachmentCell_h
#define _TtC19ChatMessageComposer22ComposerAttachmentCell_h
@import Foundation;

@class ChatMessageComposer.ComposerAttachmentPreviewStyle _$sycSg, ChatMessageComposer.ComposerAttachmentView, ChatMessageComposer.MediaImageService ?, UICollectionViewCell;

@interface ChatMessageComposer.ComposerAttachmentCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatMessageComposer.ComposerAttachmentPreviewStyle _$sycSg previewStyleProvider;
    ChatMessageComposer.ComposerAttachmentView attachmentView;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;
- (void)prepareForReuse;

@end

#endif /* _TtC19ChatMessageComposer22ComposerAttachmentCell_h */
