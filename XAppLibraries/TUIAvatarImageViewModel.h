//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIAvatarImageViewModel_h
#define TUIAvatarImageViewModel_h
@import Foundation;

@class NSObject, NSString, TFSTwitterEntityMedia;

@interface TUIAvatarImageViewModel : NSObject

@property (readonly, nonatomic) TFSTwitterEntityMedia *mediaEntity;
@property (readonly, copy, nonatomic) NSString *accessibilityValue;
@property (readonly, copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) long long identityType;

/* instance methods */
- (id)initWithMediaEntity:(id)entity identityType:(long long)type accessibilityValue:(id)value accessibilityIdentifier:(id)identifier;
- (id)initWithMediaEntity:(id)entity;
- (id)initWithMediaEntity:(id)entity accessibilityValue:(id)value;
- (id)initWithMediaEntity:(id)entity accessibilityValue:(id)value accessibilityIdentifier:(id)identifier;
- (id)initWithUserReference:(id)reference mediaEntity:(id)entity;
- (id)initWithUserReference:(id)reference identityType:(long long)type mediaEntity:(id)entity;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToViewModel:(id)model;
- (unsigned long long)hash;

@end

#endif /* TUIAvatarImageViewModel_h */
