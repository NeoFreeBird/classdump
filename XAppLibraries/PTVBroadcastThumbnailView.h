//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastThumbnailView_h
#define PTVBroadcastThumbnailView_h
@import Foundation;

#include "PTVBlurredImageView.h"
#include "PTVBroadcastThumbnailViewDelegate-Protocol.h"
#include "PTVBroadcastThumbnailViewLayoutSpec.h"
#include "PTVLoadingImageViewDelegate-Protocol.h"

@class NSArray, NSString, NSURL, UIStackView, UIView;

@interface PTVBroadcastThumbnailView : UIView <PTVLoadingImageViewDelegate>

@property (retain, nonatomic) PTVBlurredImageView *broadcastThumbnail;
@property (retain, nonatomic) UIStackView *guestsProfileImagesStackView;
@property (retain, nonatomic) PTVBroadcastThumbnailViewLayoutSpec *layout;
@property (weak, nonatomic) id <PTVBroadcastThumbnailViewDelegate> delegate;
@property (retain, nonatomic) NSURL *forcedGuestProfileImageURL;
@property (retain, nonatomic) NSArray *guestSessions;
@property (retain, nonatomic) NSURL *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)setImageURL:(id)url cacheKey:(id)key;
- (void)setImage:(id)image animated:(_Bool)animated;
- (double)broadcastThumbnailCornerRadius;
- (void)setBroadcastThumbnailCornerRadius:(double)radius;
- (void)setUseBlur:(_Bool)blur;
- (void)setUseClearBackgroundColorWhenLoaded:(_Bool)loaded;
- (_Bool)canLoadFromNetwork;
- (unsigned long long)numberOfGuestImages;
- (void)layoutSubviews;
- (void)guestSessionsState;

@end

#endif /* PTVBroadcastThumbnailView_h */
