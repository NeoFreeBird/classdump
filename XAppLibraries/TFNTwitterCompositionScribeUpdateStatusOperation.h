//
#ifndef TFNTwitterCompositionScribeUpdateStatusOperation_h
#define TFNTwitterCompositionScribeUpdateStatusOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"

@class NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionScribeUpdateStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (retain) id <TAPTwitterCompositionTweetPerspective> status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition context:(id)context;
- (void)run;
- (void)_tfn_main_run;
- (void)_tfn_main_scribeSelfReplySource;
- (id)_tfn_main_scribeComponent;
- (void)_tfn_main_scribeMentionsCount;
- (void)_tfn_main_scribeRemovedMentionsCount;
- (void)_tfn_main_scribeHashtagsCount;
- (void)_tfn_main_scribeQuotedStatus;
- (void)_tfn_main_scribeUndoableTweet;
- (void)_tfn_main_scribeTextInputMethod;
- (void)_tfn_main_scribeAction:(id)action element:(id)element parameters:(id)parameters;
- (void)_tfn_main_scribeAction:(id)action component:(id)component element:(id)element parameters:(id)parameters;

@end

#endif /* TFNTwitterCompositionScribeUpdateStatusOperation_h */
