//
#ifndef _TtC14TFSTwitterCore59TFSTwitterStatusAuthorAndActorSocialContextUserGroupBuilder_h
#define _TtC14TFSTwitterCore59TFSTwitterStatusAuthorAndActorSocialContextUserGroupBuilder_h
@import Foundation;

@class NSObject, TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContextType;

@interface TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContextUserGroupBuilder : NSObject { // (Swift)
    /* instance variables */
    TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContextType type;
}

/* instance methods */
- (id)initWithType:(long long)type;
- (id)buildWithDictionary:(id)dictionary;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore59TFSTwitterStatusAuthorAndActorSocialContextUserGroupBuilder_h */
