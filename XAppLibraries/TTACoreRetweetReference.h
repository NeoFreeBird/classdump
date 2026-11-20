//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreRetweetReference_h
#define TTACoreRetweetReference_h
@import Foundation;

@class NSObject;

@interface TTACoreRetweetReference : NSObject

@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) long long retweetID;
@property (readonly, nonatomic) long long userID;

/* instance methods */
- (id)initWithStatusID:(long long)id retweetID:(long long)id userID:(long long)id;
- (id)initWithCoreStatus:(id)status;
- (id)initWithStatus:(id)status;

@end

#endif /* TTACoreRetweetReference_h */
