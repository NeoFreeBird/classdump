//
#ifndef GDTCOREndpoints_h
#define GDTCOREndpoints_h
@import Foundation;

@class NSObject;

@interface GDTCOREndpoints : NSObject

/* class methods */
+ (id)uploadURLs;
+ (id)uploadURLForTarget:(long long)target;

@end

#endif /* GDTCOREndpoints_h */
