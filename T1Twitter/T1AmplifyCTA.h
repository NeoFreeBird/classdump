//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AmplifyCTA_h
#define T1AmplifyCTA_h
@import Foundation;

#include "T1AmplifyCTADelegate-Protocol.h"

@class NSString, TVPVideoContextCTAInfo, UIButton, UIView;

@interface T1AmplifyCTA : UIView

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) TVPVideoContextCTAInfo *currentCTAInfo;
@property (readonly, nonatomic) double preferredHeight;
@property (weak, nonatomic) id <T1AmplifyCTADelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateWithPlaylistItem:(id)item;
- (void)updateWithCTAInfo:(id)ctainfo isAd:(_Bool)ad adVideoContext:(id)context;
- (void)reset;
- (void)_ctaButtonDidTap;
- (void)_t1_setUpLayout;
- (void)_t1_updateCTAButtonWithCTAInfo:(id)ctainfo isAd:(_Bool)ad adVideoContext:(id)context;
- (id)_t1_fullscreenOpenURLCTATextForAdVideo:(id)video;

@end

#endif /* T1AmplifyCTA_h */
