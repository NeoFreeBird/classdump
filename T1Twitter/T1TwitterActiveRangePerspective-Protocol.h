//
#ifndef T1TwitterActiveRangePerspective_Protocol_h
#define T1TwitterActiveRangePerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSString, TFSTwitterEntitySet, TFSTwitterGeotag, TFSTwitterMediaInfo;

@protocol T1TwitterActiveRangePerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) long long statusID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) NSDictionary *scribeParameters;
@property (readonly, nonatomic) TFSTwitterGeotag *geotag;
@property (readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property (readonly, nonatomic) TFSTwitterEntitySet *entities;

@optional

@end

#endif /* T1TwitterActiveRangePerspective_Protocol_h */
