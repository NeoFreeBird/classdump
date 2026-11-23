//
#ifndef TUCCompactCardWebsiteDetailsComponentModel_h
#define TUCCompactCardWebsiteDetailsComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"
#include "TUIAvatarImageViewDataSource-Protocol.h"
#include "TUIAvatarImageViewModel.h"

@class NSArray, NSObject, NSString, TFSTwitterEntityMedia;

@interface TUCCompactCardWebsiteDetailsComponentModel : NSObject <TUIAvatarImageViewDataSource, TUCComponentModel>

@property (nonatomic) long long identityType;
@property (nonatomic, readonly) TUIAvatarImageViewModel *avatarImageViewModel;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *userFullName;
@property (readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (readonly, nonatomic) _Bool hasUserBadge;
@property (readonly, nonatomic) id /* block */ userBadgeImageBlock;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)initWithDestination:(id)destination title:(id)title subtitle:(id)subtitle userFullName:(id)name profileImageMediaEntity:(id)entity hasUserBadge:(_Bool)badge userBadgeImageBlock:(id /* block */)block;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)withDestinationTransform:(id /* block */)transform;
- (id)withPromotedContent:(id)content;

@end

#endif /* TUCCompactCardWebsiteDetailsComponentModel_h */
