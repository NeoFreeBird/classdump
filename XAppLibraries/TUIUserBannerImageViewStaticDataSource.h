//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
