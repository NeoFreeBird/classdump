//
#ifndef TFNTwitterCompositionUpdateHomeTimelineStreamForStatusOperation_h
#define TFNTwitterCompositionUpdateHomeTimelineStreamForStatusOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"

@class NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionUpdateHomeTimelineStreamForStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>

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

@end

#endif /* TFNTwitterCompositionUpdateHomeTimelineStreamForStatusOperation_h */
