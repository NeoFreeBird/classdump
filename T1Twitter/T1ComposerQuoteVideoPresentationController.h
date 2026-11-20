//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ComposerQuoteVideoPresentationController_h
#define T1ComposerQuoteVideoPresentationController_h
@import Foundation;

@class NSObject, UIView;

@interface T1ComposerQuoteVideoPresentationController : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *toggleButton;
    NSNumber"16@0:8 *toggleIconView;
    NSNumber"16@0:8 *toggleLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_clipButtonController;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *accountUserDefaults;
    NSNumber"16@0:8 *expandIcon;
    NSNumber"16@0:8 *collapseIcon;
    NSNumber"16@0:8 *overlayController;
    NSNumber"16@0:8 *photoOverlayView;
    NSNumber"16@0:8 *suppressedQuotePhotoView;
    NSNumber"16@0:8 *suppressedQuotePhotoAlpha;
    NSNumber"16@0:8 *appliedCornerStyle;
    NSNumber"16@0:8 *pendingToggleStatusID;
    NSNumber"16@0:8 *quotedStatusBeforeEmbedToggle;
    NSNumber"16@0:8 *quotedStatusBeforeEmbedToggleEmbedStatusID;
    NSNumber"16@0:8 *clipToggleMemory;
    NSNumber"16@0:8 *host;
}

@property (nonatomic) _Bool isMorphing;
@property (nonatomic, readonly) UIView *toggleAccessibilityView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } quotedStatusVideoFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } embedVideoFrame;

/* instance methods */
- (id)initWithAccount:(id)account host:(id)host;
- (void)updateFromLayoutPass;
- (void)prepareForPendingToggleWithStatusID:(long long)id;
- (_Bool)consumePendingToggleForStatusID:(long long)id;
- (void)rememberQuotedStatusForEmbedToggle:(id)toggle embedStatusID:(long long)id;
- (id)quotedStatusToRestoreForPreviewStatus:(id)status;
- (void)rememberClipRangeFromEmbedURLString:(id)urlstring embedStatusID:(long long)id;
- (id)embedURLStringByRestoringRememberedClipRangeTo:(id)to embedStatusID:(long long)id;
- (id)beginToggleTransitionWithSnapshotting:(id)snapshotting;
- (void)finishToggleTransitionWithOutgoingSnapshot:(id)snapshot incomingView:(id)view toVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)handleEmbedPreviewRemoved;
- (void)cancelPendingToggle;
- (void)suspendAutoplay;
- (void)resumeAutoplay;
- (void)removeVideo;
- (void)tearDown;
- (void)toggleButtonPressed;
- (id)init;

@end

#endif /* T1ComposerQuoteVideoPresentationController_h */
