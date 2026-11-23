//
#ifndef TFSTwitterUserExtendedProfileBirthday_h
#define TFSTwitterUserExtendedProfileBirthday_h
@import Foundation;

@class NSDate, NSNumber, NSObject, NSString;

@interface TFSTwitterUserExtendedProfileBirthday : NSObject // (Swift)

@property (nonatomic, readonly) long long yearVisibility;
@property (nonatomic, readonly) long long dayVisibility;
@property (nonatomic, readonly) NSNumber *year;
@property (nonatomic, readonly) NSNumber *month;
@property (nonatomic, readonly) NSNumber *day;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) _Bool isUnder18;
@property (nonatomic, readonly) _Bool isFullyPopulated;
@property (nonatomic, readonly) _Bool isOnlyVisibleToSelf;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithDayVisibility:(long long)visibility yearVisibility:(long long)visibility;
- (_Bool)matchesMonthAndDay:(id)day;
- (id)birthdayWithDate:(id)date;
- (id)birthdayWithDateComponents:(id)components;
- (id)birthdayWithDayVisibility:(long long)visibility;
- (id)birthdayWithYearVisibility:(long long)visibility;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUserExtendedProfileBirthday_h */
