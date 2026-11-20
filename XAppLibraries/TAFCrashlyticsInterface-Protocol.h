//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFCrashlyticsInterface_Protocol_h
#define TAFCrashlyticsInterface_Protocol_h
@import Foundation;

@protocol TAFCrashlyticsInterface

@required

/* required instance methods */
- (void)recordError:(id)error customKeysAndValues:(id)values;

@optional

@end

#endif /* TAFCrashlyticsInterface_Protocol_h */
