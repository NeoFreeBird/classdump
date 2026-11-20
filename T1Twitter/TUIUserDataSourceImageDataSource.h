//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUserDataSourceImageDataSource_h
#define TUIUserDataSourceImageDataSource_h
@import Foundation;

@class TFNTwitterUserDataSource, TUIUserImageDataSource;

@interface TUIUserDataSourceImageDataSource : TUIUserImageDataSource

@property (readonly, nonatomic) TFNTwitterUserDataSource *userDataSource;

/* instance methods */
- (id)initWithUserDataSource:(id)source;
- (long long)identityType;
- (id)makeAvatarImageViewModel;
- (id)makeBannerImageViewModel;

@end

#endif /* TUIUserDataSourceImageDataSource_h */
