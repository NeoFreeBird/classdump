//
#ifndef T1TalonUtilities_h
#define T1TalonUtilities_h
@import Foundation;

@class NSObject;

@interface T1TalonUtilities : NSObject

/* class methods */
+ (_Bool)isEligibleToOpenExpandedURLWithAccountID:(id)id interval:(double)interval URL:(id)url expandedURL:(id)url;
+ (void)logTalonRequestWithAccountID:(id)id;

@end

#endif /* T1TalonUtilities_h */
