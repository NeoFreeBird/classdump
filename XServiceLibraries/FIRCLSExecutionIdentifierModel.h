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
