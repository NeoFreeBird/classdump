//
#ifndef TSCLimitedActionTypesProvidable_Protocol_h
#define TSCLimitedActionTypesProvidable_Protocol_h
@import Foundation;

@protocol TSCLimitedActionTypesProvidable

@required

/* required instance methods */
- (unsigned long long)limitedActionTypesFor:(id)_for scribeContext:(id)context;

@optional

@end

#endif /* TSCLimitedActionTypesProvidable_Protocol_h */
