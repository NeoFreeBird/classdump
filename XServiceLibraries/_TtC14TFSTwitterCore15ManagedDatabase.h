//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore15ManagedDatabase_h
#define _TtC14TFSTwitterCore15ManagedDatabase_h
@import Foundation;

@class DispatchQueue, TFSTwitterCore.ManagedDatabase.Configuration, _$sSS, _$sSo11TFSDatabaseC, _TtCs12_SwiftObject;

@interface TFSTwitterCore.ManagedDatabase : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSTwitterCore.ManagedDatabase.Configuration configuration;
    Swift.String databasePath;
    __C.TFSDatabase database;
    DispatchQueue writeQueue;
}

@end

#endif /* _TtC14TFSTwitterCore15ManagedDatabase_h */
