//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestRoomLiveVideoView_h
#define PTVGuestRoomLiveVideoView_h
@import Foundation;

#include "PTVBlurredImageView.h"
#include "PTVGuestView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, NSTimer, TFNFloatingView, UIScrollView, UIView;

@interface PTVGuestRoomLiveVideoView : UIView <UIScrollViewDelegate> {
    /* instance variables */
    PTVGuestView *_guestView;
    PTVGuestView *_thumbnailGuestView;
}

@property (retain, nonatomic) NSTimer *blurTimer;
@property (retain, nonatomic) PTVBlurredImageView *blurredImageView;
@property (retain, nonatomic) TFNFloatingView *floatingView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) double videoAspect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)view;
- (id)guestView;
- (void)setGuestView:(id)view;
- (id)thumbnailGuestView;
- (void)setThumbnailGuestView:(id)view;
- (void)_updateBlurImage;
- (void)resetBlurImage;
- (void)resetZoomAnimated:(_Bool)animated;

@end

#endif /* PTVGuestRoomLiveVideoView_h */
