//
#ifndef TUIUserImageDataSource_h
#define TUIUserImageDataSource_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TUIAvatarImageViewDataSource-Protocol.h"
#include "TUIAvatarImageViewModel.h"
#include "TUIUserBannerImageViewDataSource-Protocol.h"
#include "TUIUserBannerImageViewModel.h"

@class NSObject, NSString;
@protocol TUIUserImageDataSourceDelegate;

@interface TUIUserImageDataSource : NSObject <TUIAvatarImageViewDataSource, TUIUserBannerImageViewDataSource>

@property (nonatomic) _Bool hasAccessedAvatarImageViewModel;
@property (nonatomic) _Bool hasAccessedBannerImageViewModel;
@property (readonly, nonatomic) id <NSObject> user;
@property (readonly, nonatomic) NSString *notificationName;
@property (weak, nonatomic) id <TUIUserImageDataSourceDelegate> delegate;
@property (readonly, nonatomic) TUIAvatarImageViewModel *avatarImageViewModel;
@property (nonatomic) long long identityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TUIUserBannerImageViewModel *bannerImageViewModel;

/* instance methods */
- (id)initWithUser:(id)user notificationName:(id)name;
- (void)dealloc;
- (void)_tui_userDidUpdate:(id)update;
- (void)_tui_updateAvatarImageViewModelIfNeeded;
- (id)makeAvatarImageViewModel;
- (void)_tui_updateBannerImageViewModelIfNeeded;
- (id)makeBannerImageViewModel;

@end

#endif /* TUIUserImageDataSource_h */
