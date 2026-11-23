//
#ifndef TUIUserBannerImageViewDataSource_Protocol_h
#define TUIUserBannerImageViewDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TUIUserBannerImageViewModel.h"

@protocol TUIUserBannerImageViewDataSource <NSObject>

@required

@property (readonly, nonatomic) TUIUserBannerImageViewModel *bannerImageViewModel;

@optional

@end

#endif /* TUIUserBannerImageViewDataSource_Protocol_h */
