//
#ifndef APMPEvaluator_h
#define APMPEvaluator_h
@import Foundation;

@class NSObject;

@interface APMPEvaluator : NSObject

/* class methods */
+ (id)evaluateStatement:(id)statement scope:(id)scope error:(id *)error;
+ (id)executeStatements:(id)statements scope:(id)scope error:(id *)error;

@end

#endif /* APMPEvaluator_h */
