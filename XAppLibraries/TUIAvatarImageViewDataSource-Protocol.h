//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIAvatarImageViewDataSource_Protocol_h
#define TUIAvatarImageViewDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TUIAvatarImageViewModel.h"

@protocol TUIAvatarImageViewDataSource <NSObject>

@required

@property (nonatomic, readonly) TUIAvatarImageViewModel *avatarImageViewModel;
@property (nonatomic) long long identityType;

@optional

@end

#endif /* TUIAvatarImageViewDataSource_Protocol_h */
