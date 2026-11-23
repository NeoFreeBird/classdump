//
#ifndef FIRCLSDataCollectionToken_h
#define FIRCLSDataCollectionToken_h
@import Foundation;

@class NSObject;

@interface FIRCLSDataCollectionToken : NSObject

/* class methods */
+ (id)validToken;

/* instance methods */
- (_Bool)isValid;

@end

#endif /* FIRCLSDataCollectionToken_h */
