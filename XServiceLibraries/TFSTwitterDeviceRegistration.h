//
#ifndef TFSTwitterDeviceRegistration_h
#define TFSTwitterDeviceRegistration_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterDeviceRegistration : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) long long deviceID;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) unsigned long long state;

/* class methods */
+ (id)deviceRegisterWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithUserID:(long long)id deviceID:(long long)id phoneNumber:(id)number state:(unsigned long long)state;
- (id)init;

@end

#endif /* TFSTwitterDeviceRegistration_h */
