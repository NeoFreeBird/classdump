//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUICanonicalUserImageDataSource_h
#define TUICanonicalUserImageDataSource_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TUIUserImageDataSource.h"

@interface TUICanonicalUserImageDataSource : TUIUserImageDataSource

@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> canonicalUser;

/* instance methods */
- (id)initWithCanonicalUser:(id)user;
- (long long)identityType;
- (id)makeAvatarImageViewModel;
- (id)makeBannerImageViewModel;

@end

#endif /* TUICanonicalUserImageDataSource_h */
