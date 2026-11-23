//
#ifndef TFNTwitterCompositionValidateOperation_h
#define TFNTwitterCompositionValidateOperation_h
@import Foundation;

#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUploadContext.h"
#include "TFSOperationDependencyResult-Protocol.h"

@class NSError, NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionValidateOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult> {
    /* instance variables */
    NSError *_error;
}

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
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

#endif /* TFNTwitterCompositionValidateOperation_h */
