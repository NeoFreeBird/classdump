//
#ifndef PTVChatPresence_h
#define PTVChatPresence_h
@import Foundation;

@class NSObject, NSString;

@interface PTVChatPresence : NSObject

@property (readonly, nonatomic) NSString *room;
@property (nonatomic) unsigned long long occupancy;
@property (nonatomic) unsigned long long totalParticipants;
@property (nonatomic) unsigned long long type;

/* class methods */
+ (id)presenceFromDict:(id)dict;

/* instance methods */
- (id)initWithRoom:(id)room occupancy:(unsigned long long)occupancy totalParticipants:(unsigned long long)participants type:(unsigned long long)type;

@end

#endif /* PTVChatPresence_h */
