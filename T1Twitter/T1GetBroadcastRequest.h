//
#ifndef T1GetBroadcastRequest_h
#define T1GetBroadcastRequest_h
@import Foundation;

@class NSObject, NSString, TFNTwitterAccount;

@interface T1GetBroadcastRequest : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *broadcastID;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) double refreshInterval;

/* instance methods */
- (id)init;
- (id)initWithBroadcastID:(id)id interval:(double)interval account:(id)account identifier:(id)identifier;

@end

#endif /* T1GetBroadcastRequest_h */
