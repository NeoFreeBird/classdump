//
#ifndef _TtP14TFSTwitterCore27TFSTwitterStatusEditHistory__Protocol_h
#define _TtP14TFSTwitterCore27TFSTwitterStatusEditHistory__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterScribeTweetEditInformation.h"

@class NSArray, NSDate;

@protocol TFSTwitterCore.TFSTwitterStatusEditHistory <NSObject>

@required

@property (nonatomic, readonly) _Bool hasEditHistory;
@property (nonatomic, readonly) _Bool isInEditableTimeWindow;
@property (nonatomic, readonly) _Bool isLatestEdit;
@property (nonatomic, readonly) _Bool isEditEligible;
@property (nonatomic, readonly) long long editsRemaining;
@property (nonatomic, readonly) _Bool isStaleTweet;
@property (nonatomic, readonly) _Bool isEditable;
@property (nonatomic, readonly) long long latestTweetID;
@property (nonatomic, readonly) NSArray *editedTweetIDs;
@property (nonatomic, readonly) double editWindowTimeInterval;
@property (nonatomic, readonly) NSDate *editableUntilDate;
@property (nonatomic, readonly) TFSTwitterScribeTweetEditInformation *scribeEditInformation;

@optional

@end

#endif /* _TtP14TFSTwitterCore27TFSTwitterStatusEditHistory__Protocol_h */
