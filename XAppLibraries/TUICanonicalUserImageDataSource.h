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
