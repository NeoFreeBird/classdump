//
#ifndef _TtC10ChatKotlin16KMPSourceWrapper_h
#define _TtC10ChatKotlin16KMPSourceWrapper_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainKmpSourceWrapper-Protocol.h"

@class _$sSS, _$sSo13NSFileManagerC, _TtCs12_SwiftObject;

@interface ChatKotlin.KMPSourceWrapper : Swift._SwiftObject <Subsystem_ios_iosArm64_mainKmpSourceWrapper> { // (Swift)
    /* instance variables */
    __C.NSFileManager fileManager;
    Swift.String filePath;
}

/* instance methods */
- (void)openWithCompletionHandler:(id /* block */)handler;
- (void)cleanupWithCompletionHandler:(id /* block */)handler;
- (void)sizeWithCompletionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin16KMPSourceWrapper_h */
