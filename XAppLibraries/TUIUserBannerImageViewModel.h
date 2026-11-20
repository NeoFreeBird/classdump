//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUserBannerImageViewModel_h
#define TUIUserBannerImageViewModel_h
@import Foundation;

@class NSObject, TFSTwitterEntityMedia;

@interface TUIUserBannerImageViewModel : NSObject

@property (readonly, nonatomic) TFSTwitterEntityMedia *mediaEntity;

/* instance methods */
- (id)initWithMediaEntity:(id)entity;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToViewModel:(id)model;
- (unsigned long long)hash;

@end

#endif /* TUIUserBannerImageViewModel_h */
