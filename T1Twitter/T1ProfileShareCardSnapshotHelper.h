//
#ifndef T1ProfileShareCardSnapshotHelper_h
#define T1ProfileShareCardSnapshotHelper_h
@import Foundation;

@class NSObject;

@interface T1ProfileShareCardSnapshotHelper : NSObject // (Swift)

/* class methods */
+ (id)snapshotProfileCardsWithUser:(id)user bannerImage:(id)image avatarImage:(id)image;
+ (id)shareCardViewWithUser:(id)user bannerImage:(id)image avatarImage:(id)image;

/* instance methods */
- (id)init;

@end

#endif /* T1ProfileShareCardSnapshotHelper_h */
