//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XUtilities14XKeychainStore_h
#define _TtC10XUtilities14XKeychainStore_h
@import Foundation;

@class _$s2os6LoggerVMn, _$sSS, _$sSo6NSLockC, _$sySScSg, _TtCs12_SwiftObject;

@interface XUtilities.XKeychainStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accessGroup;
    Swift.String keyPrefix;
    ((Swift.String) -> ())? readErrorLogger;
    ((Swift.String) -> ())? writeErrorLogger;
    ((Swift.String) -> ())? deleteErrorLogger;
    __C.NSLock lock;
    nominal type descriptor for os.Logger logger;
}

@end

#endif /* _TtC10XUtilities14XKeychainStore_h */
