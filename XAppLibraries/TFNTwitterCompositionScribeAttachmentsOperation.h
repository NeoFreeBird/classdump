//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionScribeAttachmentsOperation_h
#define TFNTwitterCompositionScribeAttachmentsOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionScribeAttachmentsOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (retain) id <TAPTwitterCompositionTweetPerspective> status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition context:(id)context;
- (id)initWithComposition:(id)composition scribe:(id)scribe;
- (void)run;
- (void)_tfn_main_run;
- (void)_tfn_main_scribeForAttachment:(id)attachment;
- (void)_tfn_main_scribeCameraCapturedAttachmentTimeIntervalToCompositionWithTweetForAttachment:(id)attachment;
- (void)_tfn_main_scribeMediaUsageForAttachment:(id)attachment;
- (void)_tfn_main_scribeRetweetWithCameraUsageForAttachment:(id)attachment;
- (void)_tfn_main_scribeMediaCreationEventsForAttachments:(id)attachments;
- (void)_tfn_main_scribeAttachmentAction:(id)action component:(id)component parameters:(id)parameters;
- (void)_tfn_main_scribeAttachmentAction:(id)action component:(id)component element:(id)element parameters:(id)parameters;
- (void)_tfn_main_scribeCompositionAction:(id)action parameters:(id)parameters;

@end

#endif /* TFNTwitterCompositionScribeAttachmentsOperation_h */
