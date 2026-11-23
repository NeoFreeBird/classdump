//
#ifndef TLSLoggingService_T1Additions_h
#define TLSLoggingService_T1Additions_h
@import Foundation;

@interface TLSLoggingService (T1Additions)

/* class methods */
+ (void)installUncaughtExceptionHandler;

/* instance methods */
- (void)t1_addConsoleOutputStream;
- (void)t1_addFileOutputStream;
- (void)t1_addConsoleFileOutputStream;
- (void)prepareOutputStreamsWithCrashlyticsLoggingEnabled:(_Bool)enabled;
- (void)setPersistentLoggingEnabled:(_Bool)enabled;
- (_Bool)persistentLoggingEnabled;
- (void)setShouldPersistentLoggingUseRelativeTimestamps:(_Bool)timestamps;
- (_Bool)shouldPersistentLoggingUseRelativeTimestamps;

@end

#endif /* TLSLoggingService_T1Additions_h */
