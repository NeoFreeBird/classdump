//
#ifndef T1VideoEmbedComposerPreviewController_h
#define T1VideoEmbedComposerPreviewController_h
@import Foundation;

#include "T1VideoEmbedComposerPreviewControllerDelegate-Protocol.h"
#include "T1VideoEmbedPreviewView.h"
#include "_TtP15TwitterComposer43VideoEmbedComposerPreviewControllerProtocol_-Protocol.h"

@class NSObject, NSString, TFNTwitterStatus, TFSTwitterEntityMedia;

@interface T1VideoEmbedComposerPreviewController : NSObject <TwitterComposer.VideoEmbedComposerPreviewControllerProtocol> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *allowedClipRange;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *embedsBroadcastLinks;
    NSNumber"16@0:8 *embedsPhotoLinks;
    NSNumber"16@0:8 *detectionTimer;
    NSNumber"16@0:8 *lastDetectedURLs;
    NSNumber"16@0:8 *pendingFetch;
    NSNumber"16@0:8 *hiddenURL;
    NSNumber"16@0:8 *videoAspectRatio;
    NSNumber"16@0:8 *unresolvableURLs;
}

@property (nonatomic, weak) id <T1VideoEmbedComposerPreviewControllerDelegate> delegate;
@property (nonatomic) _Bool isShowingPreview;
@property (nonatomic, readonly) _Bool isShowingPhotoPreview;
@property (nonatomic, readonly) _Bool isShowingClip;
@property (nonatomic, readonly) NSString *postedURL;
@property (nonatomic, readonly) TFSTwitterEntityMedia *embeddedPhotoMediaEntity;
@property (nonatomic, readonly) _Bool isSinglePhotoPreview;
@property (nonatomic, retain) T1VideoEmbedPreviewView *previewView;
@property (nonatomic, retain) TFNTwitterStatus *previewStatus;
@property (nonatomic) _Bool showsClipEntry;
@property (nonatomic, copy) NSString *currentURL;
@property (nonatomic, retain) TFNTwitterStatus *embedLinkSourceStatus;

/* class methods */
+ (_Bool)isVideoEmbedURL:(id)url;
+ (_Bool)isPhotoEmbedURL:(id)url;
+ (_Bool)isBroadcastEmbedURL:(id)url;
+ (_Bool)isEmbedURL:(id)url forAccount:(id)account;
+ (id)embedPathFragmentsFor:(id)_for;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)changePreviewIfNeededForComposerText:(id)text;
- (void)cancelPendingRequest;
- (void)attachHiddenPreviewForURLString:(id)urlstring;
- (void)attachHiddenPreviewForURLString:(id)urlstring resolvedStatus:(id)status;
- (void)replaceHiddenPreviewURLString:(id)urlstring;
- (_Bool)handlesURL:(id)url;
- (void)removePreviewByUser;
- (void)prepareForSnapshotRestoration;
- (struct CGSize { double x0; double x1; })previewSizeForWidth:(double)width;
- (id)editorTextByHidingURLIn:(id)urlin;
- (id)postTextForEditorText:(id)text;
- (void)handleDetectionTimer:(id)timer;
- (id)init;

@end

#endif /* T1VideoEmbedComposerPreviewController_h */
