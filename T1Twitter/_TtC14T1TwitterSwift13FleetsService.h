//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift13FleetsService_h
#define _TtC14T1TwitterSwift13FleetsService_h
@import Foundation;

@class NSObject, T1TwitterSwift.FleetsScriber, T1TwitterSwift.UserLoader ?, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.FleetsService : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.FleetsScriber scribe;
    T1TwitterSwift.UserLoader ? $__lazy_storage_$_userLoader;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift13FleetsService_h */
