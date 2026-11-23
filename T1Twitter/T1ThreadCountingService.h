//
#ifndef T1ThreadCountingService_h
#define T1ThreadCountingService_h
@import Foundation;

@class NSObject;

@interface T1ThreadCountingService : NSObject

/* class methods */
+ (void)enableForActiveAccount:(id)account;
+ (void)disable;

@end

#endif /* T1ThreadCountingService_h */
