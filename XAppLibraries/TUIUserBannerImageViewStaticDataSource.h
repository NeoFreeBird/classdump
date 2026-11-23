//
#ifndef TUIUserBannerImageViewStaticDataSource_h
#define TUIUserBannerImageViewStaticDataSource_h
@import Foundation;

#include "TUIUserBannerImageViewDataSource-Protocol.h"
#include "TUIUserBannerImageViewModel.h"

@class NSObject, NSString;

@interface TUIUserBannerImageViewStaticDataSource : NSObject <TUIUserBannerImageViewDataSource>

@property (retain, nonatomic) TUIUserBannerImageViewModel *bannerImageViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithBannerImageViewModel:(id)model;

@end

#endif /* TUIUserBannerImageViewStaticDataSource_h */
