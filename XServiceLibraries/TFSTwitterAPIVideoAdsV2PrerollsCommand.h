//
#ifndef TFSTwitterAPIVideoAdsV2PrerollsCommand_h
#define TFSTwitterAPIVideoAdsV2PrerollsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSArray, NSNumber, NSString;

@interface TFSTwitterAPIVideoAdsV2PrerollsCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSArray *tweets;
@property (retain, nonatomic) NSString *prerollID;
@property (retain, nonatomic) NSNumber *dynamicPrerollType;
@property (nonatomic) _Bool includeLongVideos;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id tweets:(id)tweets prerollID:(id)id dynamicPrerollType:(id)type includeLongVideos:(_Bool)videos source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIVideoAdsV2PrerollsCommand_h */
