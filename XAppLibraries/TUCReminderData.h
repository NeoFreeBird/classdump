//
#ifndef TUCReminderData_h
#define TUCReminderData_h
@import Foundation;

@class NSArray, NSDate, NSObject;

@interface TUCReminderData : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 data;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSDate *endsAt;
@property (nonatomic, readonly) NSArray *confettiImageURLs;

/* instance methods */
- (id)initWithJSON:(id)json;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCReminderData_h */
