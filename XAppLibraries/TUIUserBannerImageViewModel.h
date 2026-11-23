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
