//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ProfileActionButtonsCatalog_h
#define ProfileActionButtonsCatalog_h
@import Foundation;

@class NSObject;

@interface ProfileActionButtonsCatalog : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *visitStateProvider;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *sourceStatus;
    NSNumber"16@0:8 *followScribeContext;
    NSNumber"16@0:8 *deviceFollowScribeContext;
    NSNumber"16@0:8 *navFollowScribeContext;
    NSNumber"16@0:8 *sourceScribeContext;
    NSNumber"16@0:8 *actionHost;
}

/* instance methods */
- (id)initWithVisitStateProvider:(id)provider account:(id)account profileViewModel:(id)model sourceStatus:(id)status followScribeContext:(id)context deviceFollowScribeContext:(id)context navFollowScribeContext:(id)context sourceScribeContext:(id)context actionHost:(id)host;
- (id)makeControllerFor:(long long)_for;
- (_Bool)isButtonOfType:(long long)type placedInRow:(long long)row;
- (id)init;

@end

#endif /* ProfileActionButtonsCatalog_h */
