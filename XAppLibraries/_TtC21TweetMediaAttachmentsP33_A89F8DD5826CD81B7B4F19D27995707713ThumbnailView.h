//
#ifndef _TtC21TweetMediaAttachmentsP33_A89F8DD5826CD81B7B4F19D27995707713ThumbnailView_h
#define _TtC21TweetMediaAttachmentsP33_A89F8DD5826CD81B7B4F19D27995707713ThumbnailView_h
@import Foundation;

@class UIControl;

@interface TweetMediaAttachments.(ThumbnailView in _A89F8DD5826CD81B7B4F19D279957077) : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 imageView;
    @40@0:8:16@24@32 obscuredIconView;
    @40@0:8:16@24@32 videoIconView;
    @40@0:8:16@24@32 outlineView;
    @40@0:8:16@24@32 thumbnailSide;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC21TweetMediaAttachmentsP33_A89F8DD5826CD81B7B4F19D27995707713ThumbnailView_h */
