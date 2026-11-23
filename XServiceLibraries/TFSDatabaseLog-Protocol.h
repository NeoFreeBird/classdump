//
#ifndef TFSDatabaseLog_Protocol_h
#define TFSDatabaseLog_Protocol_h
@import Foundation;

@protocol TFSDatabaseLog

@required

/* required instance methods */
- (void)logError:(id)error;
- (void)logDebug:(id)debug;
- (_Bool)debugEnabled;

@optional

@end

#endif /* TFSDatabaseLog_Protocol_h */
