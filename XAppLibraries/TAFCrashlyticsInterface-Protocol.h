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
