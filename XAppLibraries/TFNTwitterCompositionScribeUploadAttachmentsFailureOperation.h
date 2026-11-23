//
#ifndef TFNTwitterCompositionScribeUploadAttachmentsFailureOperation_h
#define TFNTwitterCompositionScribeUploadAttachmentsFailureOperation_h
@import Foundation;

#include "TFNTwitterCompositionUploadContext.h"

@class NSError, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionScribeUploadAttachmentsFailureOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (retain) NSError *error;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_tfn_main_run;
- (id)_tfn_main_scribeParameters;

@end

#endif /* TFNTwitterCompositionScribeUploadAttachmentsFailureOperation_h */
