//
#ifndef PTVChatRoster_h
#define PTVChatRoster_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVChatRoster : NSObject

@property (copy, nonatomic) NSString *room;
@property (retain, nonatomic) NSArray *occupants;
@property (nonatomic) unsigned long long occupancy;
@property (nonatomic) unsigned long long totalParticipants;

/* class methods */
+ (id)rosterFromDict:(id)dict;

/* instance methods */
- (id)initWithRoom:(id)room occupants:(id)occupants occupancy:(unsigned long long)occupancy totalParticipants:(unsigned long long)participants;

@end

#endif /* PTVChatRoster_h */
