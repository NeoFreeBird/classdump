//
#ifndef PTVChatBan_h
#define PTVChatBan_h
@import Foundation;

@class NSObject, NSString;

@interface PTVChatBan : NSObject

@property (readonly, nonatomic) NSString *room;
@property (readonly, nonatomic) double banDuration;
@property (readonly, nonatomic) unsigned long long banType;

/* class methods */
+ (id)banFromDict:(id)dict;

/* instance methods */
- (id)initWithRoom:(id)room banDuration:(double)duration banType:(unsigned long long)type;

@end

#endif /* PTVChatBan_h */
