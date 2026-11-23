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
