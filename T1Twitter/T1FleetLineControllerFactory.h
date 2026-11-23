//
#ifndef T1FleetLineControllerFactory_h
#define T1FleetLineControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1FleetLineControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)makeControllerWithAccount:(id)account scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1FleetLineControllerFactory_h */
