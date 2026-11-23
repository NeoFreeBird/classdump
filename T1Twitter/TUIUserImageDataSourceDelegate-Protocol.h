//
#ifndef TUIUserImageDataSourceDelegate_Protocol_h
#define TUIUserImageDataSourceDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUIUserImageDataSourceDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)userImageDataSourceDidUpdateAvatarImageViewModel:(id)model;
- (void)userImageDataSourceDidUpdateBannerImageViewModel:(id)model;

@end

#endif /* TUIUserImageDataSourceDelegate_Protocol_h */
