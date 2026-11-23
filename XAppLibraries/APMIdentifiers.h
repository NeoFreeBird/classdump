//
#ifndef APMIdentifiers_h
#define APMIdentifiers_h
@import Foundation;

@class NSObject, NSString;

@interface APMIdentifiers : NSObject

@property (readonly, copy, nonatomic) NSString *googleAppID;
@property (readonly, copy, nonatomic) NSString *analyticsAppID;
@property (readonly, copy, nonatomic) NSString *appInstanceID;
@property (readonly, copy, nonatomic) NSString *adEventID;
@property (readonly, copy, nonatomic) NSString *libraryVersion;
@property (readonly, copy, nonatomic) NSString *origin;

/* class methods */
+ (id)sharedInstance;

/* instance methods */

@end

#endif /* APMIdentifiers_h */
