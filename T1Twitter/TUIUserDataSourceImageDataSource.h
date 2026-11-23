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
