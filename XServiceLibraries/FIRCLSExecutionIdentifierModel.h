//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSExecutionIdentifierModel_h
#define FIRCLSExecutionIdentifierModel_h
@import Foundation;

@class NSObject, NSString;

@interface FIRCLSExecutionIdentifierModel : NSObject

@property (readonly, nonatomic) NSString *executionID;

/* instance methods */
- (id)init;

@end

#endif /* FIRCLSExecutionIdentifierModel_h */
