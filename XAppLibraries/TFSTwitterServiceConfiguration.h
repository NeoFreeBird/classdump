//
#ifndef TFSTwitterServiceConfiguration_h
#define TFSTwitterServiceConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSAPIHeaderProvider-Protocol.h"
#include "TFSTwitterAPICommandContextProvider-Protocol.h"
#include "TFSTwitterCardRuntimeProvider-Protocol.h"
#include "TFSTwitterLivePipelineServiceProvider-Protocol.h"

@class NSArray, NSObject;
@protocol TFSTwitterAPIURLBaseProvider;

@interface TFSTwitterServiceConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id <TFSTwitterAPICommandContextProvider> apiCommandContextProvider;
@property (retain, nonatomic) id <TFSTwitterAPIURLBaseProvider> apiURLBaseProvider;
@property (retain, nonatomic) id <TFSTwitterCardRuntimeProvider> cardRuntimeProvider;
@property (retain, nonatomic) id <TFSAPIHeaderProvider> headerProvider;
@property (retain, nonatomic) id <TFSTwitterLivePipelineServiceProvider> livePipelineServiceProvider;
@property (retain, nonatomic) NSArray *optionalEndpointAllowList;
@property (copy, nonatomic) id /* block */ registerModelsBlock;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterServiceConfiguration_h */
