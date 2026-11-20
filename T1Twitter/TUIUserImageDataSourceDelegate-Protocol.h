//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
