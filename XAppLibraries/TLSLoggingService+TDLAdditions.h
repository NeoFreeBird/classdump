//
#ifndef TLSLoggingService_TDLAdditions_h
#define TLSLoggingService_TDLAdditions_h
@import Foundation;

@interface TLSLoggingService (TDLAdditions)

/* instance methods */
- (id)_streamOfClassKind:(Class)kind;
- (_Bool)hasOutputStream:(Class)stream;
- (id)rollingFileOutputStream;
- (id)alertScribeOutputStream;

@end

#endif /* TLSLoggingService_TDLAdditions_h */
