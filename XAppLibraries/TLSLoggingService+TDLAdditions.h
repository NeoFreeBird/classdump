//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
