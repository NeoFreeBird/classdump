//
#ifndef TASSpaceCreationCommunityModel_h
#define TASSpaceCreationCommunityModel_h
@import Foundation;

@class NSObject, NSString;

@interface TASSpaceCreationCommunityModel : NSObject // (Swift)

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *name;

/* instance methods */
- (id)initWithId:(id)id name:(id)name;
- (id)init;

@end

#endif /* TASSpaceCreationCommunityModel_h */
