//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14TFSTwitterCore15ManagedDatabase3Log_h
#define _TtCC14TFSTwitterCore15ManagedDatabase3Log_h
@import Foundation;

#include "TFSDatabaseLog-Protocol.h"

@class _$sSa -> _$ss5ErrorMp, _$sySScSg, _TtCs12_SwiftObject;

@interface TFSTwitterCore.ManagedDatabase.Log : Swift._SwiftObject <TFSDatabaseLog> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? debugLoggingBlock;
    Swift.Array -> protocol descriptor for Swift.Error errors;
}

/* instance methods */
- (void)logError:(id)error;
- (void)logDebug:(id)debug;
- (_Bool)debugEnabled;

@end

#endif /* _TtCC14TFSTwitterCore15ManagedDatabase3Log_h */
