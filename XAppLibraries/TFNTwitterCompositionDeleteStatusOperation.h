//
#ifndef TFNTwitterCompositionDeleteStatusOperation_h
#define TFNTwitterCompositionDeleteStatusOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"

@class NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionDeleteStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>

@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (retain) id <TAPTwitterCompositionTweetPerspective> status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_tfn_main_run;

@end

#endif /* TFNTwitterCompositionDeleteStatusOperation_h */
