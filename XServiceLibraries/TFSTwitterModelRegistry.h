//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterModelRegistry_h
#define TFSTwitterModelRegistry_h
@import Foundation;

#include "_TtC8TFSModel20ModelRegistryBuilder.h"

@class NSObject;

@interface TFSTwitterModelRegistry : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 TwitterAccountUserDetailsType;
    B24@0:8@"NSString"16 TwitterCardDataType;
    B24@0:8@"NSString"16 TwitterCommunityPinnedHashtagsType;
    B24@0:8@"NSString"16 TwitterCommunityType;
    B24@0:8@"NSString"16 TwitterConversationType;
    B24@0:8@"NSString"16 TwitterListType;
    B24@0:8@"NSString"16 TwitterSharedUserDataType;
    B24@0:8@"NSString"16 TwitterStatusType;
    B24@0:8@"NSString"16 TwitterTypeaheadEventType;
    B24@0:8@"NSString"16 TwitterTypeaheadHashtagType;
    B24@0:8@"NSString"16 TwitterTypeaheadPersistentHashtagType;
    B24@0:8@"NSString"16 TwitterTypeaheadPersistentUsersType;
    B24@0:8@"NSString"16 TwitterTypeaheadPersistentUserType;
    B24@0:8@"NSString"16 TwitterTypeaheadRecentHashtagsElementsType;
    B24@0:8@"NSString"16 TwitterTypeaheadTopicType;
    B24@0:8@"NSString"16 TwitterUnifiedCardType;
}

@property (nonatomic, readonly) TFSModel.ModelRegistryBuilder *registryBuilder;

/* class methods */
+ (id)sharedRegistry;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterModelRegistry_h */
