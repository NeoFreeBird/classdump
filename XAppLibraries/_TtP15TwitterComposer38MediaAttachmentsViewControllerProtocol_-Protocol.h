//
#ifndef _TtP15TwitterComposer38MediaAttachmentsViewControllerProtocol__Protocol_h
#define _TtP15TwitterComposer38MediaAttachmentsViewControllerProtocol__Protocol_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TTMAsset.h"

@protocol TwitterComposer.MediaAttachmentsViewControllerProtocol

@required

@property (nonatomic, retain) TFNTwitterAccount *account;
@property (nonatomic, readonly) _Bool isDragging;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) _Bool alwaysUseSameAttachmentsViewHeight;
@property (nonatomic) _Bool showsRemoveButton;
@property (nonatomic, retain) TTMAsset *transitionHiddenAttachment;

/* required instance methods */
- (void)setScribeContext:(id)context;
- (void)setDelegate:(id)delegate;
- (void)setAttachments:(id)attachments;
- (void)addAttachment:(id)attachment;
- (void)replaceAttachment:(id)attachment withAttachment:(id)attachment;
- (void)removeAttachment:(id)attachment;
- (void)removeAllAttachments;
- (double)preferredHeightFittingWidth:(double)width;
- (void)updateToVisibleLowerBound;
- (void)setGrokImagineButtonState:(long long)state forAttachment:(id)attachment;
- (void)connectToGrokImagineSession:(id)session forAttachment:(id)attachment;
- (id)visibleCellViewForAttachment:(id)attachment;
- (id)visibleMediaViewForAttachment:(id)attachment;
- (id)visibleMediaOverlaySnapshotViewForAttachment:(id)attachment;
- (void)scrollAttachmentToVisible:(id)visible animated:(_Bool)animated;
- (id)visibleMediaImageForAttachment:(id)attachment;
- (id)beginMediaPlaybackRelayForAttachment:(id)attachment;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mediaPlaybackRelayTimeForAttachment:(id)attachment;
- (void)endMediaPlaybackRelayForAttachment:(id)attachment;
- (void)resumeMediaPlaybackForAttachment:(id)attachment atTime:(double)time;
- (_Bool)isMediaEditCTAActiveForAttachment:(id)attachment;
- (void)scribeMediaEditCTAAutoOpenForAttachment:(id)attachment;

@optional

@end

#endif /* _TtP15TwitterComposer38MediaAttachmentsViewControllerProtocol__Protocol_h */
