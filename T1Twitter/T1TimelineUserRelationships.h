//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TimelineUserRelationships_h
#define T1TimelineUserRelationships_h
@import Foundation;

@class NSObject;

@interface T1TimelineUserRelationships : NSObject

/* class methods */
+ (void)_addModelObjectUsers:(id)users account:(id)account toSet:(id)set;
+ (void)_performRequest:(id)request controller:(id)controller usersWithoutRelationship:(id)relationship completion:(id /* block */)completion;
+ (void)loadRelationshipsForUsersInDataViewController:(id)controller objects:(id)objects account:(id)account;
+ (void)loadRelationshipsForUsersInDataViewController:(id)controller objects:(id)objects account:(id)account completion:(id /* block */)completion;

@end

#endif /* T1TimelineUserRelationships_h */
