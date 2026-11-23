//
#ifndef _TtC10TFSTracingP33_B0D885ED984675968E621E572ED544B821ZipkinTraceIDMetadata_h
#define _TtC10TFSTracingP33_B0D885ED984675968E621E572ED544B821ZipkinTraceIDMetadata_h
@import Foundation;

#include "_TtC10TFSTracing13TraceMetadata.h"

@class NSString;

@interface TFSTracing.(ZipkinTraceIDMetadata in _B0D885ED984675968E621E572ED544B8) : TFSTracing.TraceMetadata { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 traceID;
}

@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC10TFSTracingP33_B0D885ED984675968E621E572ED544B821ZipkinTraceIDMetadata_h */
