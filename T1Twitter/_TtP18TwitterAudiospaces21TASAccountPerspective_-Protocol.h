//
#ifndef _TtP18TwitterAudiospaces21TASAccountPerspective__Protocol_h
#define _TtP18TwitterAudiospaces21TASAccountPerspective__Protocol_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@class NSString;

@protocol TwitterAudiospaces.TASAccountPerspective <TAPAccount.TAPAccountPerspective>

@required

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long userID;

@optional

@end

#endif /* _TtP18TwitterAudiospaces21TASAccountPerspective__Protocol_h */
