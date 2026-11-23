//
#ifndef T1UserViewModelImageDataSource_h
#define T1UserViewModelImageDataSource_h
@import Foundation;

#include "T1UserViewModel-Protocol.h"

@class TUIUserImageDataSource;

@interface T1UserViewModelImageDataSource : TUIUserImageDataSource

@property (readonly, nonatomic) id <T1UserViewModel> userViewModel;

/* instance methods */
- (id)initWithUserViewModel:(id)model;
- (long long)identityType;
- (id)makeAvatarImageViewModel;
- (id)makeBannerImageViewModel;

@end

#endif /* T1UserViewModelImageDataSource_h */
