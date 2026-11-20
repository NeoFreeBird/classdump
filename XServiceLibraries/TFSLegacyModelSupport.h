//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSLegacyModelSupport_h
#define TFSLegacyModelSupport_h
@import Foundation;

@class NSObject;

@interface TFSLegacyModelSupport : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 modelContext;
}

/* instance methods */
- (id)initWithModelContext:(id)context;
- (void)userForUserID:(long long)id completion:(id /* block */)completion;
- (void)usersForUserIDs:(id)ids enforceQoS:(_Bool)s completion:(id /* block */)completion;
- (void)statusesForStatusIDs:(id)ids enforceQoS:(_Bool)s completion:(id /* block */)completion;
- (id)init;

@end

#endif /* TFSLegacyModelSupport_h */
