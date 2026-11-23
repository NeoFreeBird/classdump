//
#ifndef TFSManagedDatabaseUtilities_h
#define TFSManagedDatabaseUtilities_h
@import Foundation;

@class NSObject;

@interface TFSManagedDatabaseUtilities : NSObject // (Swift)

/* class methods */
+ (_Bool)removeAllManagedDatabasesWithError:(id *)error;

/* instance methods */
- (id)init;

@end

#endif /* TFSManagedDatabaseUtilities_h */
