//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionScribeUploadOperation_h
#define TFNTwitterCompositionScribeUploadOperation_h
@import Foundation;

#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUploadContext.h"

@class TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionScribeUploadOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition context:(id)context;
- (void)run;
- (void)_tfn_main_run;

@end

#endif /* TFNTwitterCompositionScribeUploadOperation_h */
