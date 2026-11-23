//
#ifndef TFNTwitterAdvancedNotificationFilters_h
#define TFNTwitterAdvancedNotificationFilters_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNTwitterAdvancedNotificationFilters : NSObject <NSCopying>

@property (nonatomic) _Bool filterAccountsNotFollowingEnabled;
@property (nonatomic) _Bool filterAccountsNotFollowingMeEnabled;
@property (nonatomic) _Bool filterNewAccountsEnabled;
@property (nonatomic) _Bool filterAccountsWithADefaultAvatarEnabled;
@property (nonatomic) _Bool filterAccountsWithUnverifiedEmailEnabled;
@property (nonatomic) _Bool filterAccountsWithUnverifiedPhoneEnabled;

/* class methods */
+ (id)advancedNotificationFiltersWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)JSONDictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isFilterAccountsNotFollowingEnabled;
- (_Bool)isFilterAccountsNotFollowingMeEnabled;
- (_Bool)isFilterNewAccountsEnabled;
- (_Bool)isFilterAccountsWithADefaultAvatarEnabled;
- (_Bool)isFilterAccountsWithUnverifiedEmailEnabled;
- (_Bool)isFilterAccountsWithUnverifiedPhoneEnabled;

@end

#endif /* TFNTwitterAdvancedNotificationFilters_h */
