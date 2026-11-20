//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
