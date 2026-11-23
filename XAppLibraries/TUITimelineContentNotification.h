//
#ifndef TUITimelineContentNotification_h
#define TUITimelineContentNotification_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TUITimelineContentNotification : NSObject

@property (readonly, copy, nonatomic) NSString *localizedText;
@property (readonly, nonatomic) double triggerDelay;
@property (readonly, nonatomic) double displayDuration;
@property (readonly, nonatomic) long long displayLocation;
@property (readonly, nonatomic) NSString *navigateToEntryID;
@property (readonly, nonatomic) long long iconType;
@property (readonly, nonatomic) NSArray *users;

/* instance methods */
- (id)initWithLocalizedText:(id)text triggerDelay:(double)delay displayDuration:(double)duration iconType:(long long)type displayLocation:(long long)location navigateToEntryID:(id)id users:(id)users;
- (id)init;
- (id)description;

@end

#endif /* TUITimelineContentNotification_h */
