//
#ifndef FIRExceptionModel_h
#define FIRExceptionModel_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface FIRExceptionModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) _Bool isFatal;
@property (nonatomic) _Bool onDemand;
@property (copy, nonatomic) NSArray *stackTrace;

/* class methods */
+ (id)exceptionModelWithName:(id)name reason:(id)reason;

/* instance methods */
- (id)initWithName:(id)name reason:(id)reason;

@end

#endif /* FIRExceptionModel_h */
