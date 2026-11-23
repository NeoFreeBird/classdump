//
#ifndef _TtC21TweetMediaAttachmentsP33_6CAF7C887196233EB6136C8EB3D77FBD18CarouselScrollView_h
#define _TtC21TweetMediaAttachmentsP33_6CAF7C887196233EB6136C8EB3D77FBD18CarouselScrollView_h
@import Foundation;

@class UIScrollView;

@interface TweetMediaAttachments.(CarouselScrollView in _6CAF7C887196233EB6136C8EB3D77FBD) : UIScrollView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 pinsContentOffsetAtRest;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic, readonly) _Bool tfn_isHorizontallyScrollable;
@property (nonatomic, readonly) double tfn_rightContentOffsetX;

/* instance methods */
- (void)safeAreaInsetsDidChange;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC21TweetMediaAttachmentsP33_6CAF7C887196233EB6136C8EB3D77FBD18CarouselScrollView_h */
