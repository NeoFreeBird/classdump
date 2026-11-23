//
#ifndef PTVGuestRoom_h
#define PTVGuestRoom_h
@import Foundation;

@class NSArray, NSDate, NSObject, NSString;

@interface PTVGuestRoom : NSObject

@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly, copy, nonatomic) NSString *mediaKey;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *users;
@property (readonly, nonatomic) unsigned long long totalUsersCount;
@property (readonly, nonatomic) _Bool availableForReplay;
@property (readonly, nonatomic) _Bool liveOrNotStarted;

/* instance methods */
- (id)initWithRemoteID:(id)id mediaKey:(id)key state:(unsigned long long)state start:(id)start title:(id)title users:(id)users totalUsersCount:(unsigned long long)count availableForReplay:(_Bool)replay;
- (_Bool)isLiveOrNotStarted;
- (_Bool)isAvailableForReplay;

@end

#endif /* PTVGuestRoom_h */
