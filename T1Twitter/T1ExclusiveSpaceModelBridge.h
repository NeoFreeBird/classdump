//
#ifndef T1ExclusiveSpaceModelBridge_h
#define T1ExclusiveSpaceModelBridge_h
@import Foundation;

#include "TASSpaceModel-Protocol.h"
#include "TSFExclusiveSpaceModel-Protocol.h"

@class NSObject, NSString, TFSTwitterUserReference, TIPImagePipeline, TUIAvatarImageViewModel;

@interface T1ExclusiveSpaceModelBridge : NSObject <TSFExclusiveSpaceModel>

@property (readonly, nonatomic) id <TASSpaceModel> spaceModel;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) TFSTwitterUserReference *creatorUserReference;
@property (readonly, nonatomic) TUIAvatarImageViewModel *creatorAvatarViewModel;
@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) long long numberOfListeners;

/* instance methods */
- (id)initWithSpaceModel:(id)model;
- (id)topics;

@end

#endif /* T1ExclusiveSpaceModelBridge_h */
