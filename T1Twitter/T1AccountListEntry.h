//
#ifndef T1AccountListEntry_h
#define T1AccountListEntry_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "T1AccountListEntryBadgingDataSource-Protocol.h"
#include "TFNPickableValue-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFNTwitterTeams, UIImage;

@interface T1AccountListEntry : NSObject <TFNPickableValue, NSCopying>

@property (weak, nonatomic) id <T1AccountListEntryBadgingDataSource> badgingDataSource;
@property (nonatomic) _Bool isActive;
@property (readonly, nonatomic) unsigned long long totalBadgeCount;
@property (readonly, nonatomic) unsigned long long unreadDMCount;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNTwitterTeams *teams;
@property (readonly, copy, nonatomic) NSString *valueName;
@property (readonly, nonatomic) UIImage *valueIcon;
@property (readonly, copy, nonatomic) NSString *valueDetail;
@property (readonly, copy, nonatomic) NSString *valueShortName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (_Bool)isOwner;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* T1AccountListEntry_h */
