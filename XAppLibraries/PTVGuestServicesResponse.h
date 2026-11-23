//
#ifndef PTVGuestServicesResponse_h
#define PTVGuestServicesResponse_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVGuestServicesResponse : NSObject

@property (retain, nonatomic) NSArray *guestCallerSessions;
@property (nonatomic) _Bool isCallInsListDisabled;
@property (retain, nonatomic) NSString *broadcastID;

/* class methods */
+ (unsigned long long)GuestSessionStateFromGuestServicesResponseDictionary:(id)dictionary;
+ (unsigned long long)GuestSessionStateFromGuestServicesResponseState:(unsigned long long)state;

/* instance methods */
- (id)initWithResponseDictionaryForAllSessions:(id)sessions;
- (id)initWithResponseDictionaryForIndividualSession:(id)session;

@end

#endif /* PTVGuestServicesResponse_h */
