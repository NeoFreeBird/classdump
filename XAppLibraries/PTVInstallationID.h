//
#ifndef PTVInstallationID_h
#define PTVInstallationID_h
@import Foundation;

@class NSObject, NSString;

@interface PTVInstallationID : NSObject

@property (readonly, nonatomic) NSString *stringRepresentation;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;

@end

#endif /* PTVInstallationID_h */
