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
