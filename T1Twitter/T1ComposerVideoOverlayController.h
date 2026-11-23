//
#ifndef T1ComposerVideoOverlayController_h
#define T1ComposerVideoOverlayController_h
@import Foundation;

#include "T1InlineVideoView.h"

@class NSObject, TFNTwitterStatus;

@interface T1ComposerVideoOverlayController : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *imageFetchHelper;
    NSNumber"16@0:8 *gestureResponder;
    NSNumber"16@0:8 *autoplayManager;
    NSNumber"16@0:8 *isAutoplaying;
    NSNumber"16@0:8 *attributionAppliedForStatusID;
    NSNumber"16@0:8 *clipURLString;
}

@property (nonatomic, retain) T1InlineVideoView *videoView;
@property (nonatomic, retain) TFNTwitterStatus *status;
@property (nonatomic, copy) id /* block */ videoTapHandler;
@property (nonatomic, readonly) _Bool isShowingClip;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)showVideoForStatus:(id)status inHostView:(id)view;
- (void)updateClipRangeFromURLString:(id)urlstring;
- (void)updateAttributionWithIsEmbedPresentation:(_Bool)presentation;
- (void)startAutoplayIfNeeded;
- (void)suspendAutoplay;
- (void)removeVideo;
- (id)photoAttributionPillFor:(id)_for mediaEntity:(id)entity reusing:(id)reusing;
- (id)init;

@end

#endif /* T1ComposerVideoOverlayController_h */
