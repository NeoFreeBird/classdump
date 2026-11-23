//
#ifndef TCMAboutCommunitySpacesPromptViewDelegate_Protocol_h
#define TCMAboutCommunitySpacesPromptViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCMAboutCommunitySpacesPromptViewDelegate <NSObject>

@required

@property (nonatomic, readonly) _Bool communitySpaceNuxShouldShowCreationOption;

/* required instance methods */
- (void)onCommunitySpaceNuxDidAppear;
- (void)onCommunitySpaceNuxConfirmTap;
- (void)onCommunitySpaceNuxDenyTap;

@optional

@end

#endif /* TCMAboutCommunitySpacesPromptViewDelegate_Protocol_h */
