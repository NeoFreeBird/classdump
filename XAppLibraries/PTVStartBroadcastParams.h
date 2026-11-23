//
#ifndef PTVStartBroadcastParams_h
#define PTVStartBroadcastParams_h
@import Foundation;

@class CLLocation, NSArray, NSObject, NSString;

@interface PTVStartBroadcastParams : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool isSharingPreciseLocation;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) _Bool heartsEnabled;
@property (nonatomic) _Bool privateChat;
@property (nonatomic) unsigned long long chatOption;
@property (copy, nonatomic) NSArray *twitterInviteeUserIDs;

/* instance methods */
- (id)initWithTitle:(id)title isSharingPreciseLocation:(_Bool)location location:(id)location heartsEnabled:(_Bool)enabled chatOption:(unsigned long long)option twitterInviteeUserIDs:(id)ids;
- (id)initWithTitle:(id)title isSharingPreciseLocation:(_Bool)location;
- (id)initWithTitle:(id)title location:(id)location twitterInviteeUserIDs:(id)ids;

@end

#endif /* PTVStartBroadcastParams_h */
