//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
