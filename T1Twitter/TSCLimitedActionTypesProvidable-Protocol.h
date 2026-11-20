//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
