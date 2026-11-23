//
#ifndef _TtP14TFSTwitterCore27TFSTwitterStatusEditHistory__Protocol_h
#define _TtP14TFSTwitterCore27TFSTwitterStatusEditHistory__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSDate, TFSTwitterScribeTweetEditInformation;

@protocol TFSTwitterCore.TFSTwitterStatusEditHistory <NSObject>

@required

@property (readonly, nonatomic) _Bool hasEditHistory;
@property (readonly, nonatomic) _Bool isInEditableTimeWindow;
@property (readonly, nonatomic) _Bool isLatestEdit;
@property (readonly, nonatomic) _Bool isEditEligible;
@property (readonly, nonatomic) long long editsRemaining;
@property (readonly, nonatomic) _Bool isStaleTweet;
@property (readonly, nonatomic) _Bool isEditable;
@property (readonly, nonatomic) long long latestTweetID;
@property (readonly, copy, nonatomic) NSArray *editedTweetIDs;
@property (readonly, nonatomic) double editWindowTimeInterval;
@property (readonly, copy, nonatomic) NSDate *editableUntilDate;
@property (readonly, nonatomic) TFSTwitterScribeTweetEditInformation *scribeEditInformation;

@optional

@end

#endif /* _TtP14TFSTwitterCore27TFSTwitterStatusEditHistory__Protocol_h */
