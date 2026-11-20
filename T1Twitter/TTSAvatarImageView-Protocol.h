//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSAvatarImageView_Protocol_h
#define TTSAvatarImageView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TIPImagePipeline;

@protocol TTSAvatarImageView <NSObject>

@required

@property (retain, nonatomic) TIPImagePipeline *imagePipeline;

/* required instance methods */
- (void)updateViewModelWithName:(id)name mediaEntity:(id)entity identityType:(long long)type;
- (void)nullifyViewModel;

@optional

@end

#endif /* TTSAvatarImageView_Protocol_h */
