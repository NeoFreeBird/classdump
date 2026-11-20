//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
